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

Die PlcMACBase ist an die EtherMACBase angelehnt. Sie uebernimmt im Prinzip die gleichen Funktionen, wie z.B.
Kanalzugriff und Statusverwaltung - sie ist Grundlage fuer interne PLC-Modems (PlcMAC).

*/

#ifndef __INET_PLC_MAC_BASE_H
#define __INET_PLC_MAC_BASE_H

#include <omnetpp.h>
#include "INETDefs.h"
#include "Plc.h"
#include "PlcFrame_m.h"
#include "InterfaceEntry.h"
#include "TxNotifDetails.h"
#include "NotificationBoard.h"

// Self-message kind values
#define ENDIFG             100
#define ENDRECEPTION       101
#define ENDBACKOFF         102
#define ENDTRANSMISSION    103
#define ENDJAMMING         104
#define ENDPAUSE           105
#define ENDAUTOCONFIG      106
// CHANGE --------------------
#define ENDVENDORAWARENESS 107
// ---------------------------

// MAC transmit state
#define TX_IDLE_STATE      1
#define WAIT_IFG_STATE     2
#define TRANSMITTING_STATE 3
#define JAMMING_STATE      4
#define BACKOFF_STATE      5
#define PAUSE_STATE        6

// MAC receive states
#define RX_IDLE_STATE      1
#define RECEIVING_STATE    2
#define RX_COLLISION_STATE 3

#define SPEED_OF_LIGHT 299792458.0

class IPassiveQueue;

/**
 * Base class for powerline MAC implementations.
 */
class INET_API PlcMACBase : public cSimpleModule, public INotifiable
{
  protected:
    bool connected;                 // true if connected to a network, set automatically by exploring the network configuration
    bool disabled;                  // true if the MAC is disabled, defined by the user
    bool promiscuous;               // if true, passes up all received frames
    MACAddress address;             // own MAC address
    int txQueueLimit;               // max queue length

    double ROBO_DATARATE;

    // MAC operation modes and parameters
    bool duplexMode;                // channel connecting to MAC is full duplex, i.e. like a switch with 2 half-duplex lines
    bool carrierExtension;          // carrier extension on/off (Gigabit Powerline)
    bool frameBursting;             // frame bursting on/off (Gigabit Powerline)

    // MAC transmission characteristics
    double txrate;                  // transmission rate of MAC, bit/s
    simtime_t bitTime;              // precalculated as 1/txrate
    simtime_t slotTime;             // slot time
    simtime_t interFrameGap;        // IFG
    simtime_t jamDuration;          // precalculated as 8*JAM_SIGNAL_BYTES*bitTime
    simtime_t shortestFrameDuration;// precalculated from MIN_PLC_FRAME or GIGABIT_MIN_FRAME_WITH_EXT

    int JAM_SIGNAL_BYTES;
    int MAX_PLC_FRAME;
    int MIN_PLC_FRAME;
    int PAUSE_BITTIME;
    int PREAMBLE_BYTES;
    int SFD_BYTES;

	double CSMA_CA_MAX_ADDITIONAL_WAIT_TIME;
	double CIFS;
	double RIFS;
	double PRIORITY_RESOLUTION_PERIOD;

    // states
    int transmitState;              // State of the MAC unit transmitting
    int receiveState;               // State of the MAC unit receiving
    int pauseUnitsRequested;        // requested pause duration, or zero -- examined at endTx

    cQueue txQueue;                 // output queue
    IPassiveQueue *queueModule;     // optional module to receive messages from

    cGate *physOutGate;             // pointer to the "phys$o" gate

    // notification stuff
    InterfaceEntry *interfaceEntry;  // points into IInterfaceTable
    NotificationBoard *nb;
    TxNotifDetails notifDetails;
    bool hasSubscribers; // only notify if somebody is listening

    // self messages
    cMessage *endTxMsg, *endIFGMsg, *endPauseMsg;

    // statistics
    int  framesSentInBurst;            // Number of frames send out in current frame burst
    int  bytesSentInBurst;             // Number of bytes transmitted in current frame burst
    unsigned long numFramesSent;
    unsigned long numFramesReceivedOK;
    unsigned long numBytesSent;        // includes Powerline frame bytes with preamble
    unsigned long numBytesReceivedOK;  // includes Powerline frame bytes with preamble
    unsigned long numFramesFromHL;     // packets received from higer layer (LLC or MACRelayUnit)
    unsigned long numDroppedIfaceDown; // packets from higher layer dropped because interface down (TBD not impl yet)
    unsigned long numDroppedBitError;  // frames dropped because of bit errors
    unsigned long numDroppedNotForUs;  // frames dropped because destination address didn't match
    unsigned long numFramesPassedToHL; // frames passed to higher layer
    unsigned long numPauseFramesRcvd;  // PAUSE frames received from network
    unsigned long numPauseFramesSent;  // PAUSE frames sent
    /*
    cOutVector numFramesSentVector;
    cOutVector numFramesReceivedOKVector;
    cOutVector numBytesSentVector;
    cOutVector numBytesReceivedOKVector;
    cOutVector numDroppedIfaceDownVector;
    cOutVector numDroppedBitErrorVector;
    cOutVector numDroppedNotForUsVector;
    cOutVector numFramesPassedToHLVector;
    cOutVector numPauseFramesRcvdVector;
    cOutVector numPauseFramesSentVector;
    */

  public:
    PlcMACBase();
    virtual ~PlcMACBase();

    virtual long getQueueLength() {return txQueue.length();}
    virtual MACAddress getMACAddress() {return address;}

  protected:
    //  initialization
    virtual void initialize();
    virtual void initializeTxrate() = 0;
    virtual void initializeFlags();
    virtual void initializeMACAddress();
    virtual void initializeQueueModule();
    virtual void initializeNotificationBoard();
    virtual void initializeStatistics();
    virtual void registerInterface(double txrate);

    // helpers
    virtual bool checkDestinationAddress(PlcFrame *frame);
    virtual void calculateParameters();
    virtual void printParameters();

    // finish
    virtual void finish();

    // event handlers
    virtual void processFrameFromUpperLayer(PlcFrame *msg);
    virtual void processMsgFromNetwork(cPacket *msg);
    virtual void processMessageWhenNotConnected(cMessage *msg);
    virtual void processMessageWhenDisabled(cMessage *msg);
    virtual void handleEndIFGPeriod();
    virtual void handleEndTxPeriod();
    virtual void handleEndPausePeriod();
    virtual void scheduleEndIFGPeriod();
    // CHANGE -----------------------------------------------------------------------
    virtual void scheduleEndIFGPeriod(int); // for priority based scheduling
    // ------------------------------------------------------------------------------
    virtual void scheduleEndTxPeriod(cPacket *);
    virtual void scheduleEndPausePeriod(int pauseUnits);

    // helpers
    virtual bool checkAndScheduleEndPausePeriod();
    virtual void fireChangeNotification(int type, cPacket *msg);
    virtual void beginSendFrames();
    virtual void frameReceptionComplete(PlcFrame *frame);
    virtual void processReceivedDataFrame(PlcFrame *frame);
    virtual void processPauseCommand(int pauseUnits);

    // display
    virtual void updateDisplayString();
    virtual void updateConnectionColor(int txState);

    // notifications
    virtual void updateHasSubcribers() = 0;
    virtual void receiveChangeNotification(int category, const cPolymorphic *details);

};

#endif
