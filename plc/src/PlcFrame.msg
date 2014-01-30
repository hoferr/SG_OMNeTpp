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

cplusplus {{
#include "Plc.h"
#include "MACAddress.h"
#include "Ieee802Ctrl_m.h" // for enums
}}

class noncobject MACAddress;

class noncobject MessageId;

enum EtherType;

enum SAPCode;

packet PlcJam
{
}

packet PlcFrame
{
    MACAddress dest;
    MACAddress src;
    
    // CHANGE ------------------------------------------------------------------------------
    // Allows 4 levels of priorisation, from "1" (normal traffic) to "4" (status msgs).
    int priority; 
    // The preamble contains training sequences, so the modem can measure the channel quality
    double datarate;	// current channel quality
    double PER;			// chance of packet loss
    // To allow modems from different vendors, a verndor-Flag must be implemented
    int vendorID;
    bool isPolite;
    simtime_t encapsulationTime;
    simtime_t higherLayerOffset;
    int hopCounter;
    int type;
    // -------------------------------------------------------------------------------------
}

packet PlcIIFrame extends PlcFrame
{
    int PlcType;
}

packet PlcFrameWithLLC extends PlcFrame
{
    int ssap;
    int dsap;
    int control;
}

packet PlcFrameWithSNAP extends PlcFrame
{
    long orgCode;  // SNAP organization code, 0 for IP and ARP
    int localcode; // SNAP local code (stores PlcType for IP and ARP)
}

packet PlcPauseFrame extends PlcFrame
{
    int pauseTime; // in 512 bit-time units
}

packet PlcAutoconfig
{
    double txrate = 0;
    bool halfDuplex = false;
}

// CHANGE ------------------------------------------------------------------------------
message PlcChannelUpdate
{
    double datarate;	// current channel quality
    double PER;			// chance of packet loss
}

message PlcSendRequestTDMA
{
    MACAddress src;
}

packet Token
{
    MACAddress token;
    int vendor_ID;
    int type;
}

message QoSRequest
{
    int priority;
}

message MoreBandwidthRequest
{
 	MACAddress src;   
}

message MeasurementData
{
    simtime_t runTime;
    simtime_t runTime_clean;
    simtime_t higherLayerOffset;
    int priority;
    int typeOfModem;
}

message NetCondition
{
    int typeOfNet;     // "0" for PLC, "1" for BPLC
    double datarate;
    double PER;     
}

message DATA_PlcNet
{
    int typeOfNet;     // "0" for PLC, "1" for BPLC
    long packetsLost;
    long numMessages;
}

message DATA_PlcMAC
{
    int typeOfModem;   // "0" for PLC, "1" for BPLC
	long numCollisions;
    long numBackoffs;
    simtime_t totalChannelIdleTime; 
    simtime_t totalSuccessfulRxTxTime;
    simtime_t totalCollisionTime;
}    
    
// -------------------------------------------------------------------------------------