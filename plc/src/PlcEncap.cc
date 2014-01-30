/*

Lehrstuhl fuer Energietransport und -speicherung
UNIVERSITAET DUISBURG-ESSEN

ef.Ruhr E-DeMa AP-2

Wissenschaftlicher Mitarbeiter:
Dipl.-Ing. Holger Kellerbauer

Das Linklayer-Paket "powerline" umfasst eine Sammlung von Modulen, die zur Simulation von Powerline-
Uebertragungsstrecken in intelligenten Energieverteilsystemen programmiert worden sind.

Dieser Quellcode wurde erstellt von Dipl.-Ing. Holger Kellerbauer - er basiert auf dem INET Framework-Modul
"Linklayer/Ethernet" von Andras Varga (c) 2003. Er ist gesitiges Eigentum des Lehrstuhles fuer Energietransport
und -speicherung der Universitaet Duisburg-Essen, und darf ohne Genehmigung weder weitergegeben, noch verwendet
werden.

*/

#include <stdio.h>
#include "PlcEncap.h"
#include "PlcFrame_m.h"
#include "Ieee802Ctrl_m.h"
#include "IInterfaceTable.h"
#include "InterfaceTableAccess.h"
#include "PlcMAC.h"

Define_Module(PlcEncap);

void PlcEncap::initialize()
{
	reportEnabled = par("reportEnabled");
    seqNum = 0;
    WATCH(seqNum);
    higherLayerOffset_TEMP = 0;
    typeOfModem = par("typeOfModem");

    PRIORITY_1_CHANCE = par("PRIORITY_1_CHANCE");
	PRIORITY_2_CHANCE = par("PRIORITY_2_CHANCE");
	PRIORITY_3_CHANCE = par("PRIORITY_3_CHANCE");

	MAX_PACKETBURST = par("MAX_PACKETBURST");
	GIGABIT_MAX_BURST_BYTES = par("GIGABIT_MAX_BURST_BYTES");
	MAX_PLC_DATA = par("MAX_PLC_DATA");
	MAX_PLC_FRAME = par("MAX_PLC_FRAME");
	MIN_PLC_FRAME = par("MIN_PLC_FRAME");
	INTERFRAME_GAP_BITS = par("INTERFRAME_GAP_BITS");
	MAX_ATTEMPTS = par("MAX_ATTEMPTS");
	BACKOFF_RANGE_LIMIT = par("BACKOFF_RANGE_LIMIT");
	JAM_SIGNAL_BYTES = par("JAM_SIGNAL_BYTES");
	PREAMBLE_BYTES = par("PREAMBLE_BYTES");
	SFD_BYTES = par("SFD_BYTES");
	PAUSE_BITTIME = par("PAUSE_BITTIME");
	PLC_MAC_FRAME_BYTES = par("PLC_MAC_FRAME_BYTES");
	PLC_LLC_HEADER_LENGTH = par("PLC_LLC_HEADER_LENGTH");
	PLC_SNAP_HEADER_LENGTH = par("PLC_SNAP_HEADER_LENGTH");
	PLC_PAUSE_COMMAND_BYTES = par("PLC_PAUSE_COMMAND_BYTES");

    totalFromHigherLayer = totalFromMAC = totalPauseSent = 0;
    WATCH(totalFromHigherLayer);
    WATCH(totalFromMAC);
    WATCH(totalPauseSent);

    myDataCollector = this->getParentModule();
    for (int i=0; i<10; i++)
	{
		if(myDataCollector->getParentModule()==NULL) break;
		myDataCollector = myDataCollector->getParentModule();
	}
    if (myDataCollector == NULL) return;
    myDataCollector = myDataCollector->getSubmodule("dataCollector");
    if (myDataCollector == NULL) return;
    if (COMMENTS_ON) EV << "Found " << myDataCollector->getName() << " as collector." << endl;
}

void PlcEncap::handleMessage(cMessage *msg)
{
    if (msg->arrivedOn("lowerLayerIn"))
    {
    	readCreationTime(msg);
        processFrameFromMAC(check_and_cast<PlcFrame *>(msg));
    }
    else
    {
        // from higher layer
    	simtime_t higherLayerOffset = simTime() - msg->getCreationTime();
    	if (COMMENTS_ON) EV << "higherLayerOffset = " << higherLayerOffset*1000 << "ms for "
							<< msg->getName() << "." << endl;
    	// higherLayerOffsetStats.collect(higherLayerOffset); // in s
    	// higherLayerOffsetVector.record(higherLayerOffset); // in s
    	higherLayerOffset_TEMP = higherLayerOffset;
    	/*
    	if(myDataCollector != NULL)
		{
			myData = new MeasurementData("MES_DAT");
			myData->setHigherLayerOffset(higherLayerOffset);
			myData->setRunTime(-1);
			myData->setRunTime_clean(-1);
			myData->setTypeOfModem(typeOfModem);
			cMessage *thisMsg = check_and_cast<cMessage *>(myData);
			sendDirect(thisMsg,0,0,myDataCollector,"dataIn");
		}
		*/
        switch(msg->getKind())
        {
            case IEEE802CTRL_DATA:
            case 0: // default message kind (0) is also accepted
              processPacketFromHigherLayer(PK(msg));
              break;

            case IEEE802CTRL_SENDPAUSE:
              // higher layer want MAC to send PAUSE frame
              handleSendPause(msg);
              break;

            default:
              error("received message `%s' with unknown message kind %d", msg->getName(), msg->getKind());
        }
    }
    if (ev.isGUI())
        updateDisplayString();
}

void PlcEncap::updateDisplayString()
{
    char buf[80];
    sprintf(buf, "passed up: %ld\nsent: %ld", totalFromMAC, totalFromHigherLayer);
    getDisplayString().setTagArg("t",0,buf);
}

void PlcEncap::processPacketFromHigherLayer(cPacket *msg)
{
    if (msg->getByteLength() > MAX_PLC_DATA)
        error("packet from higher layer (%d bytes) exceeds maximum powerline payload length (%d)", msg->getByteLength(), MAX_PLC_DATA);
    totalFromHigherLayer++;

    // Creates MAC header information and encapsulates received higher layer data
    // with this information and transmits resultant frame to lower layer

    // create powerline frame, fill it in from Ieee802Ctrl and encapsulate msg in it
    if (COMMENTS_ON) EV << "Encapsulating higher layer packet `" << msg->getName() <<"' for MAC\n";

    Ieee802Ctrl *plcctrl = check_and_cast<Ieee802Ctrl*>(msg->removeControlInfo());
    PlcIIFrame *frame = new PlcIIFrame(msg->getName());

    frame->setSrc(plcctrl->getSrc());  // if blank, will be filled in by MAC
    frame->setDest(plcctrl->getDest());
    frame->setPlcType(plcctrl->getEtherType());
    frame->setByteLength(PLC_MAC_FRAME_BYTES);
    frame->setEncapsulationTime(simTime());
    frame->setHigherLayerOffset(higherLayerOffset_TEMP);
    frame->setType(typeOfModem);
    higherLayerOffset_TEMP = 0;

    // CHANGE ------------------------------------------------------------------------------
	/*
	   Es gibt keinen Mechsnismus in OMNeT++, um die Prioritaet durch die oberen Protokollschichten
	   vorgeben zu lassen, ohne massgeblich in diese Module einzugreifen, deshalb muss die Zuordnung
	   der Prioritaeten zu den Nachrichten statistisch zufaellig erfolgen. Fuer eine Langzeitsimulation
	   ist dies ein probates Mittel, da auf lange sicht nur der erzielte Durchsatz von Interesse ist.
	*/
    if(RANDOM_PRIORITY == 1) frame->setPriority(priorityDistribution());
	// -------------------------------------------------------------------------------------

    delete plcctrl;

    frame->encapsulate(msg);
    if (frame->getByteLength() < MIN_PLC_FRAME)
        frame->setByteLength(MIN_PLC_FRAME);  // "padding"

    send(frame, "lowerLayerOut");
}

void PlcEncap::processFrameFromMAC(PlcFrame *frame)
{
    totalFromMAC++;

    // decapsulate and attach control info
    cPacket *higherlayermsg = frame->decapsulate();

    // add Ieee802Ctrl to packet
    Ieee802Ctrl *plcctrl = new Ieee802Ctrl();
    plcctrl->setSrc(frame->getSrc());
    plcctrl->setDest(frame->getDest());
    higherlayermsg->setControlInfo(plcctrl);

    if (COMMENTS_ON) EV << "Decapsulating frame `" << frame->getName() <<"', passing up contained "
          "packet `" << higherlayermsg->getName() << "' to higher layer\n";

    // pass up to higher layers.
    send(higherlayermsg, "upperLayerOut");
    delete frame;
}

void PlcEncap::handleSendPause(cMessage *msg)
{
    Ieee802Ctrl *plcctrl = dynamic_cast<Ieee802Ctrl*>(msg->removeControlInfo());
    if (!plcctrl)
        error("PAUSE command `%s' from higher layer received without Ieee802Ctrl", msg->getName());
    int pauseUnits = plcctrl->getPauseUnits();
    delete plcctrl;

    if (COMMENTS_ON) EV << "Creating and sending PAUSE frame, with duration=" << pauseUnits << " units\n";

    // create powerline frame
    char framename[30];
    sprintf(framename, "pause-%d-%d", getId(), seqNum++);
    PlcPauseFrame *frame = new PlcPauseFrame(framename);
    frame->setPauseTime(pauseUnits);

    frame->setByteLength(PLC_MAC_FRAME_BYTES+PLC_PAUSE_COMMAND_BYTES);
    if (frame->getByteLength() < MIN_PLC_FRAME)
        frame->setByteLength(MIN_PLC_FRAME);

    send(frame, "lowerLayerOut");
    delete msg;

    totalPauseSent++;
}

void PlcEncap::readCreationTime(cMessage *msg)
{
	if (COMMENTS_ON) EV << "readCreationTime() / readRunTime()" << endl;
	simtime_t now = simTime();
	simtime_t then_t = msg->getCreationTime();
	if (COMMENTS_ON) EV << "Now: " << now << "s, then: " << then_t << "s" << endl;
	simtime_t runTime = now - then_t;
	// runTimeStats.collect(runTime); // in s
	// runTimeVector.record(runTime); // in s

	PlcFrame *frame = check_and_cast<PlcFrame*> (msg);
	simtime_t runTime_clean = simTime() - frame->getEncapsulationTime();
	if (COMMENTS_ON) EV << "Now: " << now << "s, then: " << frame->getEncapsulationTime() << "s (clean)" << endl;

	// runTimeStats_2.collect(runTime_clean); // in s
	// runTimeVector_2.record(runTime_clean); // in s

	simtime_t higherLayerOffset = frame->getHigherLayerOffset();
	if (COMMENTS_ON) EV << "higherLayerOffset for this frame was " << higherLayerOffset*1000 << "ms." << endl;

	if(myDataCollector != NULL && reportEnabled == true)
	{
		myData = new MeasurementData("MES_DAT");
		myData->setRunTime(runTime);
		myData->setRunTime_clean(runTime_clean);
		myData->setHigherLayerOffset(higherLayerOffset);
		myData->setTypeOfModem(typeOfModem);
		myData->setPriority(frame->getPriority());
		cMessage *thisMsg = check_and_cast<cMessage *>(myData);
		sendDirect(thisMsg,0,0,myDataCollector,"dataIn");
	}
	if (COMMENTS_ON) EV << "Message was underway for " << runTime*1000 << "ms. (with higher layers)" << endl;
	if (COMMENTS_ON) EV << "Message was underway for " << runTime_clean*1000 << "ms. (w/o higher layers)" << endl;
}

int PlcEncap::priorityDistribution()
{
	int priority_1 = PRIORITY_1_CHANCE;
	if (priority_1 == 100) return 1;
	int priority_2 = PRIORITY_2_CHANCE + PRIORITY_1_CHANCE;
	int priority_3 = PRIORITY_3_CHANCE + PRIORITY_2_CHANCE + PRIORITY_1_CHANCE;

	volatile int x = rand()%100 + 1;
	if (x < priority_1)
	{
		  return 1;
	}
	if (x >= priority_1 && x < priority_2)
	{
		  return 2;
	}
	if (x >= priority_2 && x < priority_3)
	{
		  return 3;
	}
	else
	{
		  return 4;
	}
}

void PlcEncap::finish()
{
	/*
	cModule *myModule = this->getParentModule();
	EV << "RUNTIME STATS of " << this->getName();
	for (int i=0; i<10; i++)
	{
		EV << " <- " << myModule->getName();
		myModule = myModule->getParentModule();
		if(myModule==NULL) break;
	}
	EV << endl;
	EV << "Runtime, min:    " << runTimeStats.getMin()*1000 << "ms" << endl;
	EV << "Runtime, max:    " << runTimeStats.getMax()*1000 << "ms" <<endl;
	EV << "Runtime, mean:   " << runTimeStats.getMean()*1000 << "ms" <<endl;
	EV << "Runtime, stddev: " << runTimeStats.getStddev()*1000 << "ms" <<endl;

	EV << "Higher layer offset, min:    " << higherLayerOffsetStats.getMin()*1000 << "ms" << endl;
	EV << "Higher layer offset, max:    " << higherLayerOffsetStats.getMax()*1000 << "ms" <<endl;
	EV << "Higher layer offset, mean:   " << higherLayerOffsetStats.getMean()*1000 << "ms" <<endl;
	EV << "Higher layer offset, stddev: " << higherLayerOffsetStats.getStddev()*1000 << "ms" <<endl;

	EV << "Runtime clean, min:    " << runTimeStats_2.getMin()*1000 << "ms" << endl;
	EV << "Runtime clean, max:    " << runTimeStats_2.getMax()*1000 << "ms" <<endl;
	EV << "Runtime clean, mean:   " << runTimeStats_2.getMean()*1000 << "ms" <<endl;
	EV << "Runtime clean, stddev: " << runTimeStats_2.getStddev()*1000 << "ms" <<endl;

    recordScalar("packets from higher layer", totalFromHigherLayer);
    recordScalar("frames from MAC", totalFromMAC);
    runTimeStats.recordAs("RunTime");
    runTimeStats_2.recordAs("Runtime_clean");
    higherLayerOffsetStats.recordAs("higherLayerOffset");
    */
}
