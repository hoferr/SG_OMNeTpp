// Lehrstuhl fuer Energietransport und -speicherung
// UNIVERSITAET DUISBURG-ESSEN
//
// ef.Ruhr E-DeMa AP-2
//
// Wissenschaftlicher Mitarbeiter:
// Dipl.-Ing. Holger Kellerbauer
//
// Das Linklayer-Paket "powerline" umfasst eine Sammlung von Modulen, die zur Simulation von Powerline-
// Uebertragungsstrecken in intelligenten Energieverteilsystemen programmiert worden sind.
//
// Dieser Quellcode wurde erstellt von Dipl.-Ing. Holger Kellerbauer - er basiert auf dem INET Framework-Modul
// "Linklayer/Ethernet" von Andras Varga (c) 2003. Er ist gesitiges Eigentum des Lehrstuhles fuer Energietransport
// und -speicherung der Universitaet Duisburg-Essen, und darf ohne Genehmigung weder weitergegeben, noch verwendet
// werden.

/*

Das Modul PlcEncap ist Teil eines internen BPLC-Modems, zu welchem sonst nur noch das Modul PlcMAC gehoehrt.
Das Modul uebernimmt das Auspacken von Paketen hoeherer Protokollschichten, und das Einpacken fuer niedrigere
Protokollschichten.

*/

#ifndef __INET_PLCENCAP_H
#define __INET_PLCENCAP_H

#include <stdio.h>
#include "Plc.h"
#include "PlcFrame_m.h"

class INET_API PlcEncap : public cSimpleModule
{
  protected:
    int seqNum;
    cModule *myDataCollector;
    MeasurementData *myData;
    int typeOfModem;			// "0" for PLC, "1" for BPLC

	double PRIORITY_1_CHANCE;   // %
	double PRIORITY_2_CHANCE;   // %
	double PRIORITY_3_CHANCE;   // %
 // double PRIORITY_4_CHANCE;   // %          // is defined by chances 1...3

	int MAX_PACKETBURST;
	int GIGABIT_MAX_BURST_BYTES;
	int MAX_PLC_DATA;
	int MAX_PLC_FRAME;
	int MIN_PLC_FRAME;
	int INTERFRAME_GAP_BITS;
	int MAX_ATTEMPTS;
	int BACKOFF_RANGE_LIMIT;
	int JAM_SIGNAL_BYTES;
	int PREAMBLE_BYTES;
	int SFD_BYTES;
	int PAUSE_BITTIME;
	int PLC_MAC_FRAME_BYTES;
	int PLC_LLC_HEADER_LENGTH;
	int PLC_SNAP_HEADER_LENGTH;
	int PLC_PAUSE_COMMAND_BYTES;

	bool reportEnabled;

    // statistics
    long totalFromHigherLayer;  // total number of packets received from higher layer
    long totalFromMAC;          // total number of frames received from MAC
    long totalPauseSent;        // total number of PAUSE frames sent

    /*
    cOutVector runTimeVector;
    cDoubleHistogram runTimeStats;
    cOutVector runTimeVector_2;
    cDoubleHistogram runTimeStats_2;
    cOutVector higherLayerOffsetVector;
    cDoubleHistogram higherLayerOffsetStats;
    */

    simtime_t higherLayerOffset_TEMP;

  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void finish();

    virtual void processPacketFromHigherLayer(cPacket *msg);
    virtual void processFrameFromMAC(PlcFrame *msg);
    virtual void handleSendPause(cMessage *msg);
    virtual int priorityDistribution();
    virtual void updateDisplayString();
    virtual void readCreationTime(cMessage *msg);
};

extern "C" cSimpleModule* createPlcEncap(){
	return new PlcEncap();
}

extern "C" void destroyPlcEncap(cSimpleModule * csm){
	delete csm;
}

#endif



