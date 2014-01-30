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

Das Modul PlcMAC ist Teil eines internen BPLC-Modems, zu welchem sonst nur noch das Modul PlcEncap gehoehrt.
Ausser dem Aus- und Verpacken uebernimmt dieses Modul alle Aufgaben von Kanalzugriff bis Kollisionsmanagement.

*/

#ifndef __INET_PLCMAC_H
#define __INET_PLCMAC_H

#include <stdio.h>
#include <string.h>
#include <omnetpp.h>
#include "INETDefs.h"
#include "Plc.h"
#include "PlcFrame_m.h"
#include "PlcMACBase.h"

// Length of autoconfig period: should be larger than delays
#define AUTOCONFIG_PERIOD  0.001  /* well more than 4096 bit times at 10Mb */

class IPassiveQueue;

class INET_API PlcMAC : public PlcMACBase
{
  public:
    PlcMAC();
    virtual ~PlcMAC();

  protected:
    virtual void initialize();
    virtual void initializeTxrate();
    virtual void handleMessage(cMessage *msg);
    virtual void finish();

  protected:
    // parameters for autoconfig
    bool autoconfigInProgress; // true if autoconfig is currently ongoing
    double lowestTxrateSuggested;
    bool duplexVetoed;
    // CHANGE ----------------------------------------------------------------
    bool smartNotchingEnabled;
    double max_txrate;
    double PER;
    int typeOfModem;	// '0' for PLC, '1' for BPLC
    cModule *myDataCollector;
    long counter;

    int vendorID;					// The ID of the vendor of this modem
    bool polite;					// Is this modem polite to other vendors' modems?
    // To place the intelligence of vendor managing in the modems turned out to be
    // very useless - the functions wre moved to the CCo ("PlcNet"-module).
    /*
    int OtherVendorInNetwork;	    // are other vendors' modems in the network?
    cMessage *endVendorAwareness;   // message for timing politeness mechanisms
    double txrateModifier;		    // modification for the txrate according to the diffenrent modems in the net
    */

    int current_mode;				// "1" for CSMA, "2" for TDMA
    int TDMAsendingEnabled;         // "-1" in CSMA mode, "0" for not able to send in TDMA, "1" for able to send in TDMA
    cMessage *nextMsgTDMA;
    double numSentTDMA;             // number of messages sent in TDMA, normated to TDMA duration
    double numSentCSMA;     		// number of messages sent in CSMA, normated to CSMA duration
    // -----------------------------------------------------------------------

    // states
    int  backoffs;          // Value of backoff for exponential back-off algorithm
    int  numConcurrentTransmissions; // number of colliding frames -- we must receive this many jams

    // other variables
    PlcFrame *frameBeingReceived;
    cMessage *endRxMsg, *endBackoffMsg, *endJammingMsg;

    // statistics
    simtime_t totalCollisionTime;      // total duration of collisions on channel
    simtime_t totalSuccessfulRxTxTime; // total duration of successful transmissions on channel
    simtime_t channelBusySince;        // needed for computing totalCollisionTime/totalSuccessfulRxTxTime
    unsigned long numCollisions;       // collisions (NOT number of collided frames!) sensed
    unsigned long numBackoffs;         // number of retransmissions
    /*
    cOutVector numCollisionsVector;
    cOutVector numBackoffsVector;
    */

    bool token_just_received;

    bool CSMA_ONLY;
	bool TDMA_ONLY;
	double TDMA_PERIOD;
	double MODE_CHANGE_TIME_TDMA;
	double MODE_CHANGE_TIME_CSMA;

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

	double CSMA_CA_MAX_ADDITIONAL_WAIT_TIME;
	double CHANNEL_UPDATE_RATIO;
	double CIFS;
	double RIFS;
	double PRIORITY_RESOLUTION_PERIOD;
	double VENDOR_AWARENESS_PERIOD;

	bool reportEnabled;

    // event handlers
    virtual void processFrameFromUpperLayer(PlcFrame *msg);
    virtual void processMsgFromNetwork(cPacket *msg);
    virtual void handleEndIFGPeriod();
    virtual void handleEndTxPeriod();
    virtual void handleEndRxPeriod();
    virtual void handleEndBackoffPeriod();
    virtual void handleEndJammingPeriod();

    // CHANGE ----------------------------------------------------------------
    virtual void readOutPreamble(cMessage *msg);
    /*
    virtual void checkForVendorID(cMessage *msg);
    virtual void schedulePolitenessPeriod();
    virtual void applyPolitenessRules(cMessage *msg);
    virtual void removePolitenessRules();
    */

    virtual bool compareMACAddresses (MACAddress *a);
    virtual void sendSendingRequest ();
    virtual void processFrameFromUpperLayerTDMA(PlcFrame *msg);
    virtual void manageReminder();
    virtual void processMsgFromNetworkTDMA(cPacket *msg);
    virtual void handleMessageTDMA(cMessage *msg);
    virtual void RXTXstateView();
    virtual void cancelAllEvents();
    virtual void requestCCoForQoSTraffic(int var_priority);
    virtual void requestMoreBandwidth();
    // -----------------------------------------------------------------------

    // setup, autoconfig
    virtual void startAutoconfig();
    virtual void handleAutoconfigMessage(cMessage *msg);
    virtual void printState();

    // helpers
    virtual void scheduleEndRxPeriod(cPacket *);
    virtual void sendJamSignal();
    virtual void handleRetransmission();
    virtual void startFrameTransmission();
    virtual void eraseChannelProperties();

    // notifications
    virtual void updateHasSubcribers();
    virtual void sentStatisticalData();
};

extern "C" inline cSimpleModule* createPlcMAC(){
	return new PlcMAC();
}

extern "C" inline void destroyPlcMAC(cSimpleModule * csm){
	delete csm;
}

#endif
