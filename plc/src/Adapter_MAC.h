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

Der Adapter_MAC ist der dem Ethernet zugewandte Teil eines BPLC-Steckermodems. Er ist im Grossen und Ganzen eine
Kopie des EtherMAC-Modules, welches sich aber nicht als Adapter "versteht", und Frames mit fremder MAC-Adresse
nicht wegwirft, sondern weiterleitet.
Diese Aenderung machte die Programmierung eines weiteren Modules notwendig, um den Code des existierenden nicht zu
ueberschreiben.

*/

#ifndef __INET_ADAPTER_MAC_H
#define __INET_ADAPTER_MAC_H

#include <stdio.h>
#include <string.h>
#include <omnetpp.h>
#include "INETDefs.h"
#include "Ethernet.h"
#include "EtherFrame_m.h"
#include "Adapter_MAC_Base.h"

// Length of autoconfig period: should be larger than delays
#define AUTOCONFIG_PERIOD  0.001  /* well more than 4096 bit times at 10Mb */

class IPassiveQueue;

/**
 * Ethernet MAC module.
 */
class INET_API Adapter_MAC : public Adapter_MAC_Base
{
  public:
    Adapter_MAC();
    virtual ~Adapter_MAC();

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

    // states
    int  backoffs;          // Value of backoff for exponential back-off algorithm
    int  numConcurrentTransmissions; // number of colliding frames -- we must receive this many jams

    // other variables
    EtherFrame *frameBeingReceived;
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

    // event handlers
    virtual void processFrameFromUpperLayer(EtherFrame *msg);
    virtual void processMsgFromNetwork(cPacket *msg);
    virtual void handleEndIFGPeriod();
    virtual void handleEndTxPeriod();
    virtual void handleEndRxPeriod();
    virtual void handleEndBackoffPeriod();
    virtual void handleEndJammingPeriod();

    // setup, autoconfig
    virtual void startAutoconfig();
    virtual void handleAutoconfigMessage(cMessage *msg);
    virtual void printState();

    // helpers
    virtual void scheduleEndRxPeriod(cPacket *);
    virtual void sendJamSignal();
    virtual void handleRetransmission();
    virtual void startFrameTransmission();

    // notifications
    virtual void updateHasSubcribers();
};

extern "C" cSimpleModule* createAdapter_MAC(){
	return new Adapter_MAC();
}

extern "C" void destroyAdapter_MAC(cSimpleModule * csm){
	delete csm;
}

#endif
