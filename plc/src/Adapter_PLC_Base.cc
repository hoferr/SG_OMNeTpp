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
#include <string.h>
#include <omnetpp.h>
#include "Adapter_PLC_Base.h"
#include "IPassiveQueue.h"
#include "IInterfaceTable.h"
#include "InterfaceTableAccess.h"

//static const double SPEED_OF_LIGHT = 200000000.0;  // TODO: Changed by Ramon; already defined in INETDefs.h

Adapter_PLC_Base::Adapter_PLC_Base()
{
    nb = NULL;
    queueModule = NULL;
    interfaceEntry = NULL;
    endTxMsg = endIFGMsg = endPauseMsg = NULL;
}

Adapter_PLC_Base::~Adapter_PLC_Base()
{
    cancelAndDelete(endTxMsg);
    cancelAndDelete(endIFGMsg);
    cancelAndDelete(endPauseMsg);
}

void Adapter_PLC_Base::initialize()
{
    physOutGate = gate("phys$o");

    initializeFlags();

    initializeTxrate();
    WATCH(txrate);

    initializeMACAddress();
    initializeQueueModule();
    initializeNotificationBoard();
    initializeStatistics();

    /*
		 The adapter has no higher layer!
    */
    // registerInterface(txrate); // needs MAC address

    // initialize queue
    txQueue.setName("txQueue");

    // initialize self messages
    endTxMsg = new cMessage("EndTransmission", ENDTRANSMISSION);
    endIFGMsg = new cMessage("EndIFG", ENDIFG);
    endPauseMsg = new cMessage("EndPause", ENDPAUSE);

    // initialize states
    transmitState = TX_IDLE_STATE;
    receiveState = RX_IDLE_STATE;
    WATCH(transmitState);
    WATCH(receiveState);

    // initalize pause
    pauseUnitsRequested = 0;
    WATCH(pauseUnitsRequested);

    // initialize queue limit
    txQueueLimit = par("txQueueLimit");
    WATCH(txQueueLimit);
}

void Adapter_PLC_Base::initializeQueueModule()
{
    if (par("queueModule").stringValue()[0])
    {
        cModule *module = getParentModule()->getSubmodule(par("queueModule").stringValue());
        queueModule = check_and_cast<IPassiveQueue *>(module);
        if (COMMENTS_ON) EV << "Requesting first frame from queue module\n";
        queueModule->requestPacket();
    }
}

void Adapter_PLC_Base::initializeMACAddress()
{
    const char *addrstr = par("address");

    if (!strcmp(addrstr,"auto"))
    {
        // assign automatic address
        address = MACAddress::generateAutoAddress();

        // change module parameter from "auto" to concrete address
        par("address").setStringValue(address.str().c_str());
    }
    else
    {
        address.setAddress(addrstr);
    }
}

void Adapter_PLC_Base::initializeNotificationBoard()
{
    hasSubscribers = false;
    if (interfaceEntry) {
        nb = NotificationBoardAccess().getIfExists();
        notifDetails.setInterfaceEntry(interfaceEntry);
        nb->subscribe(this, NF_SUBSCRIBERLIST_CHANGED);
        updateHasSubcribers();
    }
}

void Adapter_PLC_Base::initializeFlags()
{
    // initialize connected flag
    connected = physOutGate->getPathEndGate()->isConnected();
    if (!connected)
    	if (COMMENTS_ON) EV << "MAC not connected to a network.\n";
    WATCH(connected);

    // TODO: this should be settable from the gui
    // initialize disabled flag
    // Note: it is currently not supported to enable a disabled MAC at runtime.
    // Difficulties: (1) autoconfig (2) how to pick up channel state (free, tx, collision etc)
    disabled = false;
    WATCH(disabled);

    // initialize promiscuous flag
    promiscuous = par("promiscuous");
    WATCH(promiscuous);
}

void Adapter_PLC_Base::initializeStatistics()
{
    framesSentInBurst = 0;
    bytesSentInBurst = 0;

    numFramesSent = numFramesReceivedOK = numBytesSent = numBytesReceivedOK = 0;
    numFramesPassedToHL = numDroppedBitError = numDroppedNotForUs = 0;
    numFramesFromHL = numDroppedIfaceDown = 0;
    numPauseFramesRcvd = numPauseFramesSent = 0;

    WATCH(framesSentInBurst);
    WATCH(bytesSentInBurst);

    WATCH(numFramesSent);
    WATCH(numFramesReceivedOK);
    WATCH(numBytesSent);
    WATCH(numBytesReceivedOK);
    WATCH(numFramesFromHL);
    WATCH(numDroppedIfaceDown);
    WATCH(numDroppedBitError);
    WATCH(numDroppedNotForUs);
    WATCH(numFramesPassedToHL);
    WATCH(numPauseFramesRcvd);
    WATCH(numPauseFramesSent);

    /*
    numFramesSentVector.setName("framesSent");
    numFramesReceivedOKVector.setName("framesReceivedOK");
    numBytesSentVector.setName("bytesSent");
    numBytesReceivedOKVector.setName("bytesReceivedOK");
    numDroppedIfaceDownVector.setName("framesDroppedIfaceDown");
    numDroppedBitErrorVector.setName("framesDroppedBitError");
    numDroppedNotForUsVector.setName("framesDroppedNotForUs");
    numFramesPassedToHLVector.setName("framesPassedToHL");
    numPauseFramesRcvdVector.setName("pauseFramesRcvd");
    numPauseFramesSentVector.setName("pauseFramesSent");
    */
}

void Adapter_PLC_Base::registerInterface(double txrate)
{
    IInterfaceTable *ift = InterfaceTableAccess().getIfExists();
    if (!ift)
        return;

//    interfaceEntry = new InterfaceEntry();
    interfaceEntry = new InterfaceEntry(NULL);  // TODO: Changed by Ramon

    // interface name: our module name without special characters ([])
    char *interfaceName = new char[strlen(getParentModule()->getFullName())+1];
    char *d=interfaceName;
    for (const char *s=getParentModule()->getFullName(); *s; s++)
        if (isalnum(*s))
            *d++ = *s;
    *d = '\0';

    interfaceEntry->setName(interfaceName);
    delete [] interfaceName;

    // data rate
    interfaceEntry->setDatarate(txrate);

    // generate a link-layer address to be used as interface token for IPv6
    interfaceEntry->setMACAddress(address);
    interfaceEntry->setInterfaceToken(address.formInterfaceIdentifier());
    //InterfaceToken token(0, simulation.getUniqueNumber(), 64);
    //interfaceEntry->setInterfaceToken(token);

    // MTU: typical values are 576 (Internet de facto), 1500 (PLC-friendly),
    // 4000 (on some point-to-point links), 4470 (Cisco routers default, FDDI compatible)
    interfaceEntry->setMtu(par("mtu"));

    // capabilities
    interfaceEntry->setMulticast(true);
    interfaceEntry->setBroadcast(true);

    // add
//    ift->addInterface(interfaceEntry, this);
    ift->addInterface(interfaceEntry);  // TODO: Changed by Ramon
}


bool Adapter_PLC_Base::checkDestinationAddress(PlcFrame *frame)
{
	/*
    // If not set to promiscuous = on, then checks if received frame contains destination MAC address
    // matching port's MAC address, also checks if broadcast bit is set
    if (!promiscuous && !frame->getDest().isBroadcast() && !frame->getDest().equals(address))
    {
    	if (COMMENTS_ON) EV << "Frame `" << frame->getName() <<"' not destined to us, discarding\n";
        numDroppedNotForUs++;
        numDroppedNotForUsVector.record(numDroppedNotForUs);
        delete frame;

        return false;
    }
	*/
	if (COMMENTS_ON) EV << "Since I'm an adapter, I will pass through every frame!" << endl;
	return true;
}

void Adapter_PLC_Base::calculateParameters()
{
    if (disabled || !connected)
    {
        bitTime = slotTime = interFrameGap = jamDuration = shortestFrameDuration = 0;
        carrierExtension = frameBursting = false;
        return;
    }
    // CHANGE ---------------------------------------------------------------------------------------
    /*
    Diesen Abschnitt mus man ausblenden, da er die Uebertragungsraten auf wenige, zulaessige
    reduziert, was fuer Powerline absolut nicht zutreffend ist.

    if (txrate != PLC_TXRATE && txrate != FAST_PLC_TXRATE &&
        txrate != GIGABIT_PLC_TXRATE && txrate != FAST_GIGABIT_PLC_TXRATE)
    {
        error("nonstandard transmission rate %g, must be %g, %g, %g or %g bit/sec",
            txrate, PLC_TXRATE, FAST_PLC_TXRATE, GIGABIT_PLC_TXRATE, FAST_GIGABIT_PLC_TXRATE);
    }
	*/
    double temp = ROBO_DATARATE * 1000000;
    if (txrate <= temp)
    {
    	if (COMMENTS_ON) EV << "Measured datarate is estimated below ROBO datarate." << endl;
    	if (COMMENTS_ON) EV << "ROBO datarate is the lowest datarate possible." << endl;
    	if (COMMENTS_ON) EV << "TX rate will be set to ROBO datarate." << endl;
    	txrate = ROBO_DATARATE * 1000000;
    }
    if (txrate <= ROBO_DATARATE || txrate >= 1000000000) txrate = ROBO_DATARATE;

    bitTime = 1/(double)txrate;
    if (COMMENTS_ON) EV << endl << "Bit time is calculated to " << bitTime << "s." << endl;
    /*
    Dieser Abschnitt muss ausgeblendet werden, da die Berechnung der Parameter fuer
    Powerline-Uebertragungen etwas anders von Statten gehen muss.

    // set slot time
    if (txrate==PLC_TXRATE || txrate==FAST_PLC_TXRATE)
        slotTime = SLOT_TIME;
    else
        slotTime = GIGABIT_SLOT_TIME;

    // only if Gigabit PLC
    frameBursting = (txrate==GIGABIT_PLC_TXRATE || txrate==FAST_GIGABIT_PLC_TXRATE);
    carrierExtension = (slotTime == GIGABIT_SLOT_TIME && !duplexMode);

    interFrameGap = INTERFRAME_GAP_BITS/(double)txrate;
    jamDuration = 8*JAM_SIGNAL_BYTES*bitTime;
    shortestFrameDuration = carrierExtension ? GIGABIT_MIN_FRAME_WITH_EXT : MIN_PLC_FRAME;
    */
    // set slot time
	slotTime = 512/txrate;
	if (COMMENTS_ON) EV << "Slot time is set to " << slotTime << "s." << endl;

	// only if fast PLC
	// Ein Burst darf nicht laenger als 5000 usec sein. 4 x MaxFramedauer < 5000 usec => FrameBursting = true!
	simtime_t k = 0.005; /* s */
	simtime_t x = (simtime_t)(bitTime * (MAX_PLC_FRAME * 8 /* bytes */) * 4);
	if (COMMENTS_ON) EV << "Calculation for frame bursting resulted in " << x << " sec." << endl;
	if (COMMENTS_ON) EV << "Threshold for frame bursting is " << k << " sec." << endl;
	if (x < k)
	{
		frameBursting = true;
	}
	else
	{
		frameBursting = false;
	}
	if (COMMENTS_ON) EV << "Frame bursting is at " << frameBursting << "." << endl;

	carrierExtension = false; // not available for PLC
	if (frameBursting)
	{
		interFrameGap =  /* INTERFRAME_GAP_BITS/(double)txrate; */ CIFS / 1000000;
	}
	else
	{
		interFrameGap =  /* INTERFRAME_GAP_BITS/(double)txrate; */ RIFS / 1000000;
	}
	if (COMMENTS_ON) EV << "Inter frame gap is at " << interFrameGap << "s." << endl;
	jamDuration = 8*JAM_SIGNAL_BYTES*bitTime;
	if (COMMENTS_ON) EV << "Jam duration is at " << jamDuration << "s." << endl;
	shortestFrameDuration = MIN_PLC_FRAME;
	// ----------------------------------------------------------------------------------------------
}

void Adapter_PLC_Base::printParameters()
{
    // Dump parameters
	if (COMMENTS_ON) EV << "MAC address: " << address << (promiscuous ? ", promiscuous mode" : "") << endl;
	if (COMMENTS_ON) EV << "txrate: " << txrate << ", " << (duplexMode ? "duplex" : "half-duplex") << endl;
#if 0
    EV << "bitTime: " << bitTime << endl;
    EV << "carrierExtension: " << carrierExtension << endl;
    EV << "frameBursting: " << frameBursting << endl;
    EV << "slotTime: " << slotTime << endl;
    EV << "interFrameGap: " << interFrameGap << endl;
    EV << endl;
#endif
}

void Adapter_PLC_Base::processFrameFromUpperLayer(PlcFrame *frame)
{
	if (COMMENTS_ON) EV << "Received frame from upper layer: " << frame << endl;

    if (frame->getDest().equals(address))
    {
        error("logic error: frame %s from higher layer has local MAC address as dest (%s)",
              frame->getFullName(), frame->getDest().str().c_str());
    }

    if (frame->getByteLength() > MAX_PLC_FRAME)
        error("packet from higher layer (%d bytes) exceeds maximum PLC frame size (%d)", frame->getByteLength(), MAX_PLC_FRAME);

    // must be PlcFrame (or PlcPauseFrame) from upper layer
    bool isPauseFrame = (dynamic_cast<PlcPauseFrame*>(frame)!=NULL);
    if (!isPauseFrame)
    {
        numFramesFromHL++;

        if (txQueueLimit && txQueue.length()>txQueueLimit)
            error("txQueue length exceeds %d -- this is probably due to "
                  "a bogus app model generating excessive traffic "
                  "(or if this is normal, increase txQueueLimit!)",
                  txQueueLimit);

        // fill in src address if not set
        if (frame->getSrc().isUnspecified())
            frame->setSrc(address);

        // store frame and possibly begin transmitting
        if (COMMENTS_ON) EV << "Packet " << frame << " arrived from higher layers, enqueueing\n";
        txQueue.insert(frame);
    }
    else
    {
    	if (COMMENTS_ON) EV << "PAUSE received from higher layer\n";

        // PAUSE frames enjoy priority -- they're transmitted before all other frames queued up
        if (!txQueue.empty())
            txQueue.insertBefore(txQueue.front(), frame);  // front() frame is probably being transmitted
        else
            txQueue.insert(frame);
    }

}

void Adapter_PLC_Base::processMsgFromNetwork(cPacket *frame)
{
	if (COMMENTS_ON) EV << "Received frame from network: " << frame << endl;
    // frame must be PlcFrame or PlcJam
    if (dynamic_cast<PlcFrame*>(frame)==NULL && dynamic_cast<PlcJam*>(frame)==NULL)
        error("message with unexpected message class '%s' arrived from network (name='%s')",
                frame->getClassName(), frame->getFullName());

    // detect cable length violation in half-duplex mode
    if (!duplexMode && simTime()-frame->getSendingTime()>=shortestFrameDuration)
        error("very long frame propagation time detected, maybe cable exceeds maximum allowed length? "
              "(%lgs corresponds to an approx. %lgm cable)",
              SIMTIME_STR(simTime() - frame->getSendingTime()),
              SIMTIME_STR((simTime() - frame->getSendingTime())*SPEED_OF_LIGHT));
}

void Adapter_PLC_Base::frameReceptionComplete(PlcFrame *frame)
{
    int pauseUnits;
    PlcPauseFrame *pauseFrame;

    if ((pauseFrame=dynamic_cast<PlcPauseFrame*>(frame))!=NULL)
    {
        pauseUnits = pauseFrame->getPauseTime();
        delete frame;
        numPauseFramesRcvd++;
        // numPauseFramesRcvdVector.record(numPauseFramesRcvd);
        processPauseCommand(pauseUnits);
    }
    else
    {
        processReceivedDataFrame((PlcFrame *)frame);
    }
}

void Adapter_PLC_Base::processReceivedDataFrame(PlcFrame *frame)
{
    // bit errors
    if (frame->hasBitError())
    {
        numDroppedBitError++;
        // numDroppedBitErrorVector.record(numDroppedBitError);
        delete frame;
        return;
    }

    // strip preamble and SFD
    frame->addByteLength(-PREAMBLE_BYTES-SFD_BYTES);

    // statistics
    numFramesReceivedOK++;
    numBytesReceivedOK += frame->getByteLength();
    // numFramesReceivedOKVector.record(numFramesReceivedOK);
    // numBytesReceivedOKVector.record(numBytesReceivedOK);

    if (!checkDestinationAddress(frame))
        return;

    numFramesPassedToHL++;
    // numFramesPassedToHLVector.record(numFramesPassedToHL);

    // pass up to upper layer
    send(frame, "upperLayerOut");
}

void Adapter_PLC_Base::processPauseCommand(int pauseUnits)
{
    if (transmitState==TX_IDLE_STATE)
    {
    	if (COMMENTS_ON) EV << "PAUSE frame received, pausing for " << pauseUnitsRequested << " time units\n";
        if (pauseUnits>0)
            scheduleEndPausePeriod(pauseUnits);
    }
    else if (transmitState==PAUSE_STATE)
    {
    	if (COMMENTS_ON) EV << "PAUSE frame received, pausing for " << pauseUnitsRequested << " more time units from now\n";
        cancelEvent(endPauseMsg);
        if (pauseUnits>0)
            scheduleEndPausePeriod(pauseUnits);
    }
    else
    {
        // transmitter busy -- wait until it finishes with current frame (endTx)
        // and then it'll go to PAUSE state
    	if (COMMENTS_ON) EV << "PAUSE frame received, storing pause request\n";
        pauseUnitsRequested = pauseUnits;
    }
}

void Adapter_PLC_Base::handleEndIFGPeriod()
{
    if (transmitState!=WAIT_IFG_STATE)
        error("Not in WAIT_IFG_STATE at the end of IFG period");

    if (txQueue.empty())
        error("End of IFG and no frame to transmit");

    // End of IFG period, okay to transmit, if Rx idle OR duplexMode
    cPacket *frame = (cPacket *)txQueue.front();
    if (COMMENTS_ON) EV << "IFG elapsed, now begin transmission of frame " << frame << endl;

    // CHANGE ----------------------------------------------------------------------------
	// We skip carrier extension, because there is no for plc communications
	/*
    // Perform carrier extension if in Gigabit PLC
    if (carrierExtension && frame->getByteLength() < GIGABIT_MIN_FRAME_WITH_EXT)
    {
        EV << "Performing carrier extension of small frame\n";
        frame->setByteLength(GIGABIT_MIN_FRAME_WITH_EXT);
    }
    */
    // -----------------------------------------------------------------------------------

    // start frame burst, if enabled
    if (frameBursting)
    {
    	if (COMMENTS_ON) EV << "Starting frame burst\n";
        framesSentInBurst = 0;
        bytesSentInBurst = 0;
    }
}

void Adapter_PLC_Base::handleEndTxPeriod()
{
    // we only get here if transmission has finished successfully, without collision
    if (transmitState!=TRANSMITTING_STATE || (!duplexMode && receiveState!=RX_IDLE_STATE))
        error("End of transmission, and incorrect state detected");

    if (txQueue.empty())
        error("Frame under transmission cannot be found");

    // get frame from buffer
    cPacket *frame = (cPacket *)txQueue.pop();

    numFramesSent++;
    numBytesSent += frame->getByteLength();
    // numFramesSentVector.record(numFramesSent);
    // numBytesSentVector.record(numBytesSent);

    if (dynamic_cast<PlcPauseFrame*>(frame)!=NULL)
    {
        numPauseFramesSent++;
        // numPauseFramesSentVector.record(numPauseFramesSent);
    }

    if (COMMENTS_ON) EV << "Transmission of " << frame << " successfully completed\n";
    delete frame;
}

void Adapter_PLC_Base::handleEndPausePeriod()
{
    if (transmitState != PAUSE_STATE)
        error("At end of PAUSE not in PAUSE_STATE!");
    if (COMMENTS_ON) EV << "Pause finished, resuming transmissions\n";
    beginSendFrames();
}

void Adapter_PLC_Base::processMessageWhenNotConnected(cMessage *msg)
{
	if (COMMENTS_ON) EV << "Interface is not connected -- dropping packet " << msg << endl;
    delete msg;
    numDroppedIfaceDown++;
}

void Adapter_PLC_Base::processMessageWhenDisabled(cMessage *msg)
{
	if (COMMENTS_ON) EV << "MAC is disabled -- dropping message " << msg << endl;
    delete msg;
}

void Adapter_PLC_Base::scheduleEndIFGPeriod()
{
	// CHANGE ------------------------------------------------------------------------------
	/*
	   Anders als bei CSMA/CD (Ethernet) wird bei PLC CSMA/CA angewendet. Hierzu wird zu der
	   "normalen" Wartezeit nach der Feststellung, dass das Medium nicht belegt ist, eine
	   zufaellige zusaetzliche Wartezeit addiert, die ein Vielfaches von 1.28 us ist (dieser
	   Wert konnte beim Modemhersteller devolo erfragt werden).
	   Hierdurch werden Kollisionen noch unwahrscheinlicher, da nach Freigabe nicht alle
	   Modems mit Sendewunsch gleichzeitig versuchen, das Medium zu belegen.
	*/

	// For CSMA/CA, we have to add a random selected additional wait time
	int gap = CSMA_CA_MAX_ADDITIONAL_WAIT_TIME;
	int x = rand()%10;
	x = x * gap;
	simtime_t additional_wait_time = (simtime_t) x/1000;
	if (COMMENTS_ON) EV << "End of IFG period is scheduled at t=" << simTime()+interFrameGap +additional_wait_time << "." << endl;
	// -------------------------------------------------------------------------------------
    scheduleAt(simTime()+interFrameGap +additional_wait_time, endIFGMsg);
    transmitState = WAIT_IFG_STATE;
}

// CHANGE ------------------------------------------------------------------------------
void Adapter_PLC_Base::scheduleEndIFGPeriod(int priority)
/*
     Um trotz des durch CSMA/CA etwas zufaelligerem Mediumzugriff noch zu gewaehrleisten, das
     wichtige Informationen zur Aufrechterhaltung der Verbindungen gegenueber einfachem
     Datenverkehr bevorzugt werden, gibt es nach jeder Mediumsfreigabe die "Priority resolution
     period". In vier Stufen erhalten zunaechst die Modems mit wichtigen Frames den Vorzug.
     Die Periode wird dazu in 4 Teilabschnitte geteilt, und die durch CSMA/CA erweiterte
     Wartezeit wird innerhalb der Fenster aufgeloest.

         [----------------------------- Priority resolution period ------------------------------------]
     t-> [Window 1 - Priority 4] [Window 2 - Priority 3] [Window 3 - Priority 2] [Window 4 - Priority 1]
*/

{
	if (COMMENTS_ON) EV << "Scheduling end of IFG period ..." << endl;
	if (COMMENTS_ON) EV << "Priority based traffic detected. Priority is " << priority << "." << endl;
	// the higher the priority, the faster the channel access
	double whole_period = PRIORITY_RESOLUTION_PERIOD;
	if (COMMENTS_ON) EV << "Whole priority resolution period: " << whole_period << " micro sec" << endl;
	double quarter_period = whole_period/4;
	if (COMMENTS_ON) EV << "Quarter of the priority resolution period: " << quarter_period << " micro sec" << endl;
	double basic_priority_period = whole_period - (priority * quarter_period);
	if (COMMENTS_ON) EV << "Basic priority period for a priority of " << priority << " is: " << basic_priority_period << " micro sec" << endl;
	double fluctuation = quarter_period * 0.9; // 16,12 us
	if (COMMENTS_ON) EV << "The fluctuations are at maximum: " << fluctuation << " micro sec" << endl;
	// For CSMA/CA, we have to add a random selected additional wait time
	int gap = CSMA_CA_MAX_ADDITIONAL_WAIT_TIME;
	int int_k = rand()%11; // 0 us to 14,08 us
	if (COMMENTS_ON) EV << "Diceroll resulted in " << int_k << "." << endl;
	double m = fluctuation - (int_k * gap);
	double x = (m+basic_priority_period)/1000000;
	simtime_t priority_wait_time = (simtime_t) x; // us
	if (COMMENTS_ON) EV << "This time, the priority based additional wait time is calculated to: " << priority_wait_time * 1000000 << " micro sec" << endl;
	simtime_t complete_wait_time = interFrameGap+priority_wait_time;
	if (COMMENTS_ON) EV << "End of IFG period is scheduled at t=" << simTime()+complete_wait_time << " micro sec." << endl << endl;
    scheduleAt(simTime()+complete_wait_time, endIFGMsg);
    transmitState = WAIT_IFG_STATE;
}
// -------------------------------------------------------------------------------------

void Adapter_PLC_Base::scheduleEndTxPeriod(cPacket *frame)
{
    scheduleAt(simTime()+frame->getBitLength()*bitTime, endTxMsg);
    transmitState = TRANSMITTING_STATE;
}

void Adapter_PLC_Base::scheduleEndPausePeriod(int pauseUnits)
{
    // length is interpreted as 512-bit-time units
    simtime_t pausePeriod = pauseUnits*PAUSE_BITTIME*bitTime;
    scheduleAt(simTime()+pausePeriod, endPauseMsg);
    transmitState = PAUSE_STATE;
}

bool Adapter_PLC_Base::checkAndScheduleEndPausePeriod()
{
    if (pauseUnitsRequested>0)
    {
        // if we received a PAUSE frame recently, go into PAUSE state
    	if (COMMENTS_ON) EV << "Going to PAUSE mode for " << pauseUnitsRequested << " time units\n";

        scheduleEndPausePeriod(pauseUnitsRequested);
        pauseUnitsRequested = 0;
        return true;
    }

    return false;
}

void Adapter_PLC_Base::beginSendFrames()
{
    if (!txQueue.empty())
    {
        // Other frames are queued, therefore wait IFG period and transmit next frame
    	if (COMMENTS_ON) EV << "Transmit next frame in output queue, after IFG period\n";
        scheduleEndIFGPeriod();
    }
    else
    {
        transmitState = TX_IDLE_STATE;
        if (queueModule)
        {
            // tell queue module that we've become idle
        	if (COMMENTS_ON) EV << "Requesting another frame from queue module\n";
            queueModule->requestPacket();
        }
        else
        {
            // No more frames set transmitter to idle
        	if (COMMENTS_ON) EV << "No more frames to send, transmitter set to idle\n";
        }
    }
}

void Adapter_PLC_Base::fireChangeNotification(int type, cPacket *msg)
{
    if (nb) {
        notifDetails.setPacket(msg);
        nb->fireChangeNotification(type, &notifDetails);
    }
}

void Adapter_PLC_Base::finish()
{
	/*
    if (!disabled)
    {
        simtime_t t = simTime();
        recordScalar("simulated time", t);
        recordScalar("txrate (Mb)", txrate/1000000);
        recordScalar("full duplex", duplexMode);
        recordScalar("frames sent",    numFramesSent);
        recordScalar("frames rcvd",    numFramesReceivedOK);
        recordScalar("bytes sent",     numBytesSent);
        recordScalar("bytes rcvd",     numBytesReceivedOK);
        recordScalar("frames from higher layer", numFramesFromHL);
        recordScalar("frames from higher layer dropped (iface down)", numDroppedIfaceDown);
        recordScalar("frames dropped (bit error)",  numDroppedBitError);
        recordScalar("frames dropped (not for us)", numDroppedNotForUs);
        recordScalar("frames passed up to HL", numFramesPassedToHL);
        recordScalar("PAUSE frames sent",  numPauseFramesSent);
        recordScalar("PAUSE frames rcvd",  numPauseFramesRcvd);

        if (t>0)
        {
            recordScalar("frames/sec sent", numFramesSent/t);
            recordScalar("frames/sec rcvd", numFramesReceivedOK/t);
            recordScalar("bits/sec sent",   8*numBytesSent/t);
            recordScalar("bits/sec rcvd",   8*numBytesReceivedOK/t);
        }
    }
    */
}

void Adapter_PLC_Base::updateDisplayString()
{
    // icon coloring
    const char *color;
    if (receiveState==RX_COLLISION_STATE)
        color = "red";
    else if (transmitState==TRANSMITTING_STATE)
        color = "yellow";
    else if (transmitState==JAMMING_STATE)
        color = "red";
    else if (receiveState==RECEIVING_STATE)
        color = "#4040ff";
    else if (transmitState==BACKOFF_STATE)
        color = "white";
    else if (transmitState==PAUSE_STATE)
        color = "gray";
    else
        color = "";
    getDisplayString().setTagArg("i",1,color);
    if (!strcmp(getParentModule()->getClassName(),"PLCInterface"))
        getParentModule()->getDisplayString().setTagArg("i",1,color);

    // connection coloring
    updateConnectionColor(transmitState);

#if 0
    // this code works but didn't turn out to be very useful
    const char *txStateName;
    switch (transmitState) {
        case TX_IDLE_STATE:      txStateName="IDLE"; break;
        case WAIT_IFG_STATE:     txStateName="WAIT_IFG"; break;
        case TRANSMITTING_STATE: txStateName="TX"; break;
        case JAMMING_STATE:      txStateName="JAM"; break;
        case BACKOFF_STATE:      txStateName="BACKOFF"; break;
        case PAUSE_STATE:        txStateName="PAUSE"; break;
        default: error("wrong tx state");
    }
    const char *rxStateName;
    switch (receiveState) {
        case RX_IDLE_STATE:      rxStateName="IDLE"; break;
        case RECEIVING_STATE:    rxStateName="RX"; break;
        case RX_COLLISION_STATE: rxStateName="COLL"; break;
        default: error("wrong rx state");
    }

    char buf[80];
    sprintf(buf, "tx:%s rx: %s\n#boff:%d #cTx:%d",
                 txStateName, rxStateName, backoffs, numConcurrentTransmissions);
    getDisplayString().setTagArg("t",0,buf);
#endif
}

void Adapter_PLC_Base::updateConnectionColor(int txState)
{
    const char *color;
    if (txState==TRANSMITTING_STATE)
        color = "yellow";
    else if (txState==JAMMING_STATE || txState==BACKOFF_STATE)
        color = "red";
    else
        color = "";

    cGate *g = physOutGate;
    while (g && g->getType()==cGate::OUTPUT)
    {
        g->getDisplayString().setTagArg("o",0,color);
        g->getDisplayString().setTagArg("o",1, color[0] ? "3" : "1");
        g = g->getNextGate();
    }
}

void Adapter_PLC_Base::receiveChangeNotification(int category, const cPolymorphic *)
{
    if (category==NF_SUBSCRIBERLIST_CHANGED)
        updateHasSubcribers();
}

