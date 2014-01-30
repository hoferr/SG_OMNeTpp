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

#include "DataCollector.h"

Define_Module(DataCollector);

DataCollector::DataCollector()
{
	counter = 0;
    numMessages_PLC_Counter = 0;
    numMessages_BPLC_Counter = 0;
    packetsLost_PLC_Counter = 0;
    packetsLost_BPLC_Counter = 0;
    plc_active = false;
    bplc_active = false;
    WATCH(plc_active);
    WATCH(bplc_active);
    numCollisions_PLC = 0;
    numBackoffs_PLC = 0;
    totalChannelIdleTime_PLC = 0;
    totalSuccessfulRxTxTime_PLC = 0;
    totalCollisionTime_PLC = 0;
    numCollisions_BPLC = 0;
	numBackoffs_BPLC = 0;
	totalChannelIdleTime_BPLC = 0;
	totalSuccessfulRxTxTime_BPLC = 0;
	totalCollisionTime_BPLC = 0;
}

DataCollector::~DataCollector()
{
	cancelAndDelete(timer);
}

void DataCollector::initialize()
{
    timer = new cMessage ("TIMER");
    simtime_t wait = DATA_COLLECT_INTERVAL * 1.5;
    scheduleAt(simTime()+wait, timer);
    numMessages_BPLC.setName("numMessages_BPLC");
    numMessages_PLC.setName("numMessages_PLC");
    packetsLost_BPLC.setName("packetsLost_BPLC");
    packetsLost_PLC.setName("packetsLost_PLC");
    runTimeVector_BPLC.setName("runTimeVector_BPLC");
    runTimeVector_PLC.setName("runTimeVector_PLC");
    runTimeVector_clean_BPLC.setName("runTimeVector_clean_BPLC");
    runTimeVector_clean_PLC.setName("runTimeVector_clean_PLC");
    datarate_BPLC_Vector.setName("datarate_BPLC_Vector");
    datarate_PLC_Vector.setName("datarate_PLC_Vector");
    PER_BPLC_Vector.setName("PER_BPLC_Vector");
    PER_PLC_Vector.setName("PER_PLC_Vector");
	higherLayerOffsetVector_PLC.setName("higherLayerOffsetVector_PLC");
	higherLayerOffsetVector_BPLC.setName("higherLayerOffsetVector_BPLC");
	numCollisions_PLC_Vector.setName("numCollisions_PLC_Vector");
	numBackoffs_PLC_Vector.setName("numBackoffs_PLC_Vector");
	totalChannelIdleTime_PLC_Vector.setName("totalChannelIdleTime_PLC_Vector");
	totalSuccessfulRxTxTime_PLC_Vector.setName("totalSuccessfulRxTxTime_PLC_Vector");
	totalCollisionTime_PLC_Vector.setName("totalCollisionTime_PLC_Vector");
	numCollisions_BPLC_Vector.setName("numCollisions_BPLC_Vector");
	numBackoffs_BPLC_Vector.setName("numBackoffs_BPLC_Vector");
	totalChannelIdleTime_BPLC_Vector.setName("totalChannelIdleTime_BPLC_Vector");
	totalSuccessfulRxTxTime_BPLC_Vector.setName("totalSuccessfulRxTxTime_BPLC_Vector");
	totalCollisionTime_BPLC_Vector.setName("totalCollisionTime_BPLC_Vector");
	priorityVector_PLC.setName("priorityVector_PLC");
	priorityVector_BPLC.setName("priorityVector_BPLC");

}

void DataCollector::handleMessage(cMessage *msg)
{
	if (COMMENTS_ON) EV << "Message received by data collector." << endl;
	if(dynamic_cast<MeasurementData *>(msg) != NULL)
	{
		bubble("MEASUREMENT_DATA");
		MeasurementData *thisData = check_and_cast<MeasurementData *>(msg);
		double runtime = (thisData->getRunTime()).dbl();
		double runtime_clean = (thisData->getRunTime_clean()).dbl();
		double higherLayerOffset = (thisData->getHigherLayerOffset()).dbl();
		int priority = thisData->getPriority();
		if(runtime >= 0)
		{
			if (COMMENTS_ON) EV << "Collected data piece (runtime): " << runtime*1000 << "ms." << endl;
		}
		if(higherLayerOffset >= 0)
		if (COMMENTS_ON) EV << "Collected data piece (higherLayerOffset): " << higherLayerOffset*1000
		                    << "ms." << endl;
		if (thisData->getTypeOfModem() == 0)
		{
			plc_active = true;
			if (runtime > 0)
			{
				if (COMMENTS_ON) EV << "Recording data for a PLC network." << endl;
				// Record time values in us
				runTimeStats_PLC.collect(runtime*1000000);
				runTimeVector_PLC.record(runtime*1000000);
				runTimeStats_clean_PLC.collect(runtime_clean*1000000);
				runTimeVector_clean_PLC.record(runtime_clean*1000000);
				priorityStats_PLC.collect(priority);
				priorityVector_PLC.record(priority);
			}
			if(higherLayerOffset >= 0)
			{
				// Record time values in us
				higherLayerOffsetStats_PLC.collect(higherLayerOffset*1000000);
				higherLayerOffsetVector_PLC.record(higherLayerOffset*1000000);
			}
		}
		if (thisData->getTypeOfModem() == 1)
		{
			bplc_active = true;
			if (runtime > 0)
			{
				if (COMMENTS_ON) EV << "Recording data for a BPLC network." << endl;
				// Record time values in us
				runTimeStats_BPLC.collect(runtime*1000000);
				runTimeVector_BPLC.record(runtime*1000000);
				runTimeStats_clean_BPLC.collect(runtime_clean*1000000);
				runTimeVector_clean_BPLC.record(runtime_clean*1000000);
				priorityStats_BPLC.collect(priority);
				priorityVector_BPLC.record(priority);
			}
			if(higherLayerOffset >= 0)
			{
				// Record time values in us
				higherLayerOffsetStats_BPLC.collect(higherLayerOffset*1000000);
				higherLayerOffsetVector_BPLC.record(higherLayerOffset*1000000);
			}
		}
	}
	if(dynamic_cast<NetCondition *>(msg) != NULL)
	{
		bubble("NET_DATA");
		if (COMMENTS_ON) EV << "Received something about the net condition ..." << endl;
		NetCondition *thisData = check_and_cast<NetCondition *>(msg);
		double datarate = thisData->getDatarate();
		if (COMMENTS_ON) EV << "Datarate: " << datarate << " Mbit/s" << endl;
		double PER = thisData->getPER();
		if (COMMENTS_ON) EV << "PER: " << PER << " %" << endl;
		int type = thisData->getTypeOfNet();
		if (COMMENTS_ON) EV << "Type of net: " << type << endl << endl;
		if(type == 0)
		{
			plc_active = true;
			datarate_PLC_Stats.collect(datarate);
			datarate_PLC_Vector.record(datarate);
			PER_PLC_Stats.collect(PER*100); // in %
			PER_PLC_Vector.record(PER*100); // in %
		}
		if(type == 1)
		{
			bplc_active = true;
			datarate_BPLC_Stats.collect(datarate);
			datarate_BPLC_Vector.record(datarate);
			PER_BPLC_Stats.collect(PER*100); // in %
			PER_BPLC_Vector.record(PER*100); // in %
		}
	}
	if(dynamic_cast<DATA_PlcNet *>(msg) != NULL)
	{
		bubble("DATA_Net");
		DATA_PlcNet *thisData = check_and_cast<DATA_PlcNet *>(msg);
		int type = thisData->getTypeOfNet();
		if (COMMENTS_ON) EV << "DATA_PlcNet message contained the following values: " << endl;
		long packetsLost = thisData->getPacketsLost();
		if (COMMENTS_ON) EV << "packetsLost = " << packetsLost << endl;
		long numMessages = thisData->getNumMessages();
		if (COMMENTS_ON) EV << "numMessages = " << numMessages << endl;
		if(type == 0)
		{
			plc_active = true;
			numMessages_PLC_Counter = numMessages_PLC_Counter+numMessages;
			packetsLost_PLC_Counter = packetsLost_PLC_Counter+packetsLost;
		}
		if(type == 1)
		{
			bplc_active = true;
			numMessages_BPLC_Counter = numMessages_BPLC_Counter+numMessages;
			packetsLost_BPLC_Counter = packetsLost_BPLC_Counter+packetsLost;
		}
	}
	if(dynamic_cast<DATA_PlcMAC *>(msg) != NULL)
	{
		bubble("DATA_MAC");
		DATA_PlcMAC *thisData = check_and_cast<DATA_PlcMAC *>(msg);
		int type = thisData->getTypeOfModem();
		if (COMMENTS_ON) EV << "DATA_PlcMAC message contained the following values: " << endl;
		long numCollisions = thisData->getNumCollisions();
		if (COMMENTS_ON) EV << "numCollisions = " << numCollisions << endl;
		long numBackoffs = thisData->getNumBackoffs();
		if (COMMENTS_ON) EV << "numBackoffs = " << numBackoffs << endl;
		simtime_t totalChannelIdleTime = thisData->getTotalChannelIdleTime();
		if (COMMENTS_ON) EV << "totalChannelIdleTime = " << totalChannelIdleTime << endl;
		simtime_t totalSuccessfulRxTxTime = thisData->getTotalSuccessfulRxTxTime();
		if (COMMENTS_ON) EV << "totalSuccessfulRxTxTime = " << totalSuccessfulRxTxTime << endl;
		simtime_t totalCollisionTime = thisData->getTotalCollisionTime();
		if (COMMENTS_ON) EV << "totalCollisionTime = " << totalCollisionTime << endl;
		if(type == 0)
		{
			plc_active = true;
			numCollisions_PLC = numCollisions_PLC + numCollisions;
			numBackoffs_PLC = numBackoffs_PLC + numBackoffs;
			totalChannelIdleTime_PLC = totalChannelIdleTime_PLC + totalChannelIdleTime;
			totalSuccessfulRxTxTime_PLC = totalSuccessfulRxTxTime_PLC + totalSuccessfulRxTxTime;
			totalCollisionTime_PLC = totalSuccessfulRxTxTime_PLC + totalCollisionTime;
		}
		if(type == 1)
		{
			bplc_active = true;
			numCollisions_BPLC = numCollisions_BPLC + numCollisions;
			numBackoffs_BPLC = numBackoffs_BPLC + numBackoffs;
			totalChannelIdleTime_BPLC = totalChannelIdleTime_BPLC + totalChannelIdleTime;
			totalSuccessfulRxTxTime_BPLC = totalSuccessfulRxTxTime_BPLC + totalSuccessfulRxTxTime;
			totalCollisionTime_BPLC = totalCollisionTime_BPLC + totalCollisionTime;
		}
	}
	if(msg->isSelfMessage())
	{
		if (COMMENTS_ON) EV << "Time for results ..." << endl;
		if(plc_active)
		{
			numMessages_PLC.record(numMessages_PLC_Counter);
			if (COMMENTS_ON) EV << "numMessages_PLC_Counter is at " << numMessages_PLC_Counter << endl;
			numMessages_PLC_Counter = 0;
			packetsLost_PLC.record(packetsLost_PLC_Counter);
			if (COMMENTS_ON) EV << "packetsLost_PLC_Counter is at " << packetsLost_PLC_Counter << endl;
			packetsLost_PLC_Counter = 0;
			numCollisions_PLC_Vector.record(numCollisions_PLC);
			if (COMMENTS_ON) EV << "numCollisions_PLC_Counter is at " << numCollisions_PLC << endl;
			numCollisions_PLC = 0;
			numBackoffs_PLC_Vector.record(numBackoffs_PLC);
			if (COMMENTS_ON) EV << "numBackoffs_PLC_Counter is at " << numBackoffs_PLC << endl;
			numBackoffs_PLC = 0;
			totalChannelIdleTime_PLC_Vector.record(totalChannelIdleTime_PLC);
			if (COMMENTS_ON) EV << "totalChannelIdleTime_PLC_Counter is at " << totalChannelIdleTime_PLC << endl;
			totalChannelIdleTime_PLC = 0;
			totalSuccessfulRxTxTime_PLC_Vector.record(totalSuccessfulRxTxTime_PLC);
			if (COMMENTS_ON) EV << "totalSuccessfulRxTxTime_PLC_Counter is at " << totalSuccessfulRxTxTime_PLC << endl;
			totalSuccessfulRxTxTime_PLC = 0;
			totalCollisionTime_PLC_Vector.record(totalCollisionTime_PLC);
			if (COMMENTS_ON) EV << "totalCollisionTime_PLC_Counter is at " << totalCollisionTime_PLC << endl;
			totalCollisionTime_PLC = 0;
		}
		if(bplc_active)
		{
			numMessages_BPLC.record(numMessages_BPLC_Counter);
			if (COMMENTS_ON) EV << "numMessages_BPLC_Counter is at " << numMessages_BPLC_Counter << endl;
			numMessages_BPLC_Counter = 0;
			packetsLost_BPLC.record(packetsLost_BPLC_Counter);
			if (COMMENTS_ON) EV << "packetsLost_BPLC_Counter is at " << packetsLost_BPLC_Counter << endl;
			packetsLost_BPLC_Counter = 0;
			numCollisions_BPLC_Vector.record(numCollisions_BPLC);
			if (COMMENTS_ON) EV << "numCollisions_BPLC_Counter is at " << numCollisions_BPLC << endl;
			numCollisions_BPLC = 0;
			numBackoffs_BPLC_Vector.record(numBackoffs_BPLC);
			if (COMMENTS_ON) EV << "numBackoffs_BPLC_Counter is at " << numBackoffs_BPLC << endl;
			numBackoffs_BPLC = 0;
			totalChannelIdleTime_BPLC_Vector.record(totalChannelIdleTime_BPLC);
			if (COMMENTS_ON) EV << "totalChannelIdleTime_BPLC_Counter is at " << totalChannelIdleTime_BPLC << endl;
			totalChannelIdleTime_BPLC = 0;
			totalSuccessfulRxTxTime_BPLC_Vector.record(totalSuccessfulRxTxTime_BPLC);
			if (COMMENTS_ON) EV << "totalSuccessfulRxTxTime_BPLC_Counter is at " << totalSuccessfulRxTxTime_BPLC << endl;
			totalSuccessfulRxTxTime_BPLC = 0;
			totalCollisionTime_BPLC_Vector.record(totalCollisionTime_BPLC);
			if (COMMENTS_ON) EV << "totalCollisionTime_BPLC_Counter is at " << totalCollisionTime_BPLC << endl;
			totalCollisionTime_BPLC = 0;
		}
		cancelEvent(timer);
		scheduleAt(simTime()+DATA_COLLECT_INTERVAL, timer);
	}
	if (COMMENTS_ON) EV << "Message handling complete." << endl;
	if(!msg->isSelfMessage())delete msg;
}

void DataCollector::finish()
{
	EV << "==============================================================" << endl;
	EV << "Data collector report ..." << endl << endl;
	EV << "RUNTIME STATISTICS:" << endl;
	EV << "------------------------------" << endl;
	/*
		Einheitenplausibilitaetsueberpruefung / Groessenordnung:
		Berechnung:

		Bearbeitungszeit:

		MAX
		1616 Byte/Paket * 8 Bit/Byte * 1/(45 Mbit/s) =
		12928 Bit/Paket * 0,022 * 10^-6 s/Bit =
		285 * 10^-6 s/Paket =
		285 us

		MIN
		162 Byte/Paket * 8 Bit/Byte * 1/(45 Mbit/s) =
		1296 Bit/Paket * 0,022 * 10^-6 s/Bit =
		29 * 10^-6 s/Paket =
		29 us

		Diese faellt in jedem Modem 2 mal an, d.h. 58us - 570us nur fuer die Bearbeitung
		(ohne Kanalzugriffsverzoegerung und Laufzeit)
	*/
	/*
	if(runTimeStats_PLC.getMean() != 0)
	{
		EV << "For all PLC networks ..." << endl;
		EV << "Calculated by simTime() - msg->getCreationTime() at arriving PlcEncap from MAC." << endl;
		EV << "Recorded " << runTimeStats_PLC.getCount() << " values." << endl;
		EV << "Runtime, min:    " << runTimeStats_PLC.getMin() << "us" << endl;
		EV << "Runtime, max:    " << runTimeStats_PLC.getMax() << "us" << endl;
		EV << "Runtime, mean:   " << runTimeStats_PLC.getMean() << "us" << endl;
		EV << "Runtime, stddev: " << runTimeStats_PLC.getStddev() << "us" << endl << endl;
	}
	if(runTimeStats_PLC.getMean() != 0)
	{
		EV << "For all PLC networks ..." << endl;
		EV << "Calculated by simTime() - msg->getCreationTime() at arriving PlcEncap from IP-Layer." << endl;
		EV << "Recorded " << higherLayerOffsetStats_PLC.getCount() << " values." << endl;
		EV << "Higher layer offset, min:    " << higherLayerOffsetStats_PLC.getMin() << "us" << endl;
		EV << "Higher layer offset, max:    " << higherLayerOffsetStats_PLC.getMax() << "us" << endl;
		EV << "Higher layer offset, mean:   " << higherLayerOffsetStats_PLC.getMean() << "us" << endl;
		EV << "Higher layer offset, stddev: " << higherLayerOffsetStats_PLC.getStddev() << "us" << endl << endl;
	}
	if(runTimeStats_PLC.getMean() != 0)
	{
		EV << "For all PLC networks ..." << endl;
		EV << "Derived values" << endl;
		EV << "Runtime - HigherLayerOffset, mean: " << runTimeStats_PLC.getMean() - higherLayerOffsetStats_PLC.getMean() << "us" << endl;
		EV << "Runtime / HigherLayerOffset, mean: " << runTimeStats_PLC.getStddev() / higherLayerOffsetStats_PLC.getStddev() << endl << endl;
	}
	*/
	if(plc_active)
	{
		EV << "For all PLC networks ..." << endl;
		// EV << "Calculated by simTime() - self-made timestamp at arriving PlcEncap from MAC." << endl;
		EV << "Recorded " << runTimeStats_clean_PLC.getCount() << " values." << endl;
		EV << "Runtime_clean, min:    " << runTimeStats_clean_PLC.getMin() / 1000 << " ms" << endl;
		EV << "Runtime_clean, max:    " << runTimeStats_clean_PLC.getMax() / 1000 << " ms" << endl;
		EV << "Runtime_clean, mean:   " << runTimeStats_clean_PLC.getMean() / 1000 << " ms" << endl;
		EV << "Runtime_clean, stddev: " << runTimeStats_clean_PLC.getStddev() / 1000 << " ms" << endl << endl;
	}
	// =========================================================================================================
	/*
	if(runTimeStats_BPLC.getMean() != 0)
	{
		EV << "For all BPLC networks ..." << endl;
		EV << "Calculated by simTime() - msg->getCreationTime() at arriving PlcEncap from MAC." << endl;
		EV << "Recorded " << runTimeStats_BPLC.getCount() << " values." << endl;
		EV << "Runtime, min:    " << runTimeStats_BPLC.getMin() << "us" << endl;
		EV << "Runtime, max:    " << runTimeStats_BPLC.getMax() << "us" << endl;
		EV << "Runtime, mean:   " << runTimeStats_BPLC.getMean() << "us" << endl;
		EV << "Runtime, stddev: " << runTimeStats_BPLC.getStddev() << "us" << endl << endl;
	}
	if(runTimeStats_BPLC.getMean() != 0)
	{
		EV << "For all BPLC networks ..." << endl;
		EV << "Calculated by simTime() - msg->getCreationTime() at arriving PlcEncap from IP-Layer." << endl;
		EV << "Recorded " << higherLayerOffsetStats_BPLC.getCount() << " values." << endl;
		EV << "Higher layer offset, min:    " << higherLayerOffsetStats_BPLC.getMin() << "us" << endl;
		EV << "Higher layer offset, max:    " << higherLayerOffsetStats_BPLC.getMax() << "us" << endl;
		EV << "Higher layer offset, mean:   " << higherLayerOffsetStats_BPLC.getMean() << "us" << endl;
		EV << "Higher layer offset, stddev: " << higherLayerOffsetStats_BPLC.getStddev() << "us" << endl << endl;
	}
	if(runTimeStats_BPLC.getMean() != 0)
	{
		EV << "For all PLC networks ..." << endl;
		EV << "Derived values" << endl;
		EV << "Runtime - HigherLayerOffset, mean: " << runTimeStats_BPLC.getMean() - higherLayerOffsetStats_BPLC.getMean() << "us" << endl;
		EV << "Runtime / HigherLayerOffset, mean: " << runTimeStats_BPLC.getStddev() / higherLayerOffsetStats_BPLC.getStddev() << endl << endl;
	}
	*/
	if(bplc_active)
	{
		EV << "For all BPLC networks ..." << endl;
		// EV << "Calculated by simTime() - self-made timestamp at arriving PlcEncap from MAC." << endl;
		EV << "Recorded " << runTimeStats_clean_BPLC.getCount() << " values." << endl;
		EV << "Runtime_clean, min:    " << runTimeStats_clean_BPLC.getMin() << " us" << endl;
		EV << "Runtime_clean, max:    " << runTimeStats_clean_BPLC.getMax() << " us" << endl;
		EV << "Runtime_clean, mean:   " << runTimeStats_clean_BPLC.getMean() << " us" << endl;
		EV << "Runtime_clean, stddev: " << runTimeStats_clean_BPLC.getStddev() << " us" << endl << endl;
	}


	EV << "DATARATE STATISTICS:"<<endl;
	EV << "------------------------------" << endl;
	if(plc_active)
	{
		EV << "For all PLC networks ..." << endl;
		EV << "Recorded " << datarate_PLC_Stats.getCount() << " values." << endl;
		EV << "Datarate, min:    " << datarate_PLC_Stats.getMin()*1000 << " kbps" << endl;
		EV << "Datarate, max:    " << datarate_PLC_Stats.getMax()*1000 << " kbps" << endl;
		EV << "Datarate, mean:   " << datarate_PLC_Stats.getMean()*1000 << " kbps" << endl;
		EV << "Datarate, stddev: " << datarate_PLC_Stats.getStddev()*1000 << " kbps" << endl << endl;
	}
	if(bplc_active)
	{
		EV << "For all BPLC networks ..." << endl;
		EV << "Recorded " << datarate_BPLC_Stats.getCount() << " values." << endl;
		EV << "Datarate, min:    " << datarate_BPLC_Stats.getMin() << " Mbps" << endl;
		EV << "Datarate, max:    " << datarate_BPLC_Stats.getMax() << " Mbps" << endl;
		EV << "Datarate, mean:   " << datarate_BPLC_Stats.getMean() << " Mbps" << endl;
		EV << "Datarate, stddev: " << datarate_BPLC_Stats.getStddev() << " Mbps" <<endl << endl;
	}
	EV << "PACKET ERROR RATE STATISTICS:"<<endl;
	EV << "------------------------------" << endl;
	if(plc_active)
	{
		EV << "For all PLC networks ..." << endl;
		EV << "Recorded " << PER_PLC_Stats.getCount() << " values." << endl;
		EV << "PER, min:    " << PER_PLC_Stats.getMin() << " %" << endl;
		EV << "PER, max:    " << PER_PLC_Stats.getMax() << " %" << endl;
		EV << "PER, mean:   " << PER_PLC_Stats.getMean() << " %" << endl;
		EV << "PER, stddev: " << PER_PLC_Stats.getStddev() << " %" << endl << endl;
	}
	if(bplc_active)
	{
		EV << "For all BPLC networks ..." << endl;
		EV << "Recorded " << PER_BPLC_Stats.getCount() << " values." << endl;
		EV << "PER, min:    " << PER_BPLC_Stats.getMin() << " %" << endl;
		EV << "PER, max:    " << PER_BPLC_Stats.getMax() << " %" << endl;
		EV << "PER, mean:   " << PER_BPLC_Stats.getMean() << " %" << endl;
		EV << "PER, stddev: " << PER_BPLC_Stats.getStddev() << " %" << endl << endl;
	}

	EV << "PRIORITY STATISTICS:"<<endl;
		EV << "------------------------------" << endl;
		if(plc_active)
		{
			EV << "For all PLC networks ..." << endl;
			EV << "Recorded " << priorityStats_PLC.getCount() << " values." << endl;
			EV << "Priority, min:    " << priorityStats_PLC.getMin() << endl;
			EV << "Priority, max:    " << priorityStats_PLC.getMax() << endl;
			EV << "Priority, mean:   " << priorityStats_PLC.getMean() << endl;
			EV << "Priority, stddev: " << priorityStats_PLC.getStddev() << endl;
		}
		if(bplc_active)
		{
			EV << "For all BPLC networks ..." << endl;
			EV << "Recorded " << priorityStats_BPLC.getCount() << " values." << endl;
			EV << "Priority, min:    " << priorityStats_BPLC.getMin() << endl;
			EV << "Priority, max:    " << priorityStats_BPLC.getMax() << endl;
			EV << "Priority, mean:   " << priorityStats_BPLC.getMean() << endl;
			EV << "Priority, stddev: " << priorityStats_BPLC.getStddev() << endl;
		}

	EV << "==============================================================" << endl;
	// if(runTimeStats_PLC.getMean() != 0)runTimeStats_PLC.recordAs("RunTime_PLC");
	// if(runTimeStats_BPLC.getMean() != 0)runTimeStats_BPLC.recordAs("RunTime_BPLC");
	if(plc_active)runTimeStats_clean_PLC.recordAs("RunTime_clean_PLC");
	if(bplc_active)runTimeStats_clean_BPLC.recordAs("RunTime_clean_BPLC");

	// if(higherLayerOffsetStats_PLC.getMean() != 0)higherLayerOffsetStats_PLC.recordAs("higherLayerOffset_PLC");
	// if(higherLayerOffsetStats_BPLC.getMean() != 0)higherLayerOffsetStats_BPLC.recordAs("higherLayerOffset_BPLC");

	if(plc_active)datarate_PLC_Stats.recordAs("PLCdatarate");
	if(bplc_active)datarate_BPLC_Stats.recordAs("BPLCdatarate");
	if(plc_active)PER_PLC_Stats.recordAs("PLC_PER");
	if(bplc_active)PER_BPLC_Stats.recordAs("BPLC_PER");
	if(plc_active)priorityStats_PLC.recordAs("PLC_priority");
	if(bplc_active)priorityStats_BPLC.recordAs("BPLC_priority");
}
