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

#include "PlcNet.h"
#include "PlcFrame_m.h"

Define_Module(PlcNet);

static cEnvir& operator<< (cEnvir& out, cMessage *msg)
{
    out.printf("(%s)%s",msg->getClassName(),msg->getFullName());
    return out;
}

PlcNet::PlcNet()
{
    tap = NULL;
}

PlcNet::~PlcNet()
{
    delete [] tap;

    // CHANGE --------------------------------------
    for (int i=0; i<MAXIMUM_CLIENTS; i++)
    {
    	if(timeOutSelfMsgs[i] != NULL) cancelAndDelete(timeOutSelfMsgs[i]);
    }
    if(CSMA_TDMA != NULL) cancelAndDelete(CSMA_TDMA);
    if(TDMA_Cycle != NULL) cancelAndDelete(TDMA_Cycle);
    if(PASS_TOKEN_TO_NEXT_IN_LIST != NULL) cancelAndDelete(PASS_TOKEN_TO_NEXT_IN_LIST);
    // ---------------------------------------------
}

void PlcNet::initialize()
{
	reportEnabled = par("reportEnabled");
	for(int i=0; i<4; i++)
	{
		ISP_maptable[i][0] = i;
		ISP_maptable[i][1] = -1;
		ISP_maptable[i][2] = 0;
	}
	counter = 0;

	// datarateVector.setName("datarateVector");
	// PERVector.setName("PERVector");
	// PriorityVector.setName("PriorityVector");

	if(COMMENTS_ON)
	{
		EV << "Comments are switched on!" << endl;
	}
	else
	{
		EV << "Comments are switched off!" << endl;
	}
	// Initializing the parameters for the channel
	parAVG_PER_RATE = par("AVG_PER_RATE");
	parMAX_PLC_DATARATE = par("MAX_PLC_DATARATE");
	parAVERAGE_PLC_DATARATE = par("AVERAGE_PLC_DATARATE");
	parCHANNEL_FLUCTUATIONS = par("CHANNEL_FLUCTUATIONS");
	parCHANNEL_DISTRIBUTION_THETA = par("CHANNEL_DISTRIBUTION_THETA");
	type = par("type");
	vendorID = par("vendorID");

	VENDOR_MALUS_2_NETWORKS = par("VENDOR_MALUS_2_NETWORKS");
	VENDOR_MALUS_3_NETWORKS = par("VENDOR_MALUS_3_NETWORKS");
	VENDOR_MALUS_4_NETWORKS = par("VENDOR_MALUS_4_NETWORKS");
	VENDOR_MALUS_UNPOLITENESS_ACTIVE = par("VENDOR_MALUS_UNPOLITENESS_ACTIVE");
	ISP_PERIOD = par("ISP_PERIOD");
	HOPCOUNT_LOSS = par("HOPCOUNT_LOSS");

	ROBO_DATARATE = par("ROBO_DATARATE");

	PRIORITY_1_CHANCE = par("PRIORITY_1_CHANCE");
	PRIORITY_2_CHANCE = par("PRIORITY_2_CHANCE");
	PRIORITY_3_CHANCE = par("PRIORITY_3_CHANCE");

	TDMA_PERIOD = par("TDMA_PERIOD");
	MAXIMUM_CLIENTS = par("MAXIMUM_CLIENTS");
	TDMA_TIME_OUT = par("TDMA_TIME_OUT");
	CHANCE_TO_ACCEPT_QOS_REQ = par("CHANCE_TO_ACCEPT_QOS_REQ");
	BANDWIDTH_REQUEST_RESPONSE_CHANCE = par("BANDWIDTH_REQUEST_RESPONSE_CHANCE");

	TDMA_ONLY = par("TDMA_ONLY");
	CSMA_ONLY = par("CSMA_ONLY");
	MODE_CHANGE_TIME_CSMA = par("MODE_CHANGE_TIME_CSMA");
	MODE_CHANGE_TIME_TDMA = par("MODE_CHANGE_TIME_TDMA");
	LOSS_PER_METER = par("LOSS_PER_METER");
	KINK_LENGTH = par("KINK_LENGTH");

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

	CSMA_CA_MAX_ADDITIONAL_WAIT_TIME = par("CSMA_CA_MAX_ADDITIONAL_WAIT_TIME");
	CHANNEL_UPDATE_RATIO = par("CHANNEL_UPDATE_RATIO");
	CIFS = par("CIFS");
	RIFS = par("RIFS");
	PRIORITY_RESOLUTION_PERIOD = par("PRIORITY_RESOLUTION_PERIOD");
	VENDOR_AWARENESS_PERIOD = par("VENDOR_AWARENESS_PERIOD");

	if (COMMENTS_ON) EV << "Printing channel properties ..." << endl;
	if (COMMENTS_ON) EV << "AVG_PER_RATE: " << parAVG_PER_RATE << endl;
	if (COMMENTS_ON) EV << "MAX_PLC_DATARATE: " << parMAX_PLC_DATARATE << endl;
	if (COMMENTS_ON) EV << "AVERAGE_PLC_DATARATE: " << parAVERAGE_PLC_DATARATE << endl;
	if (COMMENTS_ON) EV << "CHANNEL_FLUCTUATIONS: " << parCHANNEL_FLUCTUATIONS << endl;
	if (COMMENTS_ON) EV << "CHANNEL_DISTRIBUTION_THETA: " << parCHANNEL_DISTRIBUTION_THETA << endl;

    numMessages = 0;
    WATCH(numMessages);

    functionCalls = 0;
    datarate_clear = 0;

    scheduledErasedTimeOutMsgs = 0;
    unscheduledErasedTimeOutMsgs = 0;
    WATCH(scheduledErasedTimeOutMsgs);
    WATCH(unscheduledErasedTimeOutMsgs);

    current_tab = 0;
    nextTabTDMA = new Token ("NEXT_TAB");
//    nextTabTDMA->setToken("00-00-00-00-00-00");
    nextTabTDMA->setToken(MACAddress("00-00-00-00-00-00"));

    // CHANGE --------------------------
    packetsLost = 0;
    WATCH(packetsLost);

    CSMA_TDMA = new cMessage ("CSMA_TDMA");
	current_mode = 1; // we always start in CSMA-mode
	if (ev.isGUI())
	{
		char modestr[64];
		if (current_mode == 1) sprintf(modestr, "Mode: CSMA");
		else sprintf(modestr, "Mode: TDMA");
		getDisplayString().setTagArg("t",0,modestr);
	}
	WATCH(current_mode);
	TDMA_Cycle = new cMessage ("TDMA_Cycle");
	PASS_TOKEN_TO_NEXT_IN_LIST = new cMessage ("PASS_TOKEN_TO_NEXT_IN_LIST");
	token_time = 0;
	TDMA_time = 0;
	activeModem = NULL;
	WATCH(activeModem);

    // Initialisation of the fields for TDMA management

    numOfActiveConnections = 0;
    WATCH(numOfActiveConnections);
    if (COMMENTS_ON) EV << numOfActiveConnections << " connections are active." << endl;
    listOfActiveConnections = new MACAddress* [MAXIMUM_CLIENTS];
    timeOutSelfMsgs = new cMessage* [MAXIMUM_CLIENTS];
    // Initialize timeOutSelfMsgs[i]
    for(int i=0; i< MAXIMUM_CLIENTS; i++) timeOutSelfMsgs[i] = new cMessage ("00-00-00-00-00-00");

    resetTDMAManagementFields();

    // fillTDMAManagementFieldsAtRandom(); // For debugging purposes only!
    // resetTDMAManagementFields();
    // ---------------------------------
    propagationSpeed = par("propagationSpeed").doubleValue();
    if (COMMENTS_ON) EV << "Unit check: 5ns * propagationSpeed = "
    		            << 0.000000005 * propagationSpeed << "m. (Should be approx. 1m!)" << endl;

    // initialize the positions where the hosts connects to the bus
    taps = gateSize("plcg");

    // read positions and check if positions are defined in order (we're lazy to sort...)
    std::vector<double> pos;
    tokenize(par("positions").stringValue(), pos);
    int numPos = pos.size();
    if (numPos>taps)
    {
    	if (COMMENTS_ON) EV << "Note: `positions' parameter contains more values ("<< numPos << ") than "
              "the number of taps (" << taps << "), ignoring excess values.\n";
    }
    else if (numPos<taps && numPos>=2)
    {
    	if (COMMENTS_ON) EV << "Note: `positions' parameter contains less values ("<< numPos << ") than "
              "the number of taps (" << taps << "), repeating distance between last 2 positions.\n";
    }
    else if (numPos<taps && numPos<2)
    {
    	if (COMMENTS_ON) EV << "Note: `positions' parameter contains too few values, using 5m distances.\n";
    }
    tap = new BusTap[taps];

    int i;
    double distance = numPos>=2 ? pos[numPos-1]-pos[numPos-2] : 5;
    for (i=0; i<taps; i++)
    {
        tap[i].id = i;
        tap[i].position = i<numPos ? pos[i] : i==0 ? 5 : tap[i-1].position+distance;
    }
    for (i=0; i<taps-1; i++)
    {
        if (tap[i].position > tap[i+1].position)
            error("Tap positions must be ordered in ascending fashion, modify 'positions' parameter and rerun\n");
    }

    // Calculate propagation of delays between tap points on the bus
    for (i=0; i<taps; i++)
    {
        // Propagation delay between adjacent tap points
        if (i == 0) {
            tap[i].propagationDelay[UPSTREAM] = 0;
            tap[i].propagationDelay[DOWNSTREAM] = (tap[i+1].position - tap[i].position)/propagationSpeed;
        }
        else if (i == taps-1) {
            tap[i].propagationDelay[UPSTREAM] = tap[i-1].propagationDelay[DOWNSTREAM];
            tap[i].propagationDelay[DOWNSTREAM] = 0;
        }
        else {
            tap[i].propagationDelay[UPSTREAM] = tap[i-1].propagationDelay[DOWNSTREAM];
            tap[i].propagationDelay[DOWNSTREAM] = (tap[i+1].position - tap[i].position)/propagationSpeed;;
        }
    }

    for (i=0; i<taps; i++)
	{
		if (COMMENTS_ON) EV << "tap[" << i << "]: " << tap[i].propagationDelay[UPSTREAM]
							<< "s. [upstream]" << endl;
		if (COMMENTS_ON) EV << "tap[" << i << "]: " << tap[i].propagationDelay[DOWNSTREAM]
							<< "s. [downstream]" << endl;
	}

    // Prints out data of parameters for parameter checking...
    if (COMMENTS_ON) EV << "Parameters of (" << getClassName() << ") " << getFullPath() << "\n";
    if (COMMENTS_ON) EV << "propagationSpeed: " << propagationSpeed << "\n";
    for (i=0; i<taps; i++)
    {
    	if (COMMENTS_ON) EV << "tap[" << i << "] pos: " << tap[i].position <<
              "  upstream delay: " << tap[i].propagationDelay[UPSTREAM] <<
              "  downstream delay: " << tap[i].propagationDelay[DOWNSTREAM] << endl;
    }
    if (COMMENTS_ON) EV << "\n";

    // If connected to delay channels, they have to be overwritten ...
	if(CHN_OVERWRITE_ENABLED) overwriteChannelProperties();

    /*

    Der Autokonfig-Teil kann uebersprungen werden, da alle Modems im ROBO-Mode starten!

    // autoconfig: tell everyone that bus supports only 10Mb half-duplex
    EV << "Autoconfig: advertising that we only support 10Mb half-duplex operation\n";
    for (i=0; i<taps; i++)
    {
        PlcAutoconfig *autoconf = new PlcAutoconfig("autoconf-10Mb-halfduplex");
        autoconf->setHalfDuplex(true);
        autoconf->setTxrate(10000000); // 10Mb
        send(autoconf,"ethg$o",i);
    }
    */

    // CHANGE ------------------------------------------------------------------------------
    /*
              Die Kanalparameter werden passend zum ROBO-Mode gesetzt, und in eine
              Nachricht geschrieben. Danach wird die naechste Kanalaktualisierung
              geplant.
    */

    int channelQuality = ROBO_DATARATE;
	int packetLoss = parAVG_PER_RATE;
	datarate = channelQuality;
	PER = packetLoss;
	if (COMMENTS_ON) EV << endl << "ROBO MODE IS ACTIVE ON ALL PLC MODEMS!" << endl;
	if (COMMENTS_ON) EV << "Default channel configuration: " << endl;
	if (COMMENTS_ON) EV << "Datarate: " << channelQuality << "MBit/s" << endl;
	if (COMMENTS_ON) EV << "PER : " << packetLoss << "%" << endl << endl;
	if (COMMENTS_ON) EV << "Initial channel measurement is performed ..." << endl;
   	cMessage *timer_msg = new cMessage("CHN_UPD");

   	/*
		 Zu Beginn der Simulation verfuegen die Modems noch nicht ueber aktuelle ToneMaps,
		 d.h. zunaechjst muss eine Kanalmessung stattfinden.
   	*/

    // if (CSMA_ONLY == 0) CHECK_TDMAProcedure(); Uncomment to perform TDMA check in initialisation phase

    listOfActiveVendors[0] = 0;
    listOfActiveVendors[1] = 0;
    listOfActiveVendors[2] = 0;
    listOfActiveVendors[3] = 0;
    timeOutMsgsForISP_0 = new cMessage ("0");
    timeOutMsgsForISP_1 = new cMessage ("1");
    timeOutMsgsForISP_2 = new cMessage ("2");
    timeOutMsgsForISP_3 = new cMessage ("3");
    vendorPolitenessList[0] = true;
    vendorPolitenessList[1] = true;
    vendorPolitenessList[2] = true;
    vendorPolitenessList[3] = true;
    atLeastOneNotPoliteVendorIsActive = false;
    numberOfActiveNotPoliteVendors = 0;
    currentMalus = 1;
    // checkISPProcedure(); // Uncomment to perform ISP check in initialisation phase

   	scheduleAt(simTime() + 0.0, timer_msg);
   	if (TDMA_ONLY == 1) scheduleAt(simTime() + 2.5, CSMA_TDMA);

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
    // -------------------------------------------------------------------------------------
}

void PlcNet::handleMessage (cMessage *msg)
{
	sentStatisticalData();
	// CHANGE ------------------------------------------------------------------------------
	if (!msg->isSelfMessage() && dynamic_cast<PlcFrame*>(msg) != NULL)
	{
		PlcFrame *thisFrame = check_and_cast<PlcFrame *>(msg);
		if (COMMENTS_ON) EV << "I'm a type " << type << " modem. [(0)PLC (1)BPLC]" << endl;
		if (COMMENTS_ON) EV << "Message type is " << thisFrame->getType() << ". [(0)PLC (1)BPLC]" << endl;
		if(thisFrame->getType() != type)
		{
			if (COMMENTS_ON) EV << "Received message from a";
			if(type == 0)
			{
				if (COMMENTS_ON) EV << " BPLC System - and I'm a PLC system ... ignoring!" << endl;
			}
			if(type == 1)
			{
				if (COMMENTS_ON) EV << " PLC System - and I'm a BPLC system ... ignoring!" << endl;
			}
			delete msg;
			return;
		}
	}
	if (!msg->isSelfMessage() && dynamic_cast<Token*>(msg) != NULL)
		{
			Token *thisToken = check_and_cast<Token *>(msg);
			if (COMMENTS_ON) EV << "I have vendorID " << vendorID << endl;
			if (COMMENTS_ON) EV << "Token vendorID is " << thisToken->getVendor_ID() << endl;
			if (COMMENTS_ON) EV << "I have type " << type << endl;
			if (COMMENTS_ON) EV << "Token type is " << thisToken->getType() << endl;
			if(thisToken->getVendor_ID() != vendorID)
			{
				if (COMMENTS_ON) EV << "Received alien token ... deleting" << endl;
				delete msg;
				return;
			}
			if(thisToken->getType() != type)
			{
				if (COMMENTS_ON) EV << "Received alien token ... deleting" << endl;
				delete msg;
				return;
			}
		}
	if (!msg->isSelfMessage() && strcmp(msg->getName(), "CHN_QUAL") == 0)
	{
		if (COMMENTS_ON) EV << "Ignoring foreign channel quality message." << endl;
		delete msg;
		return;
	}
	if (!msg->isSelfMessage() && strcmp(msg->getName(), "CSMA_TDMA") == 0)
	{
		if (COMMENTS_ON) EV << "Ignoring foreign mode change message." << endl;
		delete msg;
		return;
	}
	if (msg->isSelfMessage() && strcmp(msg->getName(), "NEXT_TAB") == 0)
	{
		distributeTDMAToken();
		return;
	}
	if (msg->isSelfMessage() && strcmp(msg->getName(), "CSMA_TDMA") == 0)
	{
		if (COMMENTS_ON) EV << "current_mode is at " << current_mode << endl;
		if (CSMA_ONLY == 1)
		{
			if (COMMENTS_ON) EV << "TDMA is switched off." << endl;
			return;
		}
		resetTDMAManagementFields(); // At mode change, the fields have to be resetted!
		switch (current_mode)
		{
			case 1:
			{
				current_mode = 2;
				// Broadcasting an empty token for testing purposes ...
				/*
				listOfActiveConnections[0] = new MACAddress ("00-00-00-00-00-00");
				updateNumberOfActiveConnections();
				handOnTokenToNextModem();
				listOfActiveConnections[0] = NULL;
				*/
				updateNumberOfActiveConnections();
				scheduleTDMATraffic();
				break;
			}
			case 2:
			{
				current_mode = 1;
				break;
			}
		}
		if (COMMENTS_ON) EV << "current_mode is changed to " << current_mode << endl;
		if (ev.isGUI())
		{
			if (COMMENTS_ON) EV << "Updating display string ..." << endl;
			switch (current_mode)
			{
				case 1:
				{
					if (COMMENTS_ON) EV << "... to CSMA." << endl;
					updateDisplay(datarate);
					break;
				}
				case 2:
				{
					if (COMMENTS_ON) EV << "... to TDMA." << endl;
					updateDisplay(datarate);
					break;
				}
			}
		}
		if (COMMENTS_ON) EV << "(Repeat) current_mode is at " << current_mode << " - (1) CSMA, (2) TDMA)." << endl;
		broadcastModeChange ();
		if (CSMA_TDMA == NULL) CSMA_TDMA = new cMessage("CSMA_TDMA");
		/*
		if (current_mode == 1) // CSMA
		{
			if (TDMA_ONLY == 0) scheduleAt(simTime() + MODE_CHANGE_TIME_CSMA, CSMA_TDMA); // scheduling the next mode change to TDMA
		}
		*/
		if (current_mode == 2) // TDMA
		{
			if(CSMA_TDMA != NULL && CSMA_TDMA->isScheduled())
			{
				cancelEvent(CSMA_TDMA);
			}
			if (TDMA_ONLY == 0) scheduleAt(simTime() + MODE_CHANGE_TIME_TDMA, CSMA_TDMA); // scheduling the next mode change to CSMA
		}
		return;
	}
	if (!msg->isSelfMessage() && strcmp(msg->getName(), "QOS_REQ") == 0)
	{
		if (COMMENTS_ON) EV << "QoS request received ";
		if (current_mode == 1)
		{
			if (COMMENTS_ON) EV << "in CSMA mode. Processing ..." << endl;
			volatile int x = rand()%100;
			if (CSMA_ONLY == 1)
			{
				if (COMMENTS_ON) EV << "TDMA is switched off." << endl;
				return;
			}
			if (x < CHANCE_TO_ACCEPT_QOS_REQ)
			{
				if (COMMENTS_ON) EV << "QoS traffic will be granted." << endl;
				if(CSMA_TDMA != NULL && CSMA_TDMA->isScheduled())
				{
					cancelEvent(CSMA_TDMA);
				}
				scheduleAt(simTime() + 0.001, CSMA_TDMA);
			}
			if (x >= CHANCE_TO_ACCEPT_QOS_REQ)
			{
				if (COMMENTS_ON) EV << "QoS traffic will be refused." << endl;
			}
		}
		if (current_mode == 2)
		{
			if (COMMENTS_ON) EV << "in TDMA mode. Dropping ..." << endl;
		}
		delete msg;
		return;
	}
	if (!msg->isSelfMessage() && strcmp(msg->getName(), "BNW_REQ") == 0)
	{
		if (current_mode == 2)
		{
			if (COMMENTS_ON) EV << "Received request for more bandwidth." << endl;
			if (dynamic_cast<MoreBandwidthRequest*>(msg)!=NULL)
			{
				MoreBandwidthRequest *bwr = check_and_cast<MoreBandwidthRequest *>(msg);
				if (COMMENTS_ON) EV << "Request comes from " << bwr->getSrc().str() << "." << endl;
				MACAddress *temp = new MACAddress (bwr->getSrc());
				processRequestForMoreBandwidth(temp);
			}
			delete msg;
			return;
		}
		if (current_mode == 1)
		{
			if (COMMENTS_ON) EV << "Stray message detected, dropping ..." << endl;
			return;
		}
	}
	// If in TDMA-mode perform TDMA operations / if NOT, drop stray TDMA-messages in CSMA mode
	if (CSMA_ONLY == 0)
	{
		if (current_mode == 2)
		{
			MACAddress *tempMAC = new MACAddress ();
			tempMAC->tryParse(msg->getName());
			if (COMMENTS_ON) EV << "In TDMA mode, performing TDMA procedure ..." << endl;
			if (strcmp(msg->getName(), "PASS_TOKEN_TO_NEXT_IN_LIST") == 0 ||
				strcmp(msg->getName(), "TDMA_Cycle") == 0 ||
				strcmp(msg->getName(), "SND_REQ") == 0 ||
				tempMAC->tryParse(msg->getName()) == true ||
				dynamic_cast<PlcFrame*>(msg)!=NULL ||
				dynamic_cast<PlcSendRequestTDMA*>(msg)!=NULL)
			{
				handleTDMAmessages(msg);
				if (strcmp(msg->getName(), "PASS_TOKEN_TO_NEXT_IN_LIST") == 0 ||
				    strcmp(msg->getName(), "TDMA_Cycle") == 0 ||
				    strcmp(msg->getName(), "SND_REQ") == 0 ||
				    tempMAC->tryParse(msg->getName()) == true ||
				    dynamic_cast<PlcSendRequestTDMA*>(msg)!=NULL)
				{
					if (COMMENTS_ON) EV << "Finished processing for TDMA management message." << endl;
					if (!msg->isSelfMessage()) delete msg;
					return;
				}
			}
		}
		if (current_mode == 1)
		{
			MACAddress *tempMAC = new MACAddress ();
			tempMAC->tryParse(msg->getName());
			if (COMMENTS_ON) EV << "In CSMA mode, checking for TDMA stray messages ..." << endl;
			if (strcmp(msg->getName(), "PASS_TOKEN_TO_NEXT_IN_LIST") == 0 ||
				strcmp(msg->getName(), "TDMA_Cycle") == 0 ||
				strcmp(msg->getName(), "SND_REQ") == 0 ||
				tempMAC->tryParse(msg->getName()) == true ||
				dynamic_cast<PlcSendRequestTDMA*>(msg)!=NULL)
			{
				if (COMMENTS_ON) EV << "Stray message detected, dropping ..." << endl;
				return;
			}
		}
	}
	bool isISPNumber = false;
	if (strcmp(msg->getName(), "0") == 0 ||
		strcmp(msg->getName(), "1") == 0 ||
		strcmp(msg->getName(), "2") == 0 ||
		strcmp(msg->getName(), "3") == 0) isISPNumber = true;
	if (isISPNumber && msg->isSelfMessage())
	{
		if (current_mode == 1) // CSMA
		{
			if (COMMENTS_ON) EV << "Received ISP time out in CSMA mode - processing ..." << endl;
			handleISPProcedure(msg);
		}
		if (current_mode == 2) // TDMA
		{
			if (COMMENTS_ON) EV << "Received ISP time out in TDMA mode - dropping ..." << endl;
		}
		return;
	}

	/*
	          Bei CSMA/CA kommt es so gut wie nie zu Kollisionen, daher war es erforderlich,
	          fuer den Nachweis der Korrektheit der Kollisionsprozedur kuenstlich Kollisionen
	          herbeizufuehren, die alle xx Nachrichten stattfinden.
	*/
	numMessages++;
	// MAKE A JAM EVERY xx MESSAGES, IF AUTOJAM IS ENABLED
	int jam = AUTO_JAM_ENABLED;
	if (current_mode == 2) jam = 0; // there are no jams in TDMA-mode
	int numJam = AUTO_JAM_REPETITION;
	if (COMMENTS_ON) EV << "Counter is at " << numMessages << " messages." << endl;
	if(jam == 1 && numMessages%numJam == 0 && numMessages > 1)
	{
		if (COMMENTS_ON) EV << endl << "Artifical jam created for debugging purposes!" << endl;
		for (int i=0; i<taps; i++)
		{
			PlcJam *this_jam = new PlcJam("ART_JAM");
			this_jam->setByteLength(JAM_SIGNAL_BYTES * 2);
			if (COMMENTS_ON) EV << "Sending JAM on tap " << i << "." << endl;
			send(this_jam,"plcg$o",i);
		}
		if (COMMENTS_ON) EV << "Finished broadcast of jam signal." << endl;
		return;
	}
	// MANAGE & CREATE CHANNEL UPDATE MESSAGES
	if (msg->isSelfMessage() && strcmp(msg->getName(), "CHN_UPD") == 0)
	{
		delete msg;
		updateChannel();
		return;
	}
	/*
	           Da die Module des INET-Frameworks nicht optimal mit "echten" Channels
	           zusammenarbeiten, und die "echten" Channel nur schwer zur Laufzeit
               umkonfiguriert werden koennen, empfiehlt es sich, die Paketverluste
               im Kanalmodul zu realisieren.
               Hierzu wird einfach ein gleichverteiltes Zufallsexperiment gestartet,
               und das Ergebnis wird mit der aktuellen Paketfehlerrate abgeglichen.
	*/

	// MAKE IT POSSIBLE TO LOOSE SOME PACKETS
	if (!msg->isSelfMessage())
	{
		double diceroll = (double)(rand()%1000000); // makes the channel loose some packets
		diceroll = diceroll / 10000;
		if (COMMENTS_ON) EV << "Diceroll resulted in " << diceroll << "." << endl;
		if (COMMENTS_ON) EV << "Current PER is " << PER * 100 << "%." << endl;
		if (diceroll < PER*100)
		{
			bubble("PACKET ERROR");
			if (COMMENTS_ON) EV << endl << "!Packet lost!" << endl << endl;
			packetsLost++;
			cPacket *packet = check_and_cast <cPacket*>(msg);
			packet->setBitError(true);
			msg = check_and_cast<cMessage*>(packet);
			// delete msg;
			// return;
		}
		else
		{
			bubble("PAKET TRANSMITTED");
			if (COMMENTS_ON) EV << "Packet was proceeded successfully." << endl;
		}
	}
	// -------------------------------------------------------------------------------------
    if (!msg->isSelfMessage())
    {
    	// CHANGE ------------------------------------------------
    	if(dynamic_cast<PlcFrame*>(msg)!=NULL)
		{
    		PlcFrame *plc = check_and_cast<PlcFrame *>(msg);
			plc->setHopCounter(0);
			if (COMMENTS_ON) EV << "Initialized hop counter with " << plc->getHopCounter() << "." << endl;
			checkPriorityOfMessage(plc);
		}
    	// -------------------------------------------------------

        // Handle frame sent down from the network entity
        int tapPoint = msg->getArrivalGate()->getIndex();
        if (COMMENTS_ON) EV << "Frame " << msg << " arrived on tap " << tapPoint << endl;
        if (COMMENTS_ON) EV << "#Taps: " << taps << endl;

        // create upstream and downstream events
        if (tapPoint>0)
        {
            // start UPSTREAM travel
            // if goes downstream too, we need to make a copy

        	PlcFrame *plc2 = check_and_cast<PlcFrame *>(msg);
        	if (COMMENTS_ON) EV << "Hop counter is at " << plc2->getHopCounter() << "." << endl;
        	plc2->setHopCounter(plc2->getHopCounter()+1);
        	if (COMMENTS_ON) EV << "Hop counter is now at " << plc2->getHopCounter() << "." << endl;
        	msg = check_and_cast<cMessage *>(plc2);

            cMessage *msg2 = (tapPoint<taps-1) ? (cMessage *)msg->dup() : msg;
            msg2->setKind(UPSTREAM);
            msg2->setContextPointer(&tap[tapPoint-1]);
            scheduleAt(simTime()+tap[tapPoint].propagationDelay[UPSTREAM], msg2);
        }
        if (tapPoint<taps-1)
        {
            // start DOWNSTREAM travel
            msg->setKind(DOWNSTREAM);
            msg->setContextPointer(&tap[tapPoint+1]);
            scheduleAt(simTime()+tap[tapPoint].propagationDelay[DOWNSTREAM], msg);
        }
        if (taps==1)
        {
            // if there's only one tap, there's nothing to do
            delete msg;
        }
    }
    else
    {
        // handle upstream and downstream events
        int direction = msg->getKind();

		PlcFrame *plc3 = check_and_cast<PlcFrame *>(msg);
		if (COMMENTS_ON) EV << "Hop counter is at " << plc3->getHopCounter() << "." << endl;
		plc3->setHopCounter(plc3->getHopCounter()+1);
		if (COMMENTS_ON) EV << "Hop counter is now at " << plc3->getHopCounter() << "." << endl;
		msg = check_and_cast<cMessage *>(plc3);

        BusTap *thistap = (BusTap *) msg->getContextPointer();
        int tapPoint = thistap->id;

        if (COMMENTS_ON) EV << "Event " << msg << " on tap " << tapPoint << ", sending out frame\n";

        // send out on gate
        // CHANGE -------------------------------------------------------------
        /*
                  Bei PLC wird die Preamble auch als Trainingssequenz genutzt, um den Modems
                  zu ermoeglichen, die aktuelle Kanalqualitaet herauszulesen. Deshalb muss das
                  Kanalmodul diese Informationen in die uebermittelten Nachrichten schreiben.
        */

        if (COMMENTS_ON) EV << "Adding information to the preamble ..." << endl;
        if(dynamic_cast<PlcFrame*>(msg)!=NULL)
		{
        	PlcFrame *plc = check_and_cast<PlcFrame *>(msg);
        	addChannelInformation(plc,tapPoint);
        	msg = check_and_cast<cMessage *>(plc);
        	if(current_mode == 1 || current_mode == 2)
			{
				if (COMMENTS_ON) EV << "Performing ISP operation." << endl;
				handleISPProcedure(msg);
				printISPSystemList();
			}
        	/*
			if(current_mode == 2)
			{
				if (COMMENTS_ON) EV << "Skipping ISP operation in TDMA mode." << endl;
			}
			*/
		}
        // --------------------------------------------------------------------
        bool isLast = (direction==UPSTREAM) ? (tapPoint==0) : (tapPoint==taps-1);
        cPacket *msg2 = isLast ? PK(msg) : PK(msg->dup());

        PlcFrame *plc = check_and_cast<PlcFrame *>(msg);
        if(plc->getVendorID() == vendorID) send(msg2, "plcg$o", tapPoint);
        if(plc->getVendorID() != vendorID)
        {
        	if (COMMENTS_ON) EV << "Message is alien to my system!" << endl;
        	delete msg;
        	return;
        }

        // if not end of the bus, schedule for next tap
        if (isLast)
        {
        	if (COMMENTS_ON) EV << "End of bus reached\n";
        }
        else
        {
        	if (COMMENTS_ON) EV << "Scheduling for next tap\n";
            int nextTap = (direction==UPSTREAM) ? (tapPoint-1) : (tapPoint+1);
            msg->setContextPointer(&tap[nextTap]);
            scheduleAt(simTime()+tap[tapPoint].propagationDelay[direction], msg);
        }
    }
    if (COMMENTS_ON) EV << "Message handling complete." << endl;
}

void PlcNet::tokenize(const char *str, std::vector<double>& array)
{
    char *str2 = opp_strdup(str);
    if (!str2) return;
        char *s = strtok(str2, " ");
    while (s)
    {
        array.push_back(atof(s));
        s = strtok(NULL, " ");
    }
    delete [] str2;
}


void PlcNet::finish ()
{
	collectGarbageOf(CSMA_TDMA);
	collectGarbageOf(TDMA_Cycle);
	collectGarbageOf(PASS_TOKEN_TO_NEXT_IN_LIST);
	collectGarbageOf(nextTabTDMA);

	cancelAndDelete(timeOutMsgsForISP_0);
	cancelAndDelete(timeOutMsgsForISP_1);
	cancelAndDelete(timeOutMsgsForISP_2);
	cancelAndDelete(timeOutMsgsForISP_3);

	for (int i=0; i<MAXIMUM_CLIENTS; i++) collectGarbageOf(timeOutSelfMsgs[i]);

	/*
    simtime_t t = simTime();
    recordScalar("simulated time", t);

    // CHANGE ---------------------------------
    recordScalar("Packets lost", packetsLost);
    // ----------------------------------------

    recordScalar("messages handled", numMessages);
    if (t>0)
        recordScalar("messages/sec", numMessages/t);
    EV << "datarate, min:    " << datarateStats.getMin() << "Mbps" << endl;
	EV << "datarate, max:    " << datarateStats.getMax() << "Mbps" << endl;
	EV << "datarate, mean:   " << datarateStats.getMean() << "Mbps" << endl;
	EV << "datarate, stddev: " << datarateStats.getStddev() << "Mbps" << endl << endl;
	EV << "scheduledErasedTimeOutMsgs: " << scheduledErasedTimeOutMsgs << endl;
	EV << "unscheduledErasedTimeOutMsgs: " << unscheduledErasedTimeOutMsgs << endl;
	EV << "functionCalls: " << functionCalls << endl;
	datarateStats.recordAs("datarateStats");
	PERStats.recordAs("PERStats");
	PriorityStats.recordAs("PriorityStats");
	*/
}

void PlcNet::collectGarbageOf(cMessage* msg)
{
	if (msg != NULL)
	{
		if (msg->isScheduled())
		{
			if (COMMENTS_ON) EV << "Garbage of " << msg->getName() << " successfully collected." << endl;
			cancelAndDelete (msg);
		}
		else
		{
			if (COMMENTS_ON) EV << "Garbage of " << msg->getName() << " does not need be collected." << endl;
		}
	}
	if (msg == NULL)
	{
		if (COMMENTS_ON) EV << "Message pointer was empty." << endl;
	}
}

void PlcNet::updateDisplay(double dat_rat)
{
	char modestr[128];
	double parDATARATE = dat_rat;

	if(datarate >= 1)
	{
		if (COMMENTS_ON) EV << "Updating display string ..." << endl;
		if (COMMENTS_ON) EV << "Max. current available datarate: " << datarate << " Mbit/s" << endl;
		if (current_mode == 1) // CSMA
		{
			if (COMMENTS_ON) EV << "Mode: CSMA" << endl;
			sprintf(modestr, "Current datarate: %f Mbit/s \n Mode: CSMA", parDATARATE);
		}
		if (current_mode == 2) // TDMA
		{
			if (COMMENTS_ON) EV << "Mode: TDMA" << endl;
			sprintf(modestr, "Current datarate: %f Mbit/s \n Mode: TDMA", parDATARATE);
		}
		getDisplayString().setTagArg("t",0,modestr);
	}
	if(datarate < 1)
	{
		if (COMMENTS_ON) EV << "Updating display string ..." << endl;
		if (COMMENTS_ON) EV << "Datarate: " << datarate*1000 << " kbit/s" << endl;
		if (current_mode == 1) // CSMA
		{
			if (COMMENTS_ON) EV << "Mode: CSMA" << endl;
			sprintf(modestr, "Current datarate: %f kbit/s \n Mode: CSMA", parDATARATE*1000);
		}
		if (current_mode == 2) // TDMA
		{
			if (COMMENTS_ON) EV << "Mode: TDMA" << endl;
			sprintf(modestr, "Current datarate: %f kbit/s \n Mode: TDMA", parDATARATE*1000);
		}
		getDisplayString().setTagArg("t",0,modestr);
	}
}

// CHANGE ------------------------------------------------------------------------------
void PlcNet::updateChannel()
/*
     Die Funktion updateChannel() veraendert den Kanalzustand im eingestellten Rhytmus z.T.
     drastisch - die simuliert, das evtl. starke Oberschwingungsquellen, wie z.B. Laptop-
     Netzteile an das Netz angeschlossen werden, bzw. wieder entfernt werden.
     Die minimale Datanrate leigt bei 6 MBit/s, was der ROBO-Datenrate entspricht (der
     Wert der ROBO-Datenrate konnte beim Modemhersteller devolo erfragt werden). Das
     Maximum liegt aktuell bei 200 MBit/s, was der theoretischen Spitzenleistung von
     aktuellen High-End-Geraeten entspricht. Der Mittelwert der Uebertragsfaehigkeit einer
     Hausinstallation (die sich in ihrer Vielzahl gar nicht so sehr voneinander unter-
     scheiden, siehe dazu die entsprechenden ETSI-Berichte) betraegt etwa 45 MBit/s; dieser
     Wert stammt aus der Dissertation von Andreas Schwager (Sony).
*/
{
	bubble("Updating Channel!");
	if (COMMENTS_ON) EV << "Channel Update" << endl;
	volatile double channelQuality = channelQualityDistribution(ROBO_DATARATE, parAVERAGE_PLC_DATARATE, parMAX_PLC_DATARATE);
	// double packetLoss = channelPERDistribution(AVG_PER_RATE);
	double packetLoss = derivePERFromDatarate(channelQuality);

	if (COMMENTS_ON) EV << "Datarate: " << channelQuality << "MBit/s" << endl;
	if (COMMENTS_ON) EV << "PER : " << packetLoss << "%" << endl;


	int counter = 0;
	for (int i=0; i<4; i++)
	{
		if (listOfActiveVendors[i] == 1)
		{
			counter = counter+1;
		}
	}
	if (current_mode == 1 || current_mode == 2)
	{
		if (COMMENTS_ON) EV << counter << " different systems are active. Reducing the datarate by "
							<< (1-currentMalus) * 100 << "%." << endl;
	}
	datarate_clear = channelQuality;
	datarate = channelQuality * currentMalus;
	PER = packetLoss;
	updateDisplay(datarate);
	for (int i=0; i<taps; i++)
	{
		PlcChannelUpdate *chnupd = new PlcChannelUpdate("CHN_QUAL");
		double temp = (channelQuality-cableLengthAttenuation(i));
		chnupd->setDatarate(fluctuations(temp));
		chnupd->setPER((double)(packetLoss));
		send(chnupd,"plcg$o",i);
	}
	// datarateVector.record(datarate);         // To check that the programmed distribution are correct,
	// datarateStats.collect(datarate);         // we monitor the single values
	// PERVector.record(PER);
	// PERStats.collect(PER);

	/* ... this code was shifted to other modules
	if(myDataCollector != NULL)
	{
		myData = new NetCondition("MES_DAT");
		myData->setDatarate(datarate);
		myData->setPER(PER);
		myData->setTypeOfNet(type);
		cMessage *thisMsg = check_and_cast<cMessage *>(myData);
		// sendDirect(thisMsg,0,0,myDataCollector,"dataIn");
	}
	*/

	/*
		Von Siemens (Alla Heidenreich) kommt zur Haeufigkeit der Kanalaktualisierung folgende Aussage:
		Die Modems aktualisieren alle 5 bis 10 Sekunden synchron ihre Kanalmessung, oder asynchron, wenn
		die aktuelle PER die gespeicherte uebertrifft.
	*/
	double x = uniform(0,5);
	simtime_t chnUPD = CHANNEL_UPDATE_RATIO + (simtime_t)x;
	if(COMMENTS_ON) EV << "Next channel update in " << chnUPD << " seconds." << endl;

	cMessage *next_updChn = new cMessage("CHN_UPD");
	scheduleAt(simTime() + chnUPD, next_updChn);
}

double PlcNet::derivePERFromDatarate(double datarate)
{
	/*
		  Damit Datenrate und PER des Kanals verknuepft sind, wird folgender Algorithmus
		  gewaehlt:
		  1. Teile die maximale Datenrate in Zehntel auf.
		  2. Finde die Nummer des Zehntelintervalls, in dem die aktuelle Datenrate liegt
		  3. Suche fuer die PER-Verteilung das analoge, (d.h. entgegengesetzte) Zehntel heraus
		  4. Waehle per Zufall eine PER aus diesem Zehntel aus
	*/
	double tenthOfMaxDatarate = parMAX_PLC_DATARATE / 10;
	if (COMMENTS_ON) EV << "Tenth of max. datarate is " << tenthOfMaxDatarate << " Mbps." << endl;
	double MaxPER = (parAVG_PER_RATE * 2);
	double tenthOfMaxPER =  MaxPER / 10;
	if (COMMENTS_ON) EV << "Tenth of max. PER is " <<  tenthOfMaxPER << " %." << endl;

	int intervall_datarate = 0;
	for(int i=0; i<10; i++)
	{
		if (datarate >= tenthOfMaxDatarate*i && datarate <= tenthOfMaxDatarate*(i+1))
		{
			intervall_datarate = i+1;
			if (COMMENTS_ON) EV << "Datarate between " << tenthOfMaxDatarate*(i) << " Mbps and "
								<< tenthOfMaxDatarate*(i+1) << " Mbps -> intervall number "
								<< intervall_datarate << "." << endl;
		}
	}
	double PERupperLimit = tenthOfMaxPER * (10 - intervall_datarate + 1);
	double PERlowerLimit = tenthOfMaxPER * (10 - intervall_datarate);
	if (COMMENTS_ON) EV << "PER between " << PERlowerLimit << " % and " << PERupperLimit << " %." << endl;

	volatile double packetloss = channelPERDistribution(parAVG_PER_RATE, PERlowerLimit, PERupperLimit);
	if (COMMENTS_ON) EV << "The final PER is " << packetloss << " %." << endl;
	return packetloss;
}

double PlcNet::fluctuations(double x)
/*
       Diese Funktion sorgt dafuer, das nicht jedes Modem den exakt gleichen Kanal sieht, da
       Hausinstallationen prinzipiell unsymmetrisch sind (geoeffnete Schalter usw.). In der
       Realitaet fuehrt dies dazu, das durch die Modems symmetrisch eingekoppelte Signale sich
       zu einem gewissen Teil in Common-Mode-Signale umwandeln.
       (Desweiteren aendert sich die Kanaleigenschaft synchron mit dem AC-LineCycle.)
*/

{
	if (COMMENTS_ON) EV << "Parameter x was set to " << x << endl;
	double y = parCHANNEL_FLUCTUATIONS;
	if(y == 0) return x;
	if(parCHANNEL_FLUCTUATIONS == 0) return x;
	double z = (double)(rand()%((int)y*100));
	z = z/100;
	y = (x/100) * z;
	int sign = rand()%2;
	double result = 0;
	if(sign == 0)
	{
		result = x - y;
	}
	if(sign == 1)
	{
		result = x + y;
	}
	if (COMMENTS_ON) EV << "Result of fluctuation is " << result << "." << endl;
	return result;
}

void PlcNet::addChannelInformation(PlcFrame *msg, int tapNum)
/*
     Diese Funktion fuegt einem Frame die Informationen ueber die aktuelle Kanalqualitaet
     hinzu. Dies Simuliert die Veraenderung der Trainingssequenz in der Preambel.
*/
{
	if (COMMENTS_ON) EV << "Current avalable datarate is " << datarate << " Mbps." << endl;
	double hopCountLoss = 1;
	// Remember that currentMalus is always 1 (0% malus) in TDMA mode
	if (current_mode == 1 || current_mode == 2)
	{
		int counter = 0;
		for (int i=0; i<4; i++)
		{
			if (listOfActiveVendors[i] == 1)
			{

				counter = counter+1;
			}
		}
		calculateISPMalus();
		if (COMMENTS_ON) EV << counter << " different systems are active. Reducing the datarate by "
							<< (1-currentMalus) * 100 << "%." << endl;
		int temp = msg->getHopCounter();
		hopCountLoss = (100 - (temp * (HOPCOUNT_LOSS-1)));
		hopCountLoss = hopCountLoss * 0.01;
		if (COMMENTS_ON) EV << "HOPCOUNT_LOSS is at " << HOPCOUNT_LOSS << "%." << endl;
		if (COMMENTS_ON) EV << "Hop counter is at " << temp << "." << endl;
		if (COMMENTS_ON) EV << "Modifier is then " << hopCountLoss << "." << endl;
	}
	if (COMMENTS_ON) EV << "Hop Count Loss variable: " << hopCountLoss << endl;
	if (COMMENTS_ON) EV << "Current Malus variable: " << currentMalus << endl;
	double allLosses =  1 - ((1-currentMalus) + (1 - hopCountLoss));
	if (COMMENTS_ON) EV << "Togehther this makes a modifier of " << allLosses << " ..." << endl;
	res_datarate = datarate_clear * allLosses;
	updateDisplay(res_datarate);
	if (COMMENTS_ON) EV << "Resulting datarate is " << res_datarate << " Mbps." << endl;
	res_datarate = fluctuations(res_datarate-cableLengthAttenuation(tapNum));
	if (COMMENTS_ON) EV << "Resulting datarate is " << res_datarate << " Mbps. (check)" << endl;
	msg->setDatarate(res_datarate);
	if(res_datarate < 0) msg->setDatarate(ROBO_DATARATE);
	if (COMMENTS_ON) EV << "Result of channel fluctuations (txrate) is " <<  msg->getDatarate() << "." << endl;
	if (COMMENTS_ON) EV << "The PER stored in the preamble is " << PER << " %." << endl;
	msg->setPER(fluctuations(PER));
	if (COMMENTS_ON) EV << "Result of channel fluctuations (PER) is " << msg->getPER() << "." << endl;

	/* ... this was shifted to other modules
	NetCondition *preamble = new NetCondition("NET_CON");
	preamble->setDatarate(datarateCopy);
	preamble->setPER(PER);
	preamble->setTypeOfNet(type);
	cMessage *thisMsg = check_and_cast<cMessage *>(preamble);
	sendDirect(thisMsg,0,0,myDataCollector,"dataIn");
	*/
}

double PlcNet::channelQualityDistribution(double min, double mean, double max)
/*
    Diese Funktion realisiert ein gamma-verteiltes Zufallsexperiment zur Ermittlung der
    aktuellen Kanalqualitaet. Die Gammaverteilung scheint besonders geeignet, da der
    statistische Mittelwert gegenueber dem arithmetischen Mittelwert "(max-min)*0.5"
    deutlich verschoben ist.
*/

{
	if (mean < 1)
	{
		if (COMMENTS_ON) EV << "Gamma_d distribution random experiment for small values ... " << endl;
		if (COMMENTS_ON) EV << "Minimum = " << min << endl;
		if (COMMENTS_ON) EV << "Mean = " << mean << endl;
		if (COMMENTS_ON) EV << "Maximum = " << max << endl;
		double theta = parCHANNEL_DISTRIBUTION_THETA;
		double alpha = (mean * 1000000 * 0.01) / theta;		 // MBit/s -> Bit/s
		if (COMMENTS_ON) EV << "Alpha = " << alpha << endl;
		if (COMMENTS_ON) EV << "Theta = " << theta << endl;
		volatile double x = (100 * gamma_d(alpha,theta));    // gamme distribution (mean = alpha * theta)
		x = x/1000000;										 // Bit/s-> MBit/s
		if (x >= max) x = max;                               // cut off too large values
		if (x <= min) x = min;                               // cut off too small values
		if (COMMENTS_ON) EV << "Return value is: " << x << endl;
		return x;
	}
	if (mean >= 1)
	{
		if (COMMENTS_ON) EV << "Gamma_d distribution random experiment for big values ... " << endl;
		if (COMMENTS_ON) EV << "Minimum = " << min << endl;
		if (COMMENTS_ON) EV << "Mean = " << mean << endl;
		if (COMMENTS_ON) EV << "Maximum = " << max << endl;
		double theta = parCHANNEL_DISTRIBUTION_THETA;
		double alpha = (mean * 0.01) / theta;
		if (COMMENTS_ON) EV << "Alpha = " << alpha << endl;
		if (COMMENTS_ON) EV << "Theta = " << theta << endl;
		volatile double x = (100 * gamma_d(alpha,theta));	 // gamme distribution (mean = alpha * theta)
		if (x >= max) x = max;                               // cut off too large values
		if (x <= min) x = min;                               // cut off too small values
		if (COMMENTS_ON) EV << "Return value is: " << x << endl;
		return x;
	}
	return mean;
}

double PlcNet::channelPERDistribution(double mean)
/*
       Diese Funktion realisiert ein gamma-verteiltes Zufallsexperiment zur Ermittlung der
       aktuellen Paketverlustwahrscheinlichkeit. Die Gammaverteilung scheint besonders geeignet,
       da der Mittelwert bestimmt werden kann, aber die theoretische Grenze 100% sind.
*/

{
	if (COMMENTS_ON) EV << "Exponential distribution random experiment ... " << endl;
	if (COMMENTS_ON) EV << "Mean = " << mean << endl;
	volatile double per = exponential(mean);
	if (per <= 0) per = 0;
	if (COMMENTS_ON) EV << "Return value is: " << per << endl;
	return per;
}

double PlcNet::channelPERDistribution(double mean, double lowerLimit, double upperLimit)
{
	double average = (lowerLimit + upperLimit)/2;
	if (COMMENTS_ON) EV << "Exponential distribution random experiment ... " << endl;
    if (COMMENTS_ON) EV << "Mean = " << average << endl;
	volatile double per = exponential(average);
	if (per <= lowerLimit) per = lowerLimit;
	if (per >= upperLimit) per = upperLimit;
	if (COMMENTS_ON) EV << "Return value is: " << per << endl;
	return per;
}

void PlcNet::checkPriorityOfMessage(PlcFrame *msg)
{
	// int x = msg->getPriority();
	// PriorityVector.record(x);
	// PriorityStats.collect(x);
}

/*
		Die folgenden Funktionen machen das Modul Net zum TDMA-Master (CCo). Fuer die
		Simulation scheint dies der beste Kandidat fuer den zentralen Coordinator.
        Normalerweise wird der erste aktive Teilnehmer in einem Netzwerk der CCo.

		Level 0 CCos unterstuetzen keinen TDMA Modus - dies geht erst ab Level 1. Die
		Rolle des CCo kann wechseln, wenn ein hoeherer Level-CCo das Netzwerk joint.

		Theoretisch koennen dynamisch Teilnehmer das Netzwerk betreten, und es wieder
		verlassen, was einen gewissen Discover/Handover-Prozess mit sich bringt - dieser
		kann aber im E-DeMa-Kontext vernachlaessigt werden, da Heimnetzwerke von
		Haushaltsgeraeten als weitesgehend statisch angenommen werden koennen. Deswegen
		ist es auch im Rahmen der Approximation einer Simulation moeglich, die CCo-
		Intelligenz im Netzmodul abzulegen.

		Diese Vorgehensweise ist mit Prof. Holger Hirsch abgesprochen.
*/

void PlcNet::handleSendingRequest (PlcSendRequestTDMA *sndReq)
{
	if (COMMENTS_ON) EV << "handleSendingRequest()" << endl;
	if (COMMENTS_ON) EV << numOfActiveConnections << " connections are active." << endl;
	MACAddress *thisMAC = new MACAddress (sndReq->getSrc());
	delete sndReq;
	addToListOfActiveConnections(thisMAC);
}

bool PlcNet::inListOfActiveConnections (MACAddress *mac)
{
	if (COMMENTS_ON) EV << "inListOfActiveConnections()" << endl;
	for (int i = 0; i < MAXIMUM_CLIENTS; i++)
	{
		if (listOfActiveConnections[i] != NULL)
		{
			if (compareMACAddresses(listOfActiveConnections[i], mac))
			{
				if (COMMENTS_ON) EV << "Found " << mac->str() << " in list of active connections." << endl;
				return true;
			}
		}
	}
	if (COMMENTS_ON) EV << "Didn't find " << mac->str() << " in list of active connections." << endl;
	return false;
}

void PlcNet::addToListOfActiveConnections (MACAddress *mac)
{
	if (COMMENTS_ON) EV << "addToListOfActiveConnections()" << endl;
	if (listOfActiveConnectionsIsFull())
	{
		if (COMMENTS_ON) EV << "No more space for additional bandwidth - connection refused!" << endl;
		return;
	}
	MACAddress *zeros = new MACAddress("00-00-00-00-00-00");
	bool test = compareMACAddresses(mac, zeros);
	if (test == true)
	{
		if (COMMENTS_ON) EV << "Address is broadcast - will not be added to list!" << endl;
		return;
	}
	if (COMMENTS_ON) EV << numOfActiveConnections << " connections are active. Adding one connection." << endl;
	int i = 0;
	while (listOfActiveConnections[i] != NULL) i++;
	if (COMMENTS_ON) EV << "Found empty connection slot in field " << i << "." << endl;
	char buf1[20];
	char *s1 = buf1;
//	for (int j=0; j<MAC_ADDRESS_BYTES; j++, s1+=3) sprintf(s1,"%2.2X-",mac->getAddressByte(j)); // TODO: Changed by Ramon
//	*(s1-1)='\0';
	strcpy(s1,(mac->str()).c_str());
	if (COMMENTS_ON) EV << "MAC Address is " << buf1 << "." << endl;
	listOfActiveConnections[i] = new MACAddress(buf1);
	updateNumberOfActiveConnections();
	char buf2[20];
	char *s2 = buf2;
//	for (int j=0; j<MAC_ADDRESS_BYTES; j++, s2+=3) sprintf(s2,"%2.2X-",mac->getAddressByte(j)); // TODO: Changed by Ramon
//	*(s2-1)='\0';
	strcpy(s2,(mac->str()).c_str());
	if (dynamic_cast<cMessage*>(timeOutSelfMsgs[i]) != NULL) timeOutSelfMsgs[i]->setName(buf2);
	if (timeOutSelfMsgs[i] == NULL) timeOutSelfMsgs[i] = new cMessage(buf2);

	if (COMMENTS_ON) EV << "Printing message name: " << timeOutSelfMsgs[i]->getName() << endl;
	if (COMMENTS_ON) EV << "Creating new TDMA_TIME_OUT_MSG for " << timeOutSelfMsgs[i]->getName() << "." << endl;
	if (COMMENTS_ON) EV << "Scheduling TDMA_TIME_OUT to " << simTime() + TDMA_TIME_OUT << "s." << endl;
	scheduleAt(simTime() + TDMA_TIME_OUT, timeOutSelfMsgs[i]);
}

void PlcNet::removeFromListOfActiveConnections (MACAddress *mac)
{
	if (COMMENTS_ON) EV << "removeFromListOfActiveConnections()" << endl;
	if (COMMENTS_ON) EV << numOfActiveConnections << " connections are active. Removing one connection." << endl;
	if(inListOfActiveConnections(mac))
	{
		if (COMMENTS_ON) EV << "Searching for entry " << mac->str() << " ..." << endl;
		int k = 0;
		for (int i = 0; i < MAXIMUM_CLIENTS; i++)
		{
			if (listOfActiveConnections[i] != NULL)
			{
				if (compareMACAddresses(listOfActiveConnections[i],mac)) k = i;
			}
		}
		if (COMMENTS_ON) EV << "Found entry " << mac->str() << " in slot " << k << "." << endl;
		eraseMACAddressFromListOfActiveConnections(k);
		if(activeModem != NULL)
		{
			if (compareMACAddresses(activeModem,mac)) activeModem = NULL;
		}
		bool check = inListOfActiveConnections(mac);
		if (check)
		{
			if (COMMENTS_ON) EV << "Checked for duplicates - found at least one. Erasing ..." << endl;
			removeFromListOfActiveConnections (mac);
		}
		else
		{
			if (COMMENTS_ON) EV << "Checked for duplicates - none found." << endl;
		}
		eraseCMessageFromTimeOutSelfMsgs(k);
		updateNumberOfActiveConnections();
	}
	else
	{
		if (COMMENTS_ON) EV << "Did not find entry - removing cancelled." << endl;
	}
}

void PlcNet::updateNumberOfActiveConnections ()
{
	if (COMMENTS_ON) EV << "updateNumberOfActiveConnections()" << endl;
	int temp = 0;
	for (int i = 0; i < MAXIMUM_CLIENTS; i++)
	{
		if (listOfActiveConnections[i] != NULL)
		{
			temp++;
		}
	}
	numOfActiveConnections = temp;
	if (COMMENTS_ON) EV << numOfActiveConnections << " connections are active." << endl;
	printListOfActiveConnections();
}

void PlcNet::broadcastModeChange ()
{
	if (COMMENTS_ON) EV << "broadcastModeChange()" << endl;
	if (current_mode == 1)
	{
		if (COMMENTS_ON) EV << "Broadcasting mode change from CSMA to TDMA" << endl;
	}
	if (current_mode == 2)
	{
		if (COMMENTS_ON) EV << "Broadcasting mode change from TDMA to CSMA" << endl;
	}
	for (int i=0; i<taps; i++)
	{
		cMessage *chnupd = new cMessage("CSMA_TDMA");
		send(chnupd,"plcg$o",i);
	}
}

void PlcNet::calculateTDMAparameters ()
{
	if (COMMENTS_ON) EV << "calculateTDMAparameters()" << endl;
	simtime_t whole_tdma_period = TDMA_PERIOD;
	if (numOfActiveConnections != 0)
	{
		token_time = whole_tdma_period / numOfActiveConnections;
	}
	else token_time = whole_tdma_period;
	if (COMMENTS_ON) EV << "Token time is set to " << token_time << " seconds." << endl;
	if (COMMENTS_ON) EV << "TDMA time is set to " << whole_tdma_period << " seconds." << endl;
}

void PlcNet::handOnTokenToNextModem ()
{
	if (COMMENTS_ON) EV << "handOnTokenToNextModem()" << endl;
	// If the list is empty, just return ...
	if (!listOfActiveIsNotEmpty())
	{
		if (COMMENTS_ON) EV << "List was found empty." << endl;
		return;
	}
	if (listOfActiveIsNotEmpty())
	{
		if (COMMENTS_ON) EV << "List was found filled, ... " << endl;
	}
	if (activeModem == NULL && listOfActiveIsNotEmpty())
	{
		if (COMMENTS_ON) EV << "... but no active modem defined yet." << endl;

		// Search for the first active connection in the list ...
		int i = 0;
		while (listOfActiveConnections[i] == NULL) i++;
		if (COMMENTS_ON) EV << "The first active connection is in slot " << i << "." << endl;
		activeModem = new MACAddress();
		copyMACAddress(activeModem,listOfActiveConnections[i]);
		if (COMMENTS_ON) EV << "Active modem is now " << activeModem->str() << "." << endl;
	}
	// ---------------------------------------------------------------------------------------------------

	if(activeModem != NULL && listOfActiveIsNotEmpty())
	{
		if (COMMENTS_ON) EV << "... and active modem is defined." << endl;
		if (COMMENTS_ON) EV << "Searching for the active modem ... " << endl;

		bool foundEntryOfActiveModem = false;
		int k = 0;

		for(int i=0; i<MAXIMUM_CLIENTS; i++)
		{
			if (activeModem != NULL && listOfActiveConnections[i] != NULL)
			{
				foundEntryOfActiveModem = compareMACAddresses(activeModem,listOfActiveConnections[i]);
				if (foundEntryOfActiveModem) k = i;
			}
		}

		if (COMMENTS_ON) EV << "The active modem MAC is stored in slot " << k << "." << endl;
		k = (k+1)%MAXIMUM_CLIENTS;
		if (COMMENTS_ON) EV << "Search for the new active modem starts in slot " << k << "." << endl;

		bool foundNewEntryInRestOfList = false;
		for (int j = k; j<MAXIMUM_CLIENTS; j++)
		{
			if(listOfActiveConnections[j] != NULL)
			{
				k = j;
				foundNewEntryInRestOfList = true;
			}
		}
		if (!foundNewEntryInRestOfList)
		{
			for (int m = 0; m<(k-1); m++)
			{
				if(listOfActiveConnections[m] != NULL)
				{
					k = m;
					foundNewEntryInRestOfList = true;
				}
			}
		}
		if (foundNewEntryInRestOfList)
		{
			if (COMMENTS_ON) EV << "New active modem found in slot " << k << "." << endl;
			activeModem = new MACAddress();
			copyMACAddress(activeModem,listOfActiveConnections[k]);
			if (COMMENTS_ON) EV << "Active modem is now " << activeModem->str() << "." << endl;
		}
		if (!foundNewEntryInRestOfList)
		{
			if (COMMENTS_ON) EV << "Active modem stays the same." << endl;
		}
	}

	// ---------------------------------------------------------------------------------------------------

	// Broadcast the address of the modem which is now clear to send ...
	if (COMMENTS_ON) EV << "Broadcasting the address of the modem which is now clear to send ..." << endl;

	// Dropped
	/*
	for (int i=0; i<taps; i++)
	{
		Token *MACtoken = new Token ("TDMATOKEN");
		char buf[20];
		char *s = buf;
		for (int j=0; j<MAC_ADDRESS_BYTES; j++, s+=3) sprintf(s,"%2.2X-",activeModem->getAddressByte(j));
		*(s-1)='\0';
		MACtoken->setToken(buf);
		if (COMMENTS_ON) EV << "Creating token with MAC " << MACtoken->getToken() << endl;
		send(MACtoken,"ethg$o",i);
	}
	*/

	// Replacement code
//	char buf[20];   // TODO: Changed by Ramon
//	char *s = buf;
//	for (int j=0; j<MAC_ADDRESS_BYTES; j++, s+=3) sprintf(s,"%2.2X-",activeModem->getAddressByte(j)); // TODO: Changed by Ramon
//	*(s-1)='\0';
//	strcpy(s1,(activeModem->str()).c_str());
//	nextTabTDMA->setToken(buf);
	nextTabTDMA->setToken(*activeModem);
	distributeTDMAToken();

	// Avoid collisions with TDMA_Cycle self message ...
	if (simTime() + token_time == TDMA_time)
	{
		if(PASS_TOKEN_TO_NEXT_IN_LIST == NULL)
		{
			if (COMMENTS_ON) EV << "Message pointer <PASS_TOKEN_TO_NEXT_IN_LIST> was NULL. Creating new message ..." << endl;
			PASS_TOKEN_TO_NEXT_IN_LIST = new cMessage ("PASS_TOKEN_TO_NEXT_IN_LIST");
		}
		if (COMMENTS_ON) EV << "Token setting is skipped, because of TDMA cycle event." << endl;
		return;
	}
	else
	{
		if(PASS_TOKEN_TO_NEXT_IN_LIST == NULL)
		{
			if (COMMENTS_ON) EV << "Message pointer <PASS_TOKEN_TO_NEXT_IN_LIST> was NULL. Creating new message ..." << endl;
			PASS_TOKEN_TO_NEXT_IN_LIST = new cMessage ("PASS_TOKEN_TO_NEXT_IN_LIST");
		}
		if (PASS_TOKEN_TO_NEXT_IN_LIST->isScheduled())
		{
			if (COMMENTS_ON) EV << "Message <PASS_TOKEN_TO_NEXT_IN_LIST> is still scheduled. Cancelling ..." << endl;
			cancelEvent (PASS_TOKEN_TO_NEXT_IN_LIST);
		}
		scheduleAt(simTime() + token_time, PASS_TOKEN_TO_NEXT_IN_LIST);
		if (COMMENTS_ON) EV << "Token event is set to " << simTime() + token_time << "s." << endl;
	}
}

bool PlcNet::listOfActiveIsNotEmpty()
{
	if (COMMENTS_ON) EV << "listOfActiveIsNotEmpty()" << endl;
	for (int i = 0; i < MAXIMUM_CLIENTS; i++)
	{
		if (listOfActiveConnections[i] != NULL) return true;
	}
	return false;
}

void PlcNet::scheduleTDMATraffic ()
{
	if (COMMENTS_ON) EV << "scheduleTDMATraffic()" << endl;
	if(TDMA_Cycle == NULL)
	{
		if (COMMENTS_ON) EV << "Creating new message <TDMA_Cycle>, because the pointer was NULL." << endl;
		TDMA_Cycle = new cMessage ("TDMA_Cycle");
	}
	if(TDMA_Cycle->isScheduled())
	{
		if (COMMENTS_ON) EV << "Cancelling message <TDMA_Cycle>, because it is still scheduled." << endl;
		cancelEvent (TDMA_Cycle);
	}
	calculateTDMAparameters ();
	TDMA_time = simTime() + TDMA_PERIOD;
	if (COMMENTS_ON) EV << "TDMA marker is set to " << TDMA_time << "s." << endl;
	scheduleAt(simTime() + TDMA_PERIOD, TDMA_Cycle);
	if (COMMENTS_ON) EV << "TDMA event is set to " << simTime() + TDMA_PERIOD << "s." << endl;
	handOnTokenToNextModem (); // also schedules the next handover ...
}

void PlcNet::handleTDMAmessages (cMessage *msg)
{
	if (COMMENTS_ON) EV << "handleTDMAmessages()" << endl;
	if (COMMENTS_ON) EV << "I'm in mode " << current_mode << " ... " << endl;

	// 1. Mode change self message -----------------------------------------------------------------
	if (msg->isSelfMessage() && strcmp(msg->getName(), "CSMA_TDMA") == 0)
	{
		if (COMMENTS_ON) EV << "current_mode is at " << current_mode << endl;
		resetTDMAManagementFields(); // At mode change, the fields have to be resetted!
		switch (current_mode)
		{
			case 1:
			{
				current_mode = 2;
				// Broadcasting an empty token for testing purposes ...
				listOfActiveConnections[0] = new MACAddress ("00-00-00-00-00-00");
				updateNumberOfActiveConnections();
				handOnTokenToNextModem();
				listOfActiveConnections[0] = NULL;
				updateNumberOfActiveConnections();
				scheduleTDMATraffic();
				break;
			}
			case 2:
			{
				current_mode = 1;
				break;
			}
		}
		if (COMMENTS_ON) EV << "current_mode is changed to " << current_mode << endl;
		if (ev.isGUI())
		{
			if (COMMENTS_ON) EV << "Updating display string ..." << endl;
			switch (current_mode)
			{
				case 1:
				{
					if (COMMENTS_ON) EV << "... to CSMA." << endl;
					char modestr[64];
					sprintf(modestr, "Mode: CSMA");
					getDisplayString().setTagArg("t",0,modestr);
					break;
				}
				case 2:
				{
					if (COMMENTS_ON) EV << "... to TDMA." << endl;
					char modestr[64];
					sprintf(modestr, "Mode: TDMA");
					getDisplayString().setTagArg("t",0,modestr);
					break;
				}
			}
		}
		if (COMMENTS_ON) EV << "(Repeat) current_mode is at " << current_mode << " - (1) CSMA, (2) TDMA)." << endl;
		broadcastModeChange ();
		if (TDMA_ONLY == 0) scheduleAt(simTime() + 5.0, CSMA_TDMA); // scheduling the next mode change
		return;
	}
	// 1. Mode change self message -----------------------------------------------------------------

	// 2. Current mode = 1 (CSMA) ------------------------------------------------------------------
	if (current_mode == 1)
	{
		MACAddress *tempMAC = new MACAddress ();
		if(tempMAC->tryParse(msg->getName()))
		{
			if (COMMENTS_ON) EV << "Received time out in CSMA mode. Dropping obsolete message ... " << endl;
			return;
		}
		if(strcmp(msg->getName(), "TDMA_Cycle") == 0)
		{
			if (COMMENTS_ON) EV << "Received TDMA_Cycle in CSMA mode. Dropping obsolete message ... " << endl;
			return;
		}
		if(strcmp(msg->getName(), "PASS_TOKEN_TO_NEXT_IN_LIST") == 0)
		{
			if (COMMENTS_ON) EV << "Received PASS_TOKEN_TO_NEXT_IN_LIST in CSMA mode. Dropping obsolete message ... " << endl;
			return;
		}
		if (dynamic_cast<PlcFrame*>(msg)!=NULL)
		{
			if (COMMENTS_ON) EV << "Skipping TDMA functions for plc data frame in CSMA mode." << endl;
			return;
		}
		if(dynamic_cast<PlcSendRequestTDMA*>(msg)!=NULL)
		{
			if (COMMENTS_ON) EV << "Skipping TDMA functions for sending request in CSMA mode." << endl;
			delete msg;
			return;
		}
	}
	// 2. Current mode = 1 (CSMA) ------------------------------------------------------------------

	// 3. Current mode = 2 (TDMA) ------------------------------------------------------------------
	if (current_mode == 2)
	{
		if (strcmp(msg->getName(), "PASS_TOKEN_TO_NEXT_IN_LIST") == 0)
		{
			if (COMMENTS_ON) EV << "Received a Message: PASS_TOKEN_TO_NEXT_IN_LIST" << endl;
			if (COMMENTS_ON) EV << "Going to hand on the token to the next modem." << endl;
			handOnTokenToNextModem ();
			return;
		}
		if (strcmp(msg->getName(), "TDMA_Cycle") == 0)
		{
			if (COMMENTS_ON) EV << "Received a Message: TDMA_Cycle" << endl;
			if (COMMENTS_ON) EV << "Going to schedule the TDMA traffic." << endl;
			scheduleTDMATraffic();
			return;
		}
		if(dynamic_cast<PlcSendRequestTDMA*>(msg)!=NULL)
		{
			if (COMMENTS_ON) EV << "Received a Message: SND_REQ" << endl;
			PlcSendRequestTDMA *sndReq = check_and_cast<PlcSendRequestTDMA *>(msg);
			if (COMMENTS_ON) EV << "Received a sending request ..." << endl;
			MACAddress *thisMAC = new MACAddress(sndReq->getSrc());
			MACAddress *zeros = new MACAddress("00-00-00-00-00-00");
			bool test = compareMACAddresses(thisMAC, zeros);
			if (!test) addToListOfActiveConnections(thisMAC);
			return;
		}
		if(dynamic_cast<PlcFrame*>(msg)!=NULL)
		{
			if (COMMENTS_ON) EV << "Received a plc data frame in TDMA mode ..." << endl;
			performTDMAProcedureForFrame(msg);
			return;
		}
		MACAddress *temp = new MACAddress();
		bool NameIsAMACAddress = temp->tryParse(msg->getName());
		if (COMMENTS_ON) EV << "Is the message name a valid MAC address (0 = no, 1= yes)? Answer: "
							<< NameIsAMACAddress << "." << endl;
		if (NameIsAMACAddress)
		{
			if (COMMENTS_ON) EV << "Received a Message: NameIsAMACAddress" << endl;
			if (COMMENTS_ON) EV << "Going to erase a connection, because of a time out." << endl;
			removeFromListOfActiveConnections(temp);
			return;
		}
	}
	// 3. Current mode = 2 (TDMA) ------------------------------------------------------------------
}

void PlcNet::performTDMAProcedureForFrame (cMessage *msg)
{
	if (COMMENTS_ON) EV << "performTDMAProcedureForFrame()" << endl;
	if(COMMENTS_ON) EV << "Message's name is: " << msg->getName() << endl;
	// Moeglichkeit 1: es ist ein PlcFrame, und die Verbindung muss weiterhin als aktiv gefuehrt werden
	if (COMMENTS_ON) EV << "Checking, if it is a plc data frame." << endl;
	if (dynamic_cast<PlcFrame*>(msg)==NULL)
	{
		if (COMMENTS_ON) EV << "Message is NOT a plc data frame." << endl;
		return;
	}
	if (dynamic_cast<PlcFrame*>(msg)!=NULL)
	{
		if (COMMENTS_ON) EV << "Message is a plc data frame." << endl;
		PlcFrame *thisFrame = check_and_cast<PlcFrame *>(msg);
	    MACAddress *thisMAC = new MACAddress(thisFrame->getSrc());
		if (COMMENTS_ON) EV << "The source address of this frame is " << thisMAC->str() << endl;
		// Nummer der Verbindung in listOfActiveConnections[] finden.

		int i = 0;
		bool wasFound = false;
		if(listOfActiveIsNotEmpty())
		{
			if (COMMENTS_ON) EV << "The list of connections is not empty - searching ... " << endl;
			for (int k=0; k<MAXIMUM_CLIENTS; k++)
			{
				if (listOfActiveConnections[k] != NULL)
				{
					if (COMMENTS_ON) EV << "Entry " << k << " is not empty." << endl;
					bool MACareEqual = compareMACAddresses(listOfActiveConnections[k],thisMAC);
					if(MACareEqual)
					{
						if (COMMENTS_ON) EV << "The addresses match." << endl;
						wasFound = true;
						i = k;
						break;
					}
					else
					{
						if (COMMENTS_ON) EV << "The addresses don't match." << endl;
					}
				}
				else
				{
					if (COMMENTS_ON) EV << "Entry " << k << " is empty." << endl;
				}
			}
		}
		else
		{
			if (COMMENTS_ON) EV << "This MAC is not in the list of active connections, because it is empty." << endl;
			MACAddress *zeros = new MACAddress("00-00-00-00-00-00");
			bool test = compareMACAddresses(thisMAC, zeros);
			if (!test) addToListOfActiveConnections(thisMAC);
			return;
		}
		// Das zugehoerige Event canceln und neu starten.
		if (!wasFound)
		{
			if (COMMENTS_ON) EV << "This MAC is not in the list of active connections." << endl;
			addToListOfActiveConnections(thisMAC);
			return;
		}
		if (wasFound)
		{
			if (COMMENTS_ON) EV << "Cancelling TDMA_TIME_OUT_TIMER ..." << endl;
			if (timeOutSelfMsgs[i] != NULL)
			{
				if (timeOutSelfMsgs[i]->isScheduled()) cancelEvent (timeOutSelfMsgs[i]);
			}
			char buf[20];
			char *s = buf;
//			for (int j=0; j<MAC_ADDRESS_BYTES; j++, s+=3) sprintf(s,"%2.2X-",thisMAC->getAddressByte(j));   // TODO: Changed by Ramon
//			*(s-1)='\0';
			strcpy(s,(thisMAC->str()).c_str());
			if (COMMENTS_ON) EV << "Printing message name: " << buf << endl;

			if (dynamic_cast<cMessage*>(timeOutSelfMsgs[i]) != NULL) timeOutSelfMsgs[i]->setName(buf);
			if (timeOutSelfMsgs[i] == NULL) timeOutSelfMsgs[i] = new cMessage(buf);

			if (COMMENTS_ON) EV << "Creating new TDMA_TIME_OUT_MSG for " << timeOutSelfMsgs[i]->getName() << "." << endl;
			if (COMMENTS_ON) EV << "Scheduling TDMA_TIME_OUT to " << simTime() + TDMA_TIME_OUT << "s." << endl;
			scheduleAt(simTime() + TDMA_TIME_OUT, timeOutSelfMsgs[i]);
		}
	}
}

bool PlcNet::compareMACAddresses (MACAddress *a, MACAddress *b)
{
	if (COMMENTS_ON) EV << "Comparing the addresses " << a->str() << " and " << b->str() << " ... " << endl;
	if (a == b)
	{
	    return true;
	}
	return false;
//	for (int i = 0; i < MAC_ADDRESS_BYTES; i++) // TODO: Changed by Ramon
//	{
//		if (a->getAddressByte(i) != b->getAddressByte(i)) return false;
//	}
//	return true;
}

void PlcNet::copyMACAddress (MACAddress *a, MACAddress *b)
{
	if (COMMENTS_ON) EV << "Copying the address " << b->str() << " to a." << endl;
//	for (int i = 0; i < MAC_ADDRESS_BYTES; i++) a->setAddressByte(i, b->getAddressByte(i)); // TODO Changed by Ramon
	*a = *b;
}

void PlcNet::eraseMACAddressFromListOfActiveConnections(int i)
{
	if (COMMENTS_ON) EV << "Removing connection " << i << " from list of active connections ..." << endl;
	listOfActiveConnections[i] = NULL;
	if (listOfActiveConnections[i] == NULL)
	{
		if (COMMENTS_ON) EV << "Erasing successfull." << endl;
	}
}

void PlcNet::eraseCMessageFromTimeOutSelfMsgs(int i)
{
	functionCalls++;
	if (COMMENTS_ON) EV << "Removing TimeOutMsg " << i << " from list ..." << endl;

	if (timeOutSelfMsgs[i] != NULL)
	{
		if (COMMENTS_ON) EV << "timeOutSelfMsgs[" << i << "] is not NULL" << endl;

		if (timeOutSelfMsgs[i]->isScheduled())
		{
			if (COMMENTS_ON) EV << "timeOutSelfMsgs[" << i << "] is scheduled. (" <<
									timeOutSelfMsgs[i]->getFullName() << ")"<< endl;
			cancelEvent (timeOutSelfMsgs[i]);
			// Reset name entry of message
			timeOutSelfMsgs[i]->setName("00-00-00-00-00-00");
			scheduledErasedTimeOutMsgs++;
		}
		else
		{
			if (COMMENTS_ON) EV << "timeOutSelfMsgs[" << i << "] is NOT scheduled. (" <<
									timeOutSelfMsgs[i]->getFullName() << ")"<< endl;
			if (dynamic_cast<cMessage*>(timeOutSelfMsgs[i]) != NULL)
			{
				// Reset name entry of message
				timeOutSelfMsgs[i]->setName("00-00-00-00-00-00");
				unscheduledErasedTimeOutMsgs++;
			}
		}
	}
	// timeOutSelfMsgs[i] = NULL;
	if (strcmp(timeOutSelfMsgs[i]->getName(), "00-00-00-00-00-00") == 0)
	{
		if (COMMENTS_ON) EV << "Resetting successfull." << endl;
	}
}

void PlcNet::fillTDMAManagementFieldsAtRandom()
{
	for (int i = 0; i < MAXIMUM_CLIENTS; i++)
	{
		listOfActiveConnections[i] = new MACAddress ();
		listOfActiveConnections[i]->generateAutoAddress();
	}
	for (int i = 0; i < MAXIMUM_CLIENTS; i++)
	{
		if (COMMENTS_ON) EV << "Storing " << listOfActiveConnections[i]->str() << " in slot " << i
								<< " in the list of active connections." << endl;
	}
	for (int i = 0; i < MAXIMUM_CLIENTS; i++)
	{
		timeOutSelfMsgs[i] = new cMessage ("TEST_MSG");
	}
	for (int i = 0; i < MAXIMUM_CLIENTS; i++)
	{
		if (COMMENTS_ON) EV << "Storing " << timeOutSelfMsgs[i]->getName() << " in slot " << i
									<< " in the list of time out messages." << endl;
	}
}

void PlcNet::resetTDMAManagementFields()
{
	for (int i = 0; i < MAXIMUM_CLIENTS; i++)
	{
		listOfActiveConnections[i] = NULL;
	}
	for (int i=0; i<MAXIMUM_CLIENTS; i++)
	{
		if (timeOutSelfMsgs[i] != NULL)
		{
			if (dynamic_cast<cMessage*> (timeOutSelfMsgs[i]) != NULL);
			{
				if(timeOutSelfMsgs[i]->isSelfMessage())
				{
					if(timeOutSelfMsgs[i]->isScheduled()) cancelEvent(timeOutSelfMsgs[i]);
					timeOutSelfMsgs[i]->setName("00-00-00-00-00-00");
				}
			}
			// timeOutSelfMsgs[i] = NULL;
		}
	}
    for (int i = 0; i < MAXIMUM_CLIENTS; i++)
    {
    	if (listOfActiveConnections[i] == NULL)
    	{
    		if (COMMENTS_ON) EV << "Entry no. " << i << " in listOfActiveConnections[] is empty." << endl;
    	}
    	else
    	{
    		if (COMMENTS_ON) EV << "Entry no. " << i << " in listOfActiveConnections[] is NOT empty." << endl;
    	}
    }
    for (int i = 0; i < MAXIMUM_CLIENTS; i++)
	{
		if (strcmp(timeOutSelfMsgs[i]->getName(), "00-00-00-00-00-00") == 0)
		{
			if (COMMENTS_ON) EV << "Entry no. " << i << " in timeOutSelfMsgs[] is empty." << endl;
		}
		else
		{
			if (COMMENTS_ON) EV << "Entry no. " << i << " in timeOutSelfMsgs[] is NOT empty." << endl;
		}
	}
    resetAllTDMAVariables();
}

void PlcNet::resetAllTDMAVariables()
{
	activeModem = NULL;
	numOfActiveConnections = 0;
}

void PlcNet::processRequestForMoreBandwidth(MACAddress *a)
{
	if (COMMENTS_ON) EV << "processRequestForMoreBandwidth()" << endl;
	if (listOfActiveConnectionsIsFull())
	{
		if (COMMENTS_ON) EV << "No more space for additional bandwidth - request refused!" << endl;
		return;
	}
	volatile int x = rand()%100;
	if (x > BANDWIDTH_REQUEST_RESPONSE_CHANCE)
	{
		if (COMMENTS_ON) EV << "Request for addtional bandwidth randomly refused." << endl;
		return;
	}
	MACAddress *zeros = new MACAddress("00-00-00-00-00-00");
	bool test = compareMACAddresses(a, zeros);
	if (test == true)
	{
		if (COMMENTS_ON) EV << "Address is broadcast - will not be added to list!" << endl;
		return;
	}
	if (COMMENTS_ON) EV << numOfActiveConnections << " connections are active. Adding one slot for one of them." << endl;
	int i = 0;
	while (listOfActiveConnections[i] != NULL) i++;
	if (COMMENTS_ON) EV << "Found empty connection slot in field " << i << "." << endl;
	char buf1[20];
	char *s1 = buf1;
//	for (int j=0; j<MAC_ADDRESS_BYTES; j++, s1+=3) sprintf(s1,"%2.2X-",a->getAddressByte(j));   // TODO: Changed by Ramon
//	*(s1-1)='\0';
	strcpy(s1,(a->str()).c_str());
	if (COMMENTS_ON) EV << "MAC Address is " << buf1 << "." << endl;
	listOfActiveConnections[i] = new MACAddress(buf1);
	updateNumberOfActiveConnections(); // or slots ...
}

void PlcNet::printListOfActiveConnections()
{
	for (int i=0; i<MAXIMUM_CLIENTS; i++)
	{
		if (listOfActiveConnections[i] != NULL)
		{
			if (COMMENTS_ON) EV << "listOfActiveConnections[" << i << "]: "
								<< listOfActiveConnections[i]->str() << "." << endl;
		}
		else
		{
			if (COMMENTS_ON) EV << "listOfActiveConnections[" << i << "]: "
								<< "no entry" << "." << endl;
		}
	}
}

bool PlcNet::listOfActiveConnectionsIsFull()
{
	for (int i=0; i<MAXIMUM_CLIENTS; i++)
	{
		if (listOfActiveConnections[i] == NULL) return false;
	}
	return true;
}

void PlcNet::CHECK_TDMAProcedure()
{
	current_mode = 2;
	MACAddress *a = new MACAddress("00-00-00-AA-00-AA");
	MACAddress *b = new MACAddress("00-00-00-BB-00-BB");
	MACAddress tmpAddr; // TODO: Added by Ramon
	bool MACtest = compareMACAddresses(a,b);
	if (COMMENTS_ON) EV << "compareMACAddresses(a,b) delivered " << MACtest << endl;
	MACtest = compareMACAddresses(a,a);
	if (COMMENTS_ON) EV << "compareMACAddresses(a,a) delivered " << MACtest << endl;
	copyMACAddress(a,b);
	if (COMMENTS_ON) EV << "After copying, a is also " << a->str() << "." << endl;
	if (COMMENTS_ON) EV << "----------------------------------------------------------------------" << endl;

	PlcSendRequestTDMA *thisRequest = new PlcSendRequestTDMA ("SND_REQ");
//	thisRequest->setSrc("11-00-11-00-11-00");
	MACAddress testMAC;
	testMAC.setAddress("11-00-11-00-11-00");
	thisRequest->setSrc(testMAC);    // TODO: Changed by Ramon
	MACAddress *pointer = new MACAddress(thisRequest->getSrc());
	char buf2[20];
	char *s2 = buf2;
//	for (int j=0; j<MAC_ADDRESS_BYTES; j++, s2+=3) sprintf(s2,"%2.2X-", pointer->getAddressByte(j));    // TODO: Changed by Ramon
//	*(s2-1)='\0';
	strcpy(s2,(pointer->str()).c_str());
	MACAddress *testMAC2 = new MACAddress(buf2);
	if (COMMENTS_ON) EV << "Copy operation result: " << testMAC2->str() << endl;

	handleSendingRequest(thisRequest);

	if (COMMENTS_ON) EV << "Checking entries in TDMA management lists ..." << endl;
	if (COMMENTS_ON) EV << "listOfActiveConnections[0] is set to: " << listOfActiveConnections[0]->str() << "." << endl;
	if (COMMENTS_ON) EV << "timeOutSelfMsgs[0] is set to: " << timeOutSelfMsgs[0]->getName() << "." << endl;

	bool test1 = listOfActiveIsNotEmpty();
	if (COMMENTS_ON) EV << "listOfActiveIsNotEmpty() delivered " << test1 << endl;
	bool test2 = inListOfActiveConnections(&testMAC);
	if (COMMENTS_ON) EV << "inListOfActiveConnections() delivered " << test2 << endl;

	if (activeModem == NULL)
	{
		if (COMMENTS_ON) EV << "Active modem is not set yet." << endl;
	}
	if (activeModem != NULL)
	{
		if (COMMENTS_ON) EV << "Active modem has MAC " << activeModem->str() << endl;
	}

	MACAddress *c = new MACAddress("00-00-00-CC-00-CC");
	MACAddress *d = new MACAddress("00-00-00-DD-00-DD");
	MACAddress *e = new MACAddress("00-00-00-EE-00-EE");

	processRequestForMoreBandwidth(c);
	processRequestForMoreBandwidth(d);
	processRequestForMoreBandwidth(e);
	processRequestForMoreBandwidth(c);
	for (int i=0; i<MAXIMUM_CLIENTS; i++)
	{
		processRequestForMoreBandwidth(e);
	}
	removeFromListOfActiveConnections(c);
	printListOfActiveConnections();
	removeFromListOfActiveConnections(d);
	printListOfActiveConnections();
	removeFromListOfActiveConnections(e);
	printListOfActiveConnections();

	resetTDMAManagementFields();
	if (COMMENTS_ON) EV << "----------------------------------------------------------------------" << endl;
	if (COMMENTS_ON) EV << "Checking handOnTokenToNextModem() ..." << endl;
	if (COMMENTS_ON) EV << "List is empty, and no active modem ist set yet." << endl;
	handOnTokenToNextModem();
	if (COMMENTS_ON) EV << "List is NOT empty, and no active modem is set yet." << endl;
	listOfActiveConnections[3] = new MACAddress ("22-22-22-22-22-22");
	handOnTokenToNextModem();
	if (COMMENTS_ON) EV << "List is NOT empty, and active modem is set." << endl;
	activeModem = new MACAddress("22-22-22-22-22-22");
	handOnTokenToNextModem();
	if (COMMENTS_ON) EV << "List is NOT empty, and active modem is set + another connection in the list." << endl;
	listOfActiveConnections[18] = new MACAddress ("11-22-11-22-11-22");
	handOnTokenToNextModem();
	PASS_TOKEN_TO_NEXT_IN_LIST = NULL;
	handOnTokenToNextModem();
	listOfActiveConnections[3] = NULL;
	listOfActiveConnections[18] = NULL;
	activeModem = NULL;
	if (COMMENTS_ON) EV << "----------------------------------------------------------------------" << endl;

	scheduleTDMATraffic ();
	if (COMMENTS_ON) EV << "Token message " << PASS_TOKEN_TO_NEXT_IN_LIST->getName() << " is scheduled." << endl;
	if (COMMENTS_ON) EV << "TDMA message " << TDMA_Cycle->getName() << " is scheduled." << endl;
    if (PASS_TOKEN_TO_NEXT_IN_LIST->isScheduled())
	{
		if (COMMENTS_ON) EV << "PASS_TOKEN_TO_NEXT_IN_LIST is currently scheduled - cancelling ... " << endl;
		cancelEvent (PASS_TOKEN_TO_NEXT_IN_LIST);
	}
	if (!PASS_TOKEN_TO_NEXT_IN_LIST->isScheduled())
	{
		if (COMMENTS_ON) EV << "PASS_TOKEN_TO_NEXT_IN_LIST is cancelled an reinitialized." << endl;
	}
	PASS_TOKEN_TO_NEXT_IN_LIST = new cMessage ("PASS_TOKEN_TO_NEXT_IN_LIST");
    if (TDMA_Cycle->isScheduled())
	{
    	if (COMMENTS_ON) EV << "TDMA_Cycle is currently scheduled - cancelling ... " << endl;
    	cancelEvent (TDMA_Cycle);
	}
	if (!TDMA_Cycle->isScheduled())
	{
		if (COMMENTS_ON) EV << "TDMA_Cycle is cancelled an reinitialized." << endl;
	}
	TDMA_Cycle = new cMessage ("TDMA_Cycle");
	if (COMMENTS_ON) EV << "Token message " << PASS_TOKEN_TO_NEXT_IN_LIST->getName() << " is initialized." << endl;
	if (COMMENTS_ON) EV << "TDMA message " << TDMA_Cycle->getName() << " is initialized." << endl;
	if (COMMENTS_ON) EV << "----------------------------------------------------------------------" << endl;

	removeFromListOfActiveConnections(&testMAC);

	bool test3 = listOfActiveIsNotEmpty();
	if (COMMENTS_ON) EV << "listOfActiveIsNotEmpty() delivered " << test3 << endl;
	bool test4 = inListOfActiveConnections(&testMAC);
	if (COMMENTS_ON) EV << "inListOfActiveConnections() delivered " << test4 << endl;
	scheduleTDMATraffic ();
	if (PASS_TOKEN_TO_NEXT_IN_LIST->isScheduled()) cancelEvent (PASS_TOKEN_TO_NEXT_IN_LIST);
	if (TDMA_Cycle->isScheduled()) cancelEvent (TDMA_Cycle);

	resetTDMAManagementFields();

	if (COMMENTS_ON) EV << "----------------------------------------------------------------------" << endl;
	cMessage *next1 = new cMessage ("PASS_TOKEN_TO_NEXT_IN_LIST");
	cMessage *tdma1 = new cMessage ("TDMA_Cycle");
	listOfActiveConnections[3] = new MACAddress ("22-22-22-22-22-22");
	cMessage *tout1 = new cMessage ("22-22-22-22-22-22");
	PlcSendRequestTDMA *sdrq1 = new PlcSendRequestTDMA ("SND_REQ");
//	sdrq1->setSrc("33-33-33-33-33-33"); // TODO: Changed by Ramon
	tmpAddr.setAddress("33-33-33-33-33-33");
	sdrq1->setSrc(tmpAddr);
	PlcFrame *plcf = new PlcFrame ("A_FRAME");
//	plcf->setSrc("33-33-33-33-33-33");  // TODO: Changed by Ramon
	tmpAddr.setAddress("33-33-33-33-33-33");
	plcf->setSrc(tmpAddr);

	current_mode = 1;

	if (COMMENTS_ON) EV << "Checking Pass-token-to-next-in-list in mode 1" << endl;
	handleTDMAmessages(next1);
	if (COMMENTS_ON) EV << "Checking TDMA_Cycle in mode 1" << endl;
	handleTDMAmessages(tdma1);
	if (COMMENTS_ON) EV << "Checking time out in mode 1" << endl;
	handleTDMAmessages(tout1);
	if (COMMENTS_ON) EV << "Checking sending request in mode 1" << endl;
	handleTDMAmessages(sdrq1);

	cMessage *next2 = new cMessage ("PASS_TOKEN_TO_NEXT_IN_LIST");
	cMessage *tdma2 = new cMessage ("TDMA_Cycle");
	listOfActiveConnections[3] = new MACAddress ("22-22-22-22-22-22");
	cMessage *tout2 = new cMessage ("22-22-22-22-22-22");
	PlcSendRequestTDMA *sdrq2 = new PlcSendRequestTDMA ("SND_REQ");
//	sdrq2->setSrc("33-33-33-33-33-33"); // TODO: Changed by Ramon
	tmpAddr.setAddress("33-33-33-33-33-33");
	sdrq2->setSrc(tmpAddr);
	updateNumberOfActiveConnections();

	current_mode = 2;

	if (COMMENTS_ON) EV << "Checking Pass-token-to-next-in-list in mode 2" << endl;
    handleTDMAmessages(next2);
	if (COMMENTS_ON) EV << "Checking TDMA_Cycle in mode 2" << endl;
	handleTDMAmessages(tdma2);
	if (COMMENTS_ON) EV << "Checking time out in mode 2" << endl;
	handleTDMAmessages(tout2);
	if (COMMENTS_ON) EV << "Checking sending request in mode 2" << endl;
	handleTDMAmessages(sdrq2);
	if (COMMENTS_ON) EV << "----------------------------------------------------------------------" << endl;

	for (int i=0; i<MAXIMUM_CLIENTS; i++) listOfActiveConnections[i] = NULL;
	updateNumberOfActiveConnections();
//	plcf->setSrc("33-33-33-33-33-33");  // TODO: Changed by Ramon
	tmpAddr.setAddress("33-33-33-33-33-33");
	plcf->setSrc(tmpAddr);
	if (COMMENTS_ON) EV << "(1) Checking data frame in mode 2" << endl;
	handleTDMAmessages(plcf);
	if (COMMENTS_ON) EV << "(2) Checking data frame in mode 2" << endl;
	handleTDMAmessages(plcf);
	listOfActiveConnections[11] = new MACAddress ("44-44-44-44-44-44");
	updateNumberOfActiveConnections();
//	plcf->setSrc("44-44-44-44-44-44");  // TODO: Changed by Ramon
	tmpAddr.setAddress("44-44-44-44-44-44");
	plcf->setSrc(tmpAddr);
	if (COMMENTS_ON) EV << "(3) Checking data frame in mode 2" << endl;
	handleTDMAmessages(plcf);
	for (int i=0; i<MAXIMUM_CLIENTS; i++) listOfActiveConnections[i] = NULL;
	updateNumberOfActiveConnections();
	for (int i=0; i<MAXIMUM_CLIENTS; i++)
	{
		if (timeOutSelfMsgs[i] != NULL)
		{
			if (timeOutSelfMsgs[i]->isScheduled()) cancelEvent (timeOutSelfMsgs[i]);
			if (!timeOutSelfMsgs[i]->isScheduled())
			{
				if (COMMENTS_ON) EV << "Time out message " << i << " is not longer scheduled." << endl;
			}
			timeOutSelfMsgs[i] = NULL;
		}
	}
	if (COMMENTS_ON) EV << "----------------------------------------------------------------------" << endl;

	resetTDMAManagementFields();
	current_mode = 1;
	if (COMMENTS_ON) EV << "Checking data frame in mode 1" << endl;
	handleTDMAmessages(plcf);
	cancelEvent (PASS_TOKEN_TO_NEXT_IN_LIST);
	cancelEvent (TDMA_Cycle);

	if (COMMENTS_ON) EV << "----------------------------------------------------------------------" << endl;

	if(TDMA_Cycle->isScheduled()) cancelEvent (TDMA_Cycle);
	if(TDMA_Cycle == NULL) TDMA_Cycle = new cMessage ("TDMA_Cycle");
	calculateTDMAparameters ();
	TDMA_time = simTime() + TDMA_PERIOD;
	if (COMMENTS_ON) EV << "TDMA marker is set to " << TDMA_time << "s." << endl;
	scheduleAt(simTime() + TDMA_PERIOD, TDMA_Cycle);
	if (COMMENTS_ON) EV << "TDMA event is set to " << simTime() + TDMA_PERIOD << "s." << endl;
	scheduleTDMATraffic ();
	cancelEvent (TDMA_Cycle);
	TDMA_Cycle = NULL;
	scheduleTDMATraffic ();
	cancelEvent (PASS_TOKEN_TO_NEXT_IN_LIST);
	cancelEvent (TDMA_Cycle);
	if (COMMENTS_ON) EV << "----------------------------------------------------------------------" << endl;

	cMessage *next3 = new cMessage ("PASS_TOKEN_TO_NEXT_IN_LIST");
	cMessage *tdma3 = new cMessage ("TDMA_Cycle");
	listOfActiveConnections[3] = new MACAddress ("22-22-22-22-22-22");
	cMessage *tout3 = new cMessage ("22-22-22-22-22-22");
	PlcSendRequestTDMA *sdrq3 = new PlcSendRequestTDMA ("SND_REQ");
//	sdrq2->setSrc("33-33-33-33-33-33"); // TODO: Changed by Ramon
	tmpAddr.setAddress("33-33-33-33-33-33");
	sdrq2->setSrc(tmpAddr);
	updateNumberOfActiveConnections();

	current_mode = 2;
	if (COMMENTS_ON) EV << "Checking handleMessages() in TDMA mode ..." << endl;
	if (COMMENTS_ON) EV << "Checking Pass-token-to-next-in-list in mode 2" << endl;
	handleMessage(next3);
	if (COMMENTS_ON) EV << "Checking TDMA_Cycle in mode 2" << endl;
	handleMessage(tdma3);
	if (COMMENTS_ON) EV << "Checking time out in mode 2" << endl;
	handleMessage(tout3);
	if (COMMENTS_ON) EV << "Checking sending request in mode 2" << endl;
	handleMessage(sdrq3);

	cMessage *next4 = new cMessage ("PASS_TOKEN_TO_NEXT_IN_LIST");
	cMessage *tdma4 = new cMessage ("TDMA_Cycle");
	listOfActiveConnections[3] = new MACAddress ("22-22-22-22-22-22");
	cMessage *tout4 = new cMessage ("22-22-22-22-22-22");
	PlcSendRequestTDMA *sdrq4 = new PlcSendRequestTDMA ("SND_REQ");
//	sdrq2->setSrc("33-33-33-33-33-33"); // TODO: Changed by Ramon
//	MACAddress tmpAddr;
	tmpAddr.setAddress("33-33-33-33-33-33");
	sdrq2->setSrc(tmpAddr);
	updateNumberOfActiveConnections();

	current_mode = 1;
	if (COMMENTS_ON) EV << "Checking handleMessages() in CSMA mode ..." << endl;
	if (COMMENTS_ON) EV << "Checking Pass-token-to-next-in-list in mode 2" << endl;
	handleMessage(next4);
	if (COMMENTS_ON) EV << "Checking TDMA_Cycle in mode 2" << endl;
	handleMessage(tdma4);
	if (COMMENTS_ON) EV << "Checking time out in mode 2" << endl;
	handleMessage(tout4);
	if (COMMENTS_ON) EV << "Checking sending request in mode 2" << endl;
	handleMessage(sdrq4);

	if (COMMENTS_ON) EV << "----------------------------------------------------------------------" << endl;
	resetTDMAManagementFields();
	cancelEvent (PASS_TOKEN_TO_NEXT_IN_LIST);
	cancelEvent (TDMA_Cycle);
}

/*
	Die "Vendor-Awareness" lag zunaechst in den Modulen "PlcMAC" - dies kann jedoch die
	Wirklichkeit nicht hinreichend abbilden. Da es aber nur schwer moeglich ist, die
	Kommunuikation zwischen verschiedenen CCo's zur Aufteilung der Ressourcen zu
	implementieren, wurde ein anderer Weg gewaehlt.
	Das Modul "PlcNet" verwaltet die Menge aktuell aktiver (Sub-)Netze verschiedener
	Modemtypen, und senkt die in der ChannelUpdate-Message vergebene Bandbreite im
	CSMA-Modus um einen "Verhandlungsverlust". Im TDMA-Modus wird das Medium "perfekt"
	aufgeteilt, weshalb dieser Mechanismus hier nicht greift.
*/

void PlcNet::handleISPProcedure(cMessage *msg)
{
	if (COMMENTS_ON) EV << "handleISPProcedure()" << endl;
	if (COMMENTS_ON) EV << "Message name is " << msg->getName() << "." << endl;
	if (dynamic_cast<PlcFrame*>(msg)!=NULL)
	{
		if (COMMENTS_ON) EV << "Message is a plc data frame." << endl;
		PlcFrame *thisFrame = check_and_cast<PlcFrame *>(msg);
		if (COMMENTS_ON) EV << "Processing its vendor ID (" <<  thisFrame->getVendorID() << ") ..." << endl;
		processVendorID(thisFrame->getVendorID());
		if (COMMENTS_ON) EV << "Processing politeness flag ... " << endl;
		vendorPolitenessList[thisFrame->getVendorID()] = thisFrame->getIsPolite();
		if (COMMENTS_ON) EV << "Slot " << thisFrame->getVendorID() << " was filled with "
		                    << thisFrame->getIsPolite() << "." << endl;
		return;
	}
	bool isISPNumber = false;
	if (strcmp(msg->getName(), "0") == 0 ||
		strcmp(msg->getName(), "1") == 0 ||
		strcmp(msg->getName(), "2") == 0 ||
		strcmp(msg->getName(), "3") == 0) isISPNumber = true;
	if (COMMENTS_ON) EV << "The variable isISPNumber is set to " << isISPNumber << "." << endl;
	if (msg->isSelfMessage() || isISPNumber)
	{
		if (COMMENTS_ON) EV << "Message is an ISP time out for vendor ID "
		                    << msg->getName() << ". Removing ..." << endl;
		if (strcmp(msg->getName(), "0") == 0) removeVendorID(0);
		if (strcmp(msg->getName(), "1") == 0) removeVendorID(1);
		if (strcmp(msg->getName(), "2") == 0) removeVendorID(2);
		if (strcmp(msg->getName(), "3") == 0) removeVendorID(3);
		return;
	}
	else
	{
		if (COMMENTS_ON) EV << "Unknown message type ... dropping." << endl;
		return;
	}
}

void PlcNet::processVendorID(int x)
{
	/*
		 Fuege die neue VendorID in die Liste ein, berechne die "Reibungsverluste" neu und
		 setze einen TimeOut fuer den Verbleib der ID in der Liste.
		 Ist die ID schon in der Liste, loesche den alten TimeOut und setze ihn neu.
	*/
	if (COMMENTS_ON) EV << "processVendorID()" << endl;
	if (COMMENTS_ON) EV << "VendorID = " << x << endl;

	// TODO: MARKER =======================================================================================
	/*
	bool check_ISP_maptable = true;
	for (int i=0; i<4; i++)
	{
		if(ISP_maptable[i][0] != i || ISP_maptable[i][1] < 0 || ISP_maptable[i][1] > 100
		                           || ISP_maptable[i][2] < 0 || ISP_maptable[i][1] > 1)
	    {
		    if (COMMENTS_ON) EV << "ISP_maptable is corrupt - reset!" << endl;
		    for(int i=0; i<4; i++)
			{
				ISP_maptable[i][0] = i;
				ISP_maptable[i][1] = -1;
				ISP_maptable[i][2] = 0;
			}
		}
	}

	int vendorid = x;
	if (COMMENTS_ON) EV << "VendorID = " << vendorid << endl;
	int clear_space = -1;
	bool not_yet_in_list = true;
	if (clear_space == -1) // If not, is the vendor already listed?
	{
		if (COMMENTS_ON) EV << "Is the vendor already listed?" << endl;
		for (int i=0; i<4; i++)
		{
			if (ISP_maptable[i][1] == vendorid)
			{
				clear_space = i;
				not_yet_in_list = false;
				if (COMMENTS_ON) EV << "Vendor is listed in slot " << i << "." << endl;
				break;
			}

		}
	}
	if (clear_space == -1) // If the vendor is not yet listed ...
	{
		if (COMMENTS_ON) EV << "Vendor ID is not yet listed. Searching for a free slot ..." << endl;
		for (int i=0; i<4; i++) // Is there a free entry for that vendor?
		{
			if(ISP_maptable[i][1] == -1)
			{
				if (COMMENTS_ON) EV << "Found a free space in slot " << i << "." << endl;
				clear_space = i;
				not_yet_in_list = false;
				break;
			}
		}
		if(not_yet_in_list)
		{
			if (COMMENTS_ON) EV << "ERROR - ISP can only handle up to 4 systems!" << endl;
		}
	}
	if (clear_space != -1 && clear_space < 4)
	{
		ISP_maptable[clear_space][1] = vendorid;
		ISP_maptable[clear_space][2] = 1;
		x = ISP_maptable[clear_space][0];           // one of 0...3;
	}
	for(int i=0; i<4; i++)
	{
		if (COMMENTS_ON) EV << "ISP_maptable [" << i << "][0] = " << ISP_maptable[i][0] <<
							   " ISP_maptable [" << i << "][1] = " << ISP_maptable[i][1] <<
							   " ISP_maptable [" << i << "][2] = " << ISP_maptable[i][2] << endl;
	}

	x = ISP_maptable[clear_space][0];
	if (COMMENTS_ON) EV << "x is now set to " << x << "." << endl;
	*/
	// ===============================================================================================

	if (listOfActiveVendors[x] == 0) listOfActiveVendors[x] = 1;

	switch (x)
	{
		case 0:
		{
			if (timeOutMsgsForISP_0 == NULL)  timeOutMsgsForISP_0 = new cMessage ("0");
			if (timeOutMsgsForISP_0->isScheduled()) cancelEvent (timeOutMsgsForISP_0);
			scheduleAt(simTime() + ISP_PERIOD, timeOutMsgsForISP_0);
			break;
		}
		case 1:
		{
			if (timeOutMsgsForISP_1 == NULL)  timeOutMsgsForISP_1 = new cMessage ("1");
			if (timeOutMsgsForISP_1->isScheduled()) cancelEvent (timeOutMsgsForISP_1);
			scheduleAt(simTime() + ISP_PERIOD, timeOutMsgsForISP_1);
			break;
		}
		case 2:
		{
			if (timeOutMsgsForISP_2 == NULL)  timeOutMsgsForISP_2 = new cMessage ("2");
			if (timeOutMsgsForISP_2->isScheduled()) cancelEvent (timeOutMsgsForISP_2);
			scheduleAt(simTime() + ISP_PERIOD, timeOutMsgsForISP_2);
			break;
		}
		case 3:
		{
			if (timeOutMsgsForISP_3 == NULL)  timeOutMsgsForISP_3 = new cMessage ("3");
			if (timeOutMsgsForISP_3->isScheduled()) cancelEvent (timeOutMsgsForISP_3);
			scheduleAt(simTime() + ISP_PERIOD, timeOutMsgsForISP_3);
			break;
		}
		default:
		{
			if (COMMENTS_ON) EV << "Somethings gone terribly wrong ..." << endl;
		}
	}
	calculateISPMalus();
}

void PlcNet::removeVendorID(int x)
{
	/*
		 Loesche eine ID von der Liste.
	*/
	if (COMMENTS_ON) EV << "removeVendorID()" << endl;
	if (x >= 0 && x < 4)
	{
		listOfActiveVendors[x] = 0;
		vendorPolitenessList[x] = true;
		ISP_maptable[x][0] = x;
		ISP_maptable[x][1] = -1;
		ISP_maptable[x][2] = 0;
	}
	else
	{
		if (COMMENTS_ON) EV << "WARNING - Value is out of range!" << endl;
	}
	calculateISPMalus();
}

void PlcNet::calculateISPMalus()
{
	if (COMMENTS_ON) EV << "calculateISPMalus()" << endl;
	// Check, how many systems are active ...
	int counter = 0;
	int counter2 = 0;
	for (int i=0; i<4; i++)
	{
		if (listOfActiveVendors[i] == 1)
		{
			if (COMMENTS_ON) EV << "Slot " << i << " was found filled." << endl;
			counter = counter+1;
		}
		if (listOfActiveVendors[i] == 0)
		{
			if (COMMENTS_ON) EV << "Slot " << i << " was found empty." << endl;
		}
		if (COMMENTS_ON) EV << "Counter (list of vendors) is at " << counter << endl;
	}
	for (int i=0; i<4; i++)
	{
		if(vendorPolitenessList[i] == true)
		{
			if (COMMENTS_ON) EV << "Vendor " << i << " is polite." << endl;
		}
		if(vendorPolitenessList[i] == false)
		{
			if (COMMENTS_ON) EV << "Vendor " << i << " is NOT polite" << endl;
			counter2 = counter2+1;
		}
		if (COMMENTS_ON) EV << "Counter (list of politeness) is at " << counter2 << endl;
	}
	if(counter2 > 0) atLeastOneNotPoliteVendorIsActive = true;
	numberOfActiveNotPoliteVendors = counter2;

	double vendor_malus_unpoliteness_active = VENDOR_MALUS_UNPOLITENESS_ACTIVE;
	double additionalMalus = (vendor_malus_unpoliteness_active * numberOfActiveNotPoliteVendors) / 100;
	// Example: 2 unpolite vendors active -> 100 + 10 * 2 = 120 -> 120 / 100 = 1.2 (20 % additional malus)
	if (counter == 1 && counter2 == 0) additionalMalus = 0; // If the system is alone ...
	if (COMMENTS_ON) EV << "Additional malus through unpolite systems is "
	                    << (additionalMalus) * 100 << "%" << endl;
	if (COMMENTS_ON) EV << "Variable is set to " << additionalMalus << "." << endl;

	double vendorMalus2Networks = VENDOR_MALUS_2_NETWORKS;
	double vendorMalus3Networks = VENDOR_MALUS_3_NETWORKS;
	double vendorMalus4Networks = VENDOR_MALUS_4_NETWORKS;
	switch (counter)
	{
		case 0 :
		{
			currentMalus = 1;
			if (COMMENTS_ON) EV << "Variable for malus is at " << currentMalus << "." << endl;
			break;
		}
		case 1 :
		{
			currentMalus = 1;
			if (COMMENTS_ON) EV << "Variable for malus is at " << currentMalus << "." << endl;
			break;
		}
		case 2 :
		{
			currentMalus = 1 - ((vendorMalus2Networks + additionalMalus*100) / 100);
			if (COMMENTS_ON) EV << "Variable for malus is at " << currentMalus << "." << endl;
			break;
		}
		case 3 :
		{
			currentMalus = 1 - ((vendorMalus3Networks + additionalMalus*100) / 100);
			if (COMMENTS_ON) EV << "Variable for malus is at " << currentMalus << "." << endl;
			break;
		}
		case 4 :
		{
			currentMalus = 1 - ((vendorMalus4Networks + additionalMalus*100) / 100);
			if (COMMENTS_ON) EV << "Variable for malus is at " << currentMalus << "." << endl;
			break;
		}
	}
	if (COMMENTS_ON) EV << "Current malus because of system interoperation is "
						<< (currentMalus-1) * 100 << "%." << endl;
}

void PlcNet::resetAllISPVariables()
{
	if (COMMENTS_ON) EV << "resetAllISPVariables()" << endl;
	listOfActiveVendors[0] = 0;
	listOfActiveVendors[1] = 0;
	listOfActiveVendors[2] = 0;
	listOfActiveVendors[3] = 0;
	if (timeOutMsgsForISP_0 == NULL)  timeOutMsgsForISP_3 = new cMessage ("0");
	if (timeOutMsgsForISP_0->isScheduled()) cancelEvent (timeOutMsgsForISP_0);
	if (timeOutMsgsForISP_1 == NULL)  timeOutMsgsForISP_3 = new cMessage ("1");
    if (timeOutMsgsForISP_1->isScheduled()) cancelEvent (timeOutMsgsForISP_1);
    if (timeOutMsgsForISP_2 == NULL)  timeOutMsgsForISP_3 = new cMessage ("2");
	if (timeOutMsgsForISP_2->isScheduled()) cancelEvent (timeOutMsgsForISP_2);
	if (timeOutMsgsForISP_3 == NULL)  timeOutMsgsForISP_3 = new cMessage ("3");
	if (timeOutMsgsForISP_3->isScheduled()) cancelEvent (timeOutMsgsForISP_3);
	vendorPolitenessList[0] = true;
	vendorPolitenessList[1] = true;
	vendorPolitenessList[2] = true;
	vendorPolitenessList[3] = true;
	for(int i=0; i<4; i++)
	{
		ISP_maptable[i][0] = i;
		ISP_maptable[i][1] = -1;
		ISP_maptable[i][2] = 0;
	}
	atLeastOneNotPoliteVendorIsActive = false;
	numberOfActiveNotPoliteVendors = 0;
	currentMalus = 1;
}

void PlcNet::printISPSystemList()
{
	for(int i=0; i<4; i++)
	{
		if (COMMENTS_ON) EV << "listOfActiveVendors[" << i << "] = " << listOfActiveVendors[i] << endl;
	}
	for(int i=0; i<4; i++)
	{
		if (COMMENTS_ON) EV << "vendorPolitenessList[" << i << "] = " << vendorPolitenessList[i] << endl;
	}
}

void PlcNet::checkISPProcedure()
{
	listOfActiveVendors[0] = 0;
	listOfActiveVendors[1] = 1;
	listOfActiveVendors[2] = 1;
	listOfActiveVendors[3] = 1;
	vendorPolitenessList[0] = true;
	vendorPolitenessList[1] = true;
	vendorPolitenessList[2] = true;
	vendorPolitenessList[3] = true;
	calculateISPMalus();

	PlcFrame *testFrame1 = new PlcFrame("TEST1");
	testFrame1->setVendorID(1);
	testFrame1->setIsPolite(true);
	cMessage *testMsg1 = check_and_cast<cMessage *>(testFrame1);
	handleISPProcedure(testMsg1);
	PlcFrame *testFrame2 = new PlcFrame("TEST2");
	testFrame2->setVendorID(2);
	testFrame1->setIsPolite(true);
	cMessage *testMsg2 = check_and_cast<cMessage *>(testFrame2);
	handleISPProcedure(testMsg2);
	PlcFrame *testFrame3 = new PlcFrame("TEST3");
	testFrame3->setVendorID(7);
	testFrame1->setIsPolite(false);
	cMessage *testMsg3 = check_and_cast<cMessage *>(testFrame3);
	handleISPProcedure(testMsg3);
	cMessage *testTimeOut1 = new cMessage ("1");
	handleISPProcedure(testTimeOut1);
	cMessage *testTimeOut2 = new cMessage ("2");
	handleISPProcedure(testTimeOut2);
	cMessage *testTimeOut3 = new cMessage ("3");
	handleISPProcedure(testTimeOut3);
	resetAllISPVariables();
}

void PlcNet::distributeTDMAToken()
{
	// send out token on current tab
	Token *token = new Token("TDMATOKEN");
	token->setToken(nextTabTDMA->getToken());
	if (COMMENTS_ON) EV << "Sending out token at tap point " << current_tab << "." << endl;
	if (COMMENTS_ON) EV << "Token has adress " << token->getToken().str() << "." << endl;
	// Set its size to minimum plc frame size
	token->setByteLength(162);
	token->setVendor_ID(vendorID);
	token->setType(type);
	send(token, "plcg$o", current_tab);
	if(current_tab < taps)
	{
		if (COMMENTS_ON) EV << "End of bus not reached ..." << endl;
		// Increase current_tab for next repetition
		current_tab = current_tab+1;
		if (COMMENTS_ON) EV << "Scheduling token for tap point " << current_tab << "." << endl;
		if (COMMENTS_ON) EV << "It will be sent out at t=" << simTime()+tap[current_tab].propagationDelay[UPSTREAM]
		                    << "." << endl;
		// Schedule next tab
		if(nextTabTDMA->isScheduled()) cancelEvent(nextTabTDMA);
		scheduleAt(simTime()+tap[current_tab].propagationDelay[UPSTREAM], nextTabTDMA);
	}
    if(current_tab == taps)
    {
    	if (COMMENTS_ON) EV << "End of bus reached ..." << endl;
    	// Reset variables for next run
    	current_tab = 0;
//    	nextTabTDMA->setToken("00-00-00-00-00-00"); // TODO: Changed by Ramon
    	MACAddress tmpAddr;
    	nextTabTDMA->setToken(tmpAddr);
    }
}

// Measure all lengths of adjacent channels, if they have a valid delay parameter.
// Remark: We're only checking output gates, because the associated input gates'
// channel should have the same length ...

void PlcNet::overwriteChannelProperties()
{
	if (COMMENTS_ON) EV << "Overwriting channel properties ..." << endl;
    double bus_positions[taps];
    double bus_delays[taps];
    for (int i=0; i<taps; i++)
	{
		cGate *myGate = NULL;
		cChannel *myChannel = NULL;
		cModule *myParent = this->getParentModule();
		if(myParent == NULL)
		{
			myGate = this->gate("plcg$o", i);
		}
		if(myParent->hasGate("plcg$o", i))
		{
			myGate = myParent->gate("plcg$o", i);
		}
		if(myParent->hasGate("PLC_side$o", i))
		{
			myGate = myParent->gate("PLC_side$o", i);
		}
		if(myGate == NULL)
		{
			if (COMMENTS_ON) EV << "myGate-pointer is directed to NULL." << endl;
			break;
		}
		if (COMMENTS_ON) EV << "myGate-pointer is directed to " << myGate->getName() << "." << endl;
		if (myGate != NULL) myChannel = myGate->getChannel();
		if (myChannel != NULL)
		{
			if (myChannel->hasPar("delay"))
			{
				int parNum = myChannel->findPar("delay");
				double delay = myChannel->par(parNum);
				if (COMMENTS_ON) EV << "and has a delay of " << delay << "s." << endl;
				if (COMMENTS_ON) EV << "The propagation speed is " << propagationSpeed
									<< " meter per second." << endl;
				double length = propagationSpeed * delay;
				if(length < 0.5) length = 0;
				if(length >= 0.5 && length < 1) length = 1;
				if (COMMENTS_ON) EV << "This indicates a channel length of "
									<< length << " meters." << endl;
				bus_positions[i] = length;
				myChannel->par(parNum) = 0;
			}
		}
	}
	for (int i=0; i<taps; i++)
	{
		if(bus_positions[i] < 0.5) bus_positions[i] = 0;
		if(bus_positions[i] >= 0.5 && bus_positions[i] < 1) bus_positions[i] = 1;
		if (COMMENTS_ON) EV << "bus_positions[" << i << "] has stored the value "
							<< bus_positions[i] << "m." << endl;
	}
	for (int i=0; i<taps; i++)
	{
		bus_delays[i] = bus_positions[i]/propagationSpeed;
	}
	// Ordering the positions ...
	quickSort(bus_positions);
	recalculateBusPositions(bus_positions);
	if (COMMENTS_ON) EV << "Now in order ..." << endl;
	for (int i=0; i<taps; i++)
	{
		if (COMMENTS_ON) EV << "bus_positions[" << i << "] has stored the value "
							<< bus_positions[i] << "m." << endl;
		if (COMMENTS_ON) EV << "busPositionsCopy[" << i << "] has stored the value "
									<< busPositionsCopy[i] << "m." << endl;
	}
	if (COMMENTS_ON) EV << "Channel overwrite is enabled. Recalculating bus taps ..." <<endl;
	int numPos = taps;
	int i;
	double distance = numPos>=2 ? bus_positions[numPos-1]-bus_positions[numPos-2] : 5;
	for (i=0; i<taps; i++)
	{
		tap[i].id = i;
		tap[i].position = i<numPos ? bus_positions[i] : i==0 ? 5 : tap[i-1].position+distance;
	}
	// Calculate propagation of delays between tap points on the bus
	for (i=0; i<taps; i++)
	{
		// Propagation delay between adjacent tap points
		if (i == 0) {
			tap[i].propagationDelay[UPSTREAM] = 0;
			tap[i].propagationDelay[DOWNSTREAM] = (tap[i+1].position - tap[i].position)/propagationSpeed;
		}
		else if (i == taps-1) {
			tap[i].propagationDelay[UPSTREAM] = tap[i-1].propagationDelay[DOWNSTREAM];
			tap[i].propagationDelay[DOWNSTREAM] = 0;
		}
		else {
			tap[i].propagationDelay[UPSTREAM] = tap[i-1].propagationDelay[DOWNSTREAM];
			tap[i].propagationDelay[DOWNSTREAM] = (tap[i+1].position - tap[i].position)/propagationSpeed;;
		}
		if (COMMENTS_ON) EV << "tap[" << i << "]: " << tap[i].propagationDelay[UPSTREAM]*1000000000
									<< "ns. [upstream]" << endl;
		if (COMMENTS_ON) EV << "tap[" << i << "]: " << tap[i].propagationDelay[DOWNSTREAM]*1000000000
							<< "ns. [downstream]" << endl;
	}
    if (COMMENTS_ON) EV << "... overwriting completed." << endl;
}

void PlcNet::quickSort(double arr[])
{
	int smallest_value;
	int marker;
	double array[taps]; for (int i = 0; i<taps; i++) array[i] = -1;
	for (int j = 0; j<taps; j++)
	{
		smallest_value = 10000;
		for (int i = 0; i<taps; i++)
		{
			if(smallest_value > arr[i] && arr[i] != -1)
			{
				smallest_value = arr[i];
				marker = i;
			}
		}
		arr[marker] = -1;
		array[j] = smallest_value;
		if (COMMENTS_ON) EV << "Step " << j << " completed ..." << endl;
		for (int i = 0; i<taps; i++)
		{
			if (COMMENTS_ON) EV << "arr[" << i << "] = " << arr[i] <<endl;
		}
		for (int i = 0; i<taps; i++)
		{
			if (COMMENTS_ON) EV << "array[" << i << "] = " << array[i] <<endl;
		}
	}
	for (int i = 0; i<taps; i++)
	{
		arr[i] = array[i];
	}
}

void PlcNet::recalculateBusPositions(double arr[])
{
	double temp[taps];
	temp[0] = arr[0];
	for(int i=1; i<taps; i++)
	{
		if (COMMENTS_ON) EV << "array[" << i-1 << "] = " << arr[i-1] <<endl;
		if (COMMENTS_ON) EV << "array[" << i << "] = " << arr[i] <<endl;
		temp[i] = temp[i-1]+arr[i];
		if (COMMENTS_ON) EV << "array[" << i-1 << "] + array[" << i << "] = " << temp[i] <<endl;
	}
	for (int i = 0; i<taps; i++)
	{
		arr[i] = temp[i];
		busPositionsCopy[i] = arr[i];
	}
}

void PlcNet::sentStatisticalData()
{
	if (reportEnabled == false) return;
	simtime_t now = simTime();
	simtime_t interval = DATA_COLLECT_INTERVAL;
	int temp = now/interval;
	if(temp>counter)
	{
		if (COMMENTS_ON) EV << "Sending statistical data ..." << endl;
		DATA_PlcNet *newData = new DATA_PlcNet("DATA");
		newData->setTypeOfNet(type);
		newData->setPacketsLost(packetsLost);
		newData->setNumMessages(numMessages);
		sendDirect(newData,0,0,myDataCollector,"dataIn");
		counter++;
	}
}

double PlcNet::cableLengthAttenuation(int tapNum)
{
	showEntriesInBusPositionsCopy(tapNum);
	if (busPositionsCopy[tapNum] < KINK_LENGTH)
	{
		if (COMMENTS_ON) EV << "No additional losses below cable lenghts of "
				            << KINK_LENGTH << "m." << endl;
		return 0;
	}
	double totalLoss = (busPositionsCopy[tapNum]-KINK_LENGTH) * LOSS_PER_METER / 100;
	double length_attenuation = parMAX_PLC_DATARATE * totalLoss;
	if (COMMENTS_ON) EV << "This indicates a length of " << busPositionsCopy[tapNum] << "m." << endl;

	if (busPositionsCopy[tapNum] != busPositionsCopy[tapNum]) // nan check ...
	{
		if (COMMENTS_ON) EV << "Entry corrupt ... overwriting ..." << endl;
		busPositionsCopy[tapNum] = (busPositionsCopy[tapNum+1] + busPositionsCopy[tapNum-1]) / 2;
		if (COMMENTS_ON) EV << "(Corrected) This indicates a length of " << busPositionsCopy[tapNum] << "m." << endl;
		if (busPositionsCopy[tapNum] < KINK_LENGTH)
		{
			if (COMMENTS_ON) EV << "No additional losses below cable lenghts of "
								<< KINK_LENGTH << "m." << endl;
			return 0;
		}
	}

	if (COMMENTS_ON) EV << "The cable is " << busPositionsCopy[tapNum] - KINK_LENGTH << "m longer than the "
				        << "kink length" << endl;
	if (COMMENTS_ON) EV << "The loss percentage per meter is " << LOSS_PER_METER << "%." << endl;
	if (COMMENTS_ON) EV << "This means a factor of " <<  totalLoss << " for the max. datarate." << endl;
	if (COMMENTS_ON) EV << "The additional datarate loss is claculated to " << length_attenuation
						<< "Mbps." << endl;
	return length_attenuation;
}

inline void PlcNet::showEntriesInBusPositionsCopy(int tapNum)
{
	if (COMMENTS_ON) EV << "busPositionsCopy[" << tapNum << "] = " << busPositionsCopy[tapNum] << "m." << endl;
}

// -------------------------------------------------------------------------------------
