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

#ifndef __INET_DATACOLLECTOR_H_
#define __INET_DATACOLLECTOR_H_

#include <omnetpp.h>

#include <stdio.h>
#include "Plc.h"
#include "PlcFrame_m.h"

class DataCollector : public cSimpleModule
{
  protected:
	cMessage *timer;
	long counter;

	bool plc_active;
	bool bplc_active;

	long numMessages_PLC_Counter;
	long numMessages_BPLC_Counter;
	long packetsLost_PLC_Counter;
	long packetsLost_BPLC_Counter;
	cOutVector numMessages_PLC;
	cOutVector packetsLost_PLC;
	cOutVector numMessages_BPLC;
	cOutVector packetsLost_BPLC;

	long numCollisions_PLC;
	long numBackoffs_PLC;
	simtime_t totalChannelIdleTime_PLC;
	simtime_t totalSuccessfulRxTxTime_PLC;
	simtime_t totalCollisionTime_PLC;
	cOutVector numCollisions_PLC_Vector;
	cOutVector numBackoffs_PLC_Vector;
	cOutVector totalChannelIdleTime_PLC_Vector;
	cOutVector totalSuccessfulRxTxTime_PLC_Vector;
	cOutVector totalCollisionTime_PLC_Vector;
	long numCollisions_BPLC;
	long numBackoffs_BPLC;
	simtime_t totalChannelIdleTime_BPLC;
	simtime_t totalSuccessfulRxTxTime_BPLC;
	simtime_t totalCollisionTime_BPLC;
	cOutVector numCollisions_BPLC_Vector;
	cOutVector numBackoffs_BPLC_Vector;
	cOutVector totalChannelIdleTime_BPLC_Vector;
	cOutVector totalSuccessfulRxTxTime_BPLC_Vector;
	cOutVector totalCollisionTime_BPLC_Vector;

	cOutVector runTimeVector_PLC;
	cDoubleHistogram runTimeStats_PLC;
	cOutVector runTimeVector_BPLC;
	cDoubleHistogram runTimeStats_BPLC;

	cOutVector runTimeVector_clean_PLC;
	cDoubleHistogram runTimeStats_clean_PLC;
	cOutVector runTimeVector_clean_BPLC;
	cDoubleHistogram runTimeStats_clean_BPLC;

	cOutVector priorityVector_PLC;
	cDoubleHistogram priorityStats_PLC;
	cOutVector priorityVector_BPLC;
	cDoubleHistogram priorityStats_BPLC;

	cOutVector higherLayerOffsetVector_PLC;
	cDoubleHistogram higherLayerOffsetStats_PLC;
	cOutVector higherLayerOffsetVector_BPLC;
	cDoubleHistogram higherLayerOffsetStats_BPLC;

	cOutVector datarate_PLC_Vector;
	cDoubleHistogram datarate_PLC_Stats;
	cOutVector datarate_BPLC_Vector;
	cDoubleHistogram datarate_BPLC_Stats;
	cOutVector PER_PLC_Vector;
	cDoubleHistogram PER_PLC_Stats;
	cOutVector PER_BPLC_Vector;
	cDoubleHistogram PER_BPLC_Stats;

  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void finish();

  public:
	DataCollector();
    virtual ~DataCollector();

};

extern "C" cSimpleModule* createDataCollector(){
	return new DataCollector();
}

extern "C" void destroyDataCollector(cSimpleModule * csm){
	delete csm;
}

#endif
