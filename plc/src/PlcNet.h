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

Dieses Modul simuliert einen PLC-Kanal, d.h. eine Hausinstallation - es ist angelehnt an das Modul EtherBus;
hinzu kommen nur die Funktionen fuer variable Kanalqualitaet und fuer den Paketverlust.

*/

#ifndef __INET_PLCNET_H
#define __INET_PLCNET_H

#include <vector>
#include "INETDefs.h"
#include "PlcFrame_m.h"

// Direction of frame travel on bus; also used as selfmessage kind
#define UPSTREAM        0
#define DOWNSTREAM      1

//using namespace basic;

/*
 * Implements the bus which connects hosts, switches and other LAN entities on an Ethernet LAN.
 */
class INET_API PlcNet : public cSimpleModule
{
  protected:
    /*
     * Implements the physical locations on the bus where each
     * network entity is connected to on the bus
     */
    struct BusTap
    {
        int id;                         // which tap is this
        double position;                // Physical location of where each entity is connected to on the bus, (physical location of the tap on the bus)
        simtime_t propagationDelay[2];  // Propagation delays to the adjacent tap points on the bus: 0:upstream, 1:downstream
    };

    double  propagationSpeed;  // propagation speed of electrical signals through copper

    BusTap *tap;  // physical locations of where the hosts is connected to the bus
    int taps;     // number of tap points on the bus

    long numMessages;             // number of messages handled
    long counter;

    // CHANGE ------------------------------------------------------------------------------
    double PER;					  // current packet error rate
    double datarate;			  // current datarate
    double datarate_clear;		  // current datarate copy w/o mali
    double res_datarate;		  // current datarate minus mali
    long packetsLost;             // to monitor number of lost packets
    /*
    cOutVector datarateVector;	  // to monitor datarate
    cLongHistogram datarateStats; // to monitor datarate
    cOutVector PERVector;	  	  // to monitor PER
    cLongHistogram PERStats;      // to monitor PER
    cOutVector PriorityVector;	  // to monitor priority traffic
    cLongHistogram PriorityStats; // to monitor priority traffic
    */
    int scheduledErasedTimeOutMsgs;
    int unscheduledErasedTimeOutMsgs;
    int functionCalls;

    cModule *myDataCollector;
    NetCondition *myData;
    int type;					  // "0" for PLC, "1" for BPLC
    int vendorID;

    // Configuration variables
    double parAVG_PER_RATE;
    double parMAX_PLC_DATARATE;
    double parAVERAGE_PLC_DATARATE;
    double parCHANNEL_FLUCTUATIONS;
    double parCHANNEL_DISTRIBUTION_THETA;

    double VENDOR_MALUS_2_NETWORKS; 		     // %
	double VENDOR_MALUS_3_NETWORKS;  			 // %
	double VENDOR_MALUS_4_NETWORKS;  		     // %
	double VENDOR_MALUS_UNPOLITENESS_ACTIVE;     // %
	double ISP_PERIOD;   						 // s
	double HOPCOUNT_LOSS;	   				     // %

	double ROBO_DATARATE;		// MBit/s

	double PRIORITY_1_CHANCE;   // %
	double PRIORITY_2_CHANCE;   // %
	double PRIORITY_3_CHANCE;   // %
 // double PRIORITY_4_CHANCE;   // %          // is defined by chances 1...3

	double TDMA_PERIOD;   					  // s
	int MAXIMUM_CLIENTS;
	double TDMA_TIME_OUT;   				  // s
	double CHANCE_TO_ACCEPT_QOS_REQ;   		  // %
	double BANDWIDTH_REQUEST_RESPONSE_CHANCE; // %

	bool TDMA_ONLY;
	bool CSMA_ONLY;
	double MODE_CHANGE_TIME_CSMA;   // s
	double MODE_CHANGE_TIME_TDMA;   // s
	double LOSS_PER_METER;          // %
	double KINK_LENGTH;  			// m

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

    // For operation as a TDMA-Master

    MACAddress **listOfActiveConnections;
    cMessage **timeOutSelfMsgs;
    MACAddress *activeModem;
    int numOfActiveConnections;
    cMessage *CSMA_TDMA;
    cMessage *TDMA_Cycle;
    cMessage *PASS_TOKEN_TO_NEXT_IN_LIST;
    int current_mode;             // "1" for CSMA, "2" for TDMA
    simtime_t token_time;
    simtime_t TDMA_time;

    // TODO: New stuff
    int current_tab;
    Token *nextTabTDMA;
    double busPositionsCopy[31];

    // For operation as a CCo for ISP

    int listOfActiveVendors[4];   			// P1909 supports interoperability for up to 4 different systems
    bool vendorPolitenessList[4];  			// entry is TRUE, when associated vendor is polite
    bool atLeastOneNotPoliteVendorIsActive;
    int numberOfActiveNotPoliteVendors;
    cMessage *timeOutMsgsForISP_0;
    cMessage *timeOutMsgsForISP_1;
    cMessage *timeOutMsgsForISP_2;
    cMessage *timeOutMsgsForISP_3;
    int ISP_maptable[4][3];
    double currentMalus;

    // -------------------------------------------------------------------------------------

  public:
    PlcNet();
    virtual ~PlcNet();

  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage*);
    virtual void finish();
    virtual void collectGarbageOf(cMessage*);
    virtual void updateDisplay(double dat_rat);

    // tokenize string containing space-separated numbers into the array
    virtual void tokenize(const char *str, std::vector<double>& array);

    // CHANGE ------------------------------------------------------------------------------
    virtual void updateChannel();                             		// creates a PlcChannelUpdate message and broadcasts it
    virtual double derivePERFromDatarate(double datarate);    		// correlates PER and channel quality
    virtual double fluctuations(double);                      		// generates some fluctuations on the channel
    virtual void addChannelInformation(PlcFrame *msg, int tapNum);  // Adds channel information to a message (preamble training seuqnece)
    virtual double channelQualityDistribution(double min, double mean, double max);
    virtual double channelPERDistribution(double mean);
    virtual double channelPERDistribution(double mean, double lowerLimit, double upperLimit);
    virtual void checkPriorityOfMessage(PlcFrame *msg);

    // For operation as a TDMA-Master

    virtual void handleSendingRequest (PlcSendRequestTDMA *sndReq);
    virtual void performTDMAProcedureForFrame (cMessage *msg);
    virtual bool inListOfActiveConnections (MACAddress *mac);
    virtual void addToListOfActiveConnections (MACAddress *mac);
    virtual void removeFromListOfActiveConnections (MACAddress *mac);
    virtual void updateNumberOfActiveConnections ();
    virtual void broadcastModeChange ();
    virtual void calculateTDMAparameters ();
    virtual void handOnTokenToNextModem ();
    virtual bool listOfActiveIsNotEmpty ();
    virtual void scheduleTDMATraffic ();
    virtual void handleTDMAmessages (cMessage *msg);
    virtual bool compareMACAddresses (MACAddress *a, MACAddress *b);
    virtual void copyMACAddress (MACAddress *a, MACAddress *b);
    virtual void eraseMACAddressFromListOfActiveConnections(int i);
    virtual void eraseCMessageFromTimeOutSelfMsgs(int i);
    virtual void fillTDMAManagementFieldsAtRandom();
    virtual void resetTDMAManagementFields();
    virtual void resetAllTDMAVariables();
    virtual void processRequestForMoreBandwidth(MACAddress *a);
    virtual void printListOfActiveConnections();
    virtual bool listOfActiveConnectionsIsFull();
    virtual void distributeTDMAToken();

    virtual void CHECK_TDMAProcedure();

    // For Operation as a CCo for ISP

    virtual void handleISPProcedure(cMessage *msg);
    virtual void processVendorID(int x);
    virtual void removeVendorID(int x);
    virtual void resetAllISPVariables();
    virtual void calculateISPMalus();
    virtual void printISPSystemList();
    virtual void checkISPProcedure();
    virtual void overwriteChannelProperties();
    virtual void quickSort(double arr[]);
    virtual void recalculateBusPositions(double arr[]);
    virtual double cableLengthAttenuation(int tapNum);
    virtual void showEntriesInBusPositionsCopy(int tapNum);

    virtual void sentStatisticalData();

    // -------------------------------------------------------------------------------------
};

extern "C" cSimpleModule* createPlcNet(){
	return new PlcNet();
}

extern "C" void destroyPlcNet(cSimpleModule * csm){
	delete csm;
}

#endif


