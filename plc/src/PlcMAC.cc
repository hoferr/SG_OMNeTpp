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

#include "PlcMAC.h"
#include "Ieee802Ctrl_m.h"
#include "IPassiveQueue.h"

static std::ostream& operator<< (std::ostream& out, cMessage *msg)
{
    out << "(" << msg->getClassName() << ")" << msg->getFullName();
    return out;
}

Define_Module(PlcMAC);

PlcMAC::PlcMAC()
{
    frameBeingReceived = NULL;
    endJammingMsg = endRxMsg = endBackoffMsg = NULL;
}

PlcMAC::~PlcMAC()
{
    delete frameBeingReceived;
    cancelAndDelete(endRxMsg);
    cancelAndDelete(endBackoffMsg);
    cancelAndDelete(endJammingMsg);
    cancelAndDelete(nextMsgTDMA);
    // CHANGE -------------------------------
    /*
    cancelAndDelete(endVendorAwareness);
    */
    // --------------------------------------
}

void PlcMAC::initialize()
{
    PlcMACBase::initialize();
    reportEnabled = par("reportEnabled");
    CSMA_ONLY = par("CSMA_ONLY");
   	TDMA_ONLY = par("TDMA_ONLY");
   	TDMA_PERIOD = par("TDMA_PERIOD");
   	MODE_CHANGE_TIME_TDMA = par("MODE_CHANGE_TIME_TDMA");
   	MODE_CHANGE_TIME_CSMA = par("MODE_CHANGE_TIME_CSMA");
   	ROBO_DATARATE = par("ROBO_DATARATE");

	PRIORITY_1_CHANCE = par("PRIORITY_1_CHANCE");
	PRIORITY_2_CHANCE = par("PRIORITY_2_CHANCE");
	PRIORITY_3_CHANCE = par("PRIORITY_3_CHANCE");

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

	token_just_received = true;

	CSMA_CA_MAX_ADDITIONAL_WAIT_TIME = par("CSMA_CA_MAX_ADDITIONAL_WAIT_TIME");
	CHANNEL_UPDATE_RATIO = par("CHANNEL_UPDATE_RATIO");
	CIFS = par("CIFS");
	RIFS = par("RIFS");
	PRIORITY_RESOLUTION_PERIOD = par("PRIORITY_RESOLUTION_PERIOD");
	VENDOR_AWARENESS_PERIOD = par("VENDOR_AWARENESS_PERIOD");

	PlcMACBase::JAM_SIGNAL_BYTES = par("JAM_SIGNAL_BYTES");
	PlcMACBase::MAX_PLC_FRAME = par("MAX_PLC_FRAME");
	PlcMACBase::MIN_PLC_FRAME = par("MIN_PLC_FRAME");
	PlcMACBase::PAUSE_BITTIME = par("PAUSE_BITTIME");
	PlcMACBase::PREAMBLE_BYTES = par("PREAMBLE_BYTES");
	PlcMACBase::SFD_BYTES = par("SFD_BYTES");

	PlcMACBase::CSMA_CA_MAX_ADDITIONAL_WAIT_TIME = par("CSMA_CA_MAX_ADDITIONAL_WAIT_TIME");
	PlcMACBase::CIFS = par("CIFS");
	PlcMACBase::RIFS = par("RIFS");
	PlcMACBase::PRIORITY_RESOLUTION_PERIOD = par("PRIORITY_RESOLUTION_PERIOD");

    counter = 0;
    numSentTDMA = 0;
    WATCH(numSentTDMA);
    numSentCSMA = 0;
    WATCH(numSentCSMA);

    typeOfModem = par("typeOfModem");

    endRxMsg = new cMessage("EndReception", ENDRECEPTION);
    endBackoffMsg = new cMessage("EndBackoff", ENDBACKOFF);
    endJammingMsg = new cMessage("EndJamming", ENDJAMMING);

    // check: datarate is forbidden with PlcMAC -- module's txrate must be used
    cGate *g = physOutGate;
    while (g)
    {
        cDatarateChannel *chan = dynamic_cast<cDatarateChannel*>(g->getChannel());
        if (chan && chan->par("datarate").doubleValue()>0)
            error("connection on gate %s has data rate set: using data rate with PlcMAC "
                  "is forbidden, module's txrate parameter must be used instead",
                  g->getFullPath().c_str());
        g = g->getNextGate();
    }

    // launch autoconfig process - this option is skipped due to the ROBO-Mode-Config.
    /*
    bool performAutoconfig = true;
    if (!disabled && connected && performAutoconfig)
    {
        startAutoconfig();
    }
    else
    {
        autoconfigInProgress = false;
        duplexMode = par("duplexEnabled");
        calculateParameters();
    }
    */

    /*
		 Alte PLC-Modems sind Halb-Duplex - neue BPLC-Modem sind Voll-Duplex
    */
    duplexMode = par("duplexEnabled");

    WATCH(autoconfigInProgress);

    // initialize state info
    backoffs = 0;
    numConcurrentTransmissions = 0;

    WATCH(backoffs);
    WATCH(numConcurrentTransmissions);

    // initialize statistics
    totalCollisionTime = 0.0;
    totalSuccessfulRxTxTime = 0.0;
    numCollisions = numBackoffs = 0;

    WATCH(numCollisions);
    WATCH(numBackoffs);

    // numCollisionsVector.setName("collisions");
    // numBackoffsVector.setName("backoffs");

    // CHANGE -------------------------------------------------------------------
    /*
       Fuer die PLC-Modems muessen noch ein paar weitere Parameter gesetzt werden, z.B.
       ob sie Smart Notching unterstuetzen, oder ob sie "hoeflich" sind.
    */

    smartNotchingEnabled = par("smartNotchingEnabled");
    max_txrate = par("max_txrate");

    // for politeness mechanisms
    vendorID = par("vendorID");
    polite = par("polite");
    /*
    OtherVendorInNetwork = 0;
    endVendorAwareness = new cMessage("EndVendorAwareness", ENDVENDORAWARENESS);
    txrateModifier = 1;
    */
    nextMsgTDMA = new cMessage("NEXT");
    current_mode = 1; // we always start in CSMA
    WATCH(current_mode);
    TDMAsendingEnabled = -1; // CSMA default value
    WATCH(TDMAsendingEnabled);

    // max_txrate = max_txrate * 1000000;
    initializeTxrate();
    PER = 0;
    calculateParameters();
    if (ev.isGUI())
	{
		char modestr[64];
		sprintf(modestr, "%dMb\n%s", int(txrate/1000000), (duplexMode ? "full duplex" : "half duplex"));
		getDisplayString().setTagArg("t",0,modestr);
		//getDisplayString().setTagArg("t",1,"r");
		sprintf(modestr, "%s: %dMb %s", getFullName(), int(txrate/1000000), (duplexMode ? "duplex" : "half duplex"));
		getParentModule()->bubble(modestr);
	}
    RXTXstateView();
    if(CHN_OVERWRITE_ENABLED) eraseChannelProperties();

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
    // --------------------------------------------------------------------------
}

void PlcMAC::initializeTxrate()
{
	// CHANGE -------------------------------------------------------------------
	/*
       Jedes Modem startet im ROBO-Mode (steht fuer "Robust OFDM"), d.h. alle Traeger
       werden nur mit BPSK betriben, um erstmal auszuloten, was der Kanal so durchlaesst.
       Die Datenrate fuer den ROBO-Mode konnte beim Modemhersteller devolo erfragt
       werden.
	*/

    txrate = /* par("txrate") */ ROBO_DATARATE * 1000000;
    if (smartNotchingEnabled)
    {
    	txrate = /* par("txrate") */ ROBO_DATARATE * 1000000 * 0.77;
    }
    else
    {
    	txrate = /* par("txrate") */ ROBO_DATARATE * 1000000;
    }
    if (COMMENTS_ON) EV << "Started in ROBO Mode with a txrate of " << txrate/1000000 << " Mbps." << endl;
    // We always begin with ROBO mode ...
    // --------------------------------------------------------------------------
}

void PlcMAC::startAutoconfig()
{
    autoconfigInProgress = true;
    lowestTxrateSuggested = 0;  // none suggested
    duplexVetoed = false;

    double initialTxrate = par("txrate");
    bool duplexEnabled = par("duplexEnabled");
    txrate = 0;
    duplexMode = duplexEnabled;
    if (!duplexEnabled || initialTxrate>0)
    {
    	if (COMMENTS_ON) EV << "Autoconfig: advertising our settings: " << initialTxrate/1000000 << "Mb, "
           << (duplexMode ? "duplex" : "half-duplex") << endl;

        PlcAutoconfig *autoconf = new PlcAutoconfig("autoconf");
        if (!duplexEnabled)
            autoconf->setHalfDuplex(true);
        if (initialTxrate>0)
            autoconf->setTxrate(initialTxrate);
        // CHANGE -----------------------------------------------------------------------------
        /*
           Ein Autkonfigurationsmodus ist nicht noetig, da das Modem im ROBO-Mode keine
           "Freiheitsgrade" hat.
        */
        // send(autoconf, physOutGate);
        delete autoconf;
        // ------------------------------------------------------------------------------------
    }
    scheduleAt(simTime()+AUTOCONFIG_PERIOD, new cMessage("EndAutoconfig",ENDAUTOCONFIG));
}

void PlcMAC::handleAutoconfigMessage(cMessage *msg)
{
	return; // we skip autoconfig, because all modems have a standard configuration (ROBO mode)
	/*
    if (!msg->isSelfMessage())
    {
        if (msg->getArrivalGate() == gate("upperLayerIn"))
        {
            // from upper layer
            EV << "Received frame from upper layer during autoconfig period: " << msg << endl;
            processFrameFromUpperLayer(check_and_cast<PlcFrame *>(msg));
        }
        else
        {
            // from network: must be autoconfig message
            EV << "Message from network during autoconfig period: " << msg << endl;
            PlcAutoconfig *autoconf = check_and_cast<PlcAutoconfig *>(msg);
            double acTxrate = autoconf->getTxrate();

            EV << "Autoconfig message: ";
            if (acTxrate>0)
                EV << acTxrate/1000000 << "Mb ";
            if (autoconf->getHalfDuplex())
                EV << "non-duplex";
            EV << "\n";

            if (acTxrate>0 && (acTxrate<lowestTxrateSuggested || lowestTxrateSuggested==0))
                lowestTxrateSuggested = acTxrate;
            if (!duplexVetoed && autoconf->getHalfDuplex())
                duplexVetoed = true;
            delete msg;
        }
    }
    else
    {
        // self-message signals end of autoconfig period
        EV << "Self-message during autoconfig period: " << msg << endl;

        delete msg;
        autoconfigInProgress = false;

        double initialTxrate = par("txrate");
        bool duplexEnabled = par("duplexEnabled");

        txrate = (initialTxrate==0 && lowestTxrateSuggested==0) ? 100000000: // 100 Mb
                 (initialTxrate==0) ? lowestTxrateSuggested :
                 (lowestTxrateSuggested==0) ? initialTxrate :
                 (lowestTxrateSuggested<initialTxrate) ? lowestTxrateSuggested : initialTxrate;
        duplexMode = (duplexEnabled && !duplexVetoed);
        calculateParameters();

        EV << "Parameters after autoconfig: txrate=" << txrate/1000000 << "Mb, " << (duplexMode ? "duplex" : "half-duplex") << endl;

        if (ev.isGUI())
        {
            char modestr[64];
            sprintf(modestr, "%dMb\n%s", int(txrate/1000000), (duplexMode ? "full duplex" : "half duplex"));
            getDisplayString().setTagArg("t",0,modestr);
            //getDisplayString().setTagArg("t",1,"r");
            sprintf(modestr, "%s: %dMb %s", getFullName(), int(txrate/1000000), (duplexMode ? "duplex" : "half duplex"));
            getParentModule()->bubble(modestr);
        }

        if (!txQueue.empty())
        {
            EV << "Autoconfig period over, starting to send frames\n";
            scheduleEndIFGPeriod();
        }
    }
    */
}

void PlcMAC::handleMessage (cMessage *msg)
{
	// CHANGE ------------------------------------------------------------------------------
	sentStatisticalData();
	if(COMMENTS_ON) EV << "Message's name is: " << msg->getName() << endl;
	if(COMMENTS_ON) EV << "Checking handleMessage response ..." << endl;
	if(COMMENTS_ON) EV << "current_mode: " << current_mode << endl;
	if(COMMENTS_ON) EV << "self message: " << msg->isSelfMessage() << endl;

	bool a = dynamic_cast<PlcAutoconfig*>(msg) != NULL;
	bool b = !strcmp(msg->getName(), "CSMA_TDMA") == 0;
	bool c = dynamic_cast<Token*>(msg) != NULL;
	bool d = !strcmp(msg->getName(), "NEXT") == 0;
	bool e = dynamic_cast<PlcChannelUpdate*>(msg) != NULL;
	bool f = dynamic_cast<PlcJam*>(msg) != NULL;
	bool g = dynamic_cast<PlcFrame*>(msg) != NULL;

	if(COMMENTS_ON) EV << "dynamic_cast<PlcAutoconfig*>(msg)!=NULL: " << a << endl;
	if(COMMENTS_ON) EV << "strcmp(msg->getName(), CSMA_TDMA) == 0: " << b << endl;
	if(COMMENTS_ON) EV << "dynamic_cast<Token*>(msg)!=NULL: " << c << endl;
	if(COMMENTS_ON) EV << "(strcmp(msg->getName(), NEXT) == 0): " << d << endl;
	if(COMMENTS_ON) EV << "dynamic_cast<PlcChannelUpdate*>(msg)!=NULL: " << e << endl;
	if(COMMENTS_ON) EV << "dynamic_cast<PlcJam*>(msg)!=NULL: " << f << endl;
	if(COMMENTS_ON) EV << "dynamic_cast<PlcFrame*>(msg)!=NULL: " << g << endl;

	autoconfigInProgress = false; // We skip any autoconfig process ...

	if(g) // if PlcFrame ...
	{
		PlcFrame *tempFrame = check_and_cast<PlcFrame *>(msg);
		if(tempFrame->getVendorID() != vendorID && tempFrame->getVendorID() != 0)
		{
			if (COMMENTS_ON) EV << "Cannot read message - incompatible sender modem." << endl;
			delete msg;
			return;
		}
	}

	// Drop foreign PlcAutoconfig messages - otherwise the simulation will crash
	if (dynamic_cast<PlcAutoconfig*>(msg)!=NULL)
	{
		if (COMMENTS_ON) EV << "Dropping PlcAutoconfig frame." << endl;
		delete msg;
		return;
	}
	// ===================================================================================================
	// Process incoming mode change messages
	if (strcmp(msg->getName(), "CSMA_TDMA") == 0)
	{
		if(COMMENTS_ON) EV << "Received a CSMA_TDMA message." << endl;
		RXTXstateView();
		transmitState = TX_IDLE_STATE;
		receiveState = RX_IDLE_STATE;
		cancelAllEvents();
		switch (current_mode)
		{
			case 1:
			{
				current_mode = 2; // Now in TDMA mode ...
				TDMAsendingEnabled = 0;
				break;
			}
			case 2:
			{
				current_mode = 1; // Now in CSMA mode ...
				TDMAsendingEnabled = -1;
				break;
			}
		}
		if(COMMENTS_ON) EV << "Mode changed to " << current_mode << " - (1) CSMA, (2) TDMA)." << endl;
		delete msg;
		if (current_mode == 1)
		{
			if (!txQueue.empty())
			{
				scheduleEndIFGPeriod();
			}
			else
			{
				if(COMMENTS_ON) EV << "Queue empty - idling ..." << endl;
			}
		}
		return;
	}
	// ===================================================================================================
	// Is it a TDMA token?
	if (dynamic_cast<Token*>(msg)!=NULL)
	{
		if(COMMENTS_ON) EV << "Received a token ..." << endl;
		Token *tok = check_and_cast<Token *>(msg);
		MACAddress *tempMAC = new MACAddress (tok->getToken());
		if(COMMENTS_ON) EV << "Got a sending token for " << tempMAC->str() << "." << endl;

		if(current_mode == 1)
		{
			if(COMMENTS_ON) EV << "Received a token in CSMA mode - dropping ..." << endl;
			delete msg;
			return;
		}

		bool thisIsMe = compareMACAddresses(tempMAC);
		if(thisIsMe == true)
		{
			if(COMMENTS_ON) EV << "This token is for me!" << endl;
			token_just_received = true;
			TDMAsendingEnabled = 1;
			if (!txQueue.empty())
			{
				if(COMMENTS_ON) EV << "Would like to send, and have a token ..." << endl;
				numSentTDMA = numSentTDMA+1;
				queueModule->requestPacket();
				manageReminder();
			}
			else
			{
				if(COMMENTS_ON) EV << "Have a token, but no sending wish  ..." << endl;
			}
		}
		else
		{
			if(COMMENTS_ON) EV << "This token is NOT for me!" << endl;
			TDMAsendingEnabled = 0;
			if (!txQueue.empty())
			{
				if(COMMENTS_ON) EV << "Would like to send, but have no token ..." << endl;
			}
			else
			{
				if(COMMENTS_ON) EV << "Have no token, and no sending wish  ..." << endl;
			}
		}
		if(COMMENTS_ON) EV << "TDMAsendingEnabled is at " << TDMAsendingEnabled << "." << endl;
		delete msg;
		return;
	}
	// ===================================================================================================
	// Verarbeiten der nextMsgTDMA
	if (strcmp(msg->getName(), "NEXT") == 0)
	{
		if(COMMENTS_ON) EV << "Received a nextMsgTDMA message." << endl;
		if(current_mode == 1)
		{
			if(COMMENTS_ON) EV << "Received nextMsgTDMA in CSMA mode. Ignoring ..." << endl;
		}
		if(current_mode == 2)
		{
			if(COMMENTS_ON) EV << "Received nextMsgTDMA in TDMA mode. Processing ..." << endl;
			queueModule->requestPacket();
			manageReminder();
		}
		return;
	}
	// ===================================================================================================
	/*
		Hier verarbeitet das simulierte Modem Aenderungen der Kanalqualitaet. Je nachdem, ob es "hoeflich"
		ist, oder Smart Notching unterstuetzt, kann sich die tatsaechlich verfuegbare Uebertragungsrate von
		der theoretischen Leistungsfaehigkeit des Uebertragungsmediums noch deutlich unterschdeiden.
		Smart Notching senkt die verfuegbare Datenrate (das nutzbare Spektrum der OFDM) um durchschnittlich
		23 % (dieser Wert stammt aus der Dissertation von Andreas Schwager (Sony)).
	*/

	// Handle incoming channel updates
	if (dynamic_cast<PlcChannelUpdate*>(msg)!=NULL)
	{
		PlcChannelUpdate *chnmsg = check_and_cast<PlcChannelUpdate *>(msg);
		if (COMMENTS_ON) EV << "Channel update received." << endl;
		if (COMMENTS_ON) EV << "Datarate: " << chnmsg->getDatarate() << " Mbps" << endl;
		if (COMMENTS_ON) EV << "PER : " << chnmsg->getPER() << "%" << endl;

		if (COMMENTS_ON) EV << "Max txrate for this modem is " << max_txrate << " Mbps." << endl;
		double current_available_datarate = chnmsg->getDatarate();
		if (current_available_datarate >= max_txrate)
		{
			current_available_datarate = max_txrate;
			if (COMMENTS_ON) EV << "Available txrate is bigger than modem capability." << endl;
		}

		/*
			Von Siemens (Alla Heidenreich) kommt zur Haeufigkeit der Kanalaktualisierung folgende Aussage:
			Die Modems aktualisieren alle 5 bis 10 Sekunden synchron ihre Kanalmessung, oder asynchron, wenn
			die aktuelle PER die gespeicherte uebertrifft.
		*/
		PER = chnmsg->getPER();

		if (smartNotchingEnabled)
		{
			txrate = current_available_datarate * 1000000 * 0.77;
			if (COMMENTS_ON) EV << "Smart notching is ON." << endl;
			if (COMMENTS_ON) EV << "TXrate of " << current_available_datarate << " Mbps is reduced by 23%." << endl;
			if (COMMENTS_ON) EV << "Available datarate is " << txrate / 1000000 << " Mbps." << endl;
		}
		else
		{
			if (COMMENTS_ON) EV << "Smart notching is OFF." << endl;
			txrate = current_available_datarate * 1000000;
		}
		/*
		if (COMMENTS_ON) EV << "TXrateModifier is at " << txrateModifier << "." << endl;
		txrate = txrate * txrateModifier;
		if (COMMENTS_ON) EV << "TXrate switched to " << txrate / 1000000 << " Bit/s." << endl;
		*/
		if (ev.isGUI())
		{
			char modestr[64];
			sprintf(modestr, "%dMb\n%s", int(txrate/1000000), (duplexMode ? "full duplex" : "half duplex"));
			getDisplayString().setTagArg("t",0,modestr);
			sprintf(modestr, "%s: %dMb %s", getFullName(), int(txrate/1000000), (duplexMode ? "duplex" : "half duplex"));
			getParentModule()->bubble(modestr);
		}
		calculateParameters();
		delete msg;
		return;
	}
	// ===================================================================================================
	// Kollisionsbehandlung
	if (dynamic_cast<PlcJam*>(msg)!=NULL)
	{
		if (COMMENTS_ON) EV << "Jam detected." << endl;
		delete msg;
		return;
	}

	// -------------------------------------------------------------------------------------------------------------
	/*
		Hier kommt die Behandlung von Nachrichten im TDMA Modus ...
	*/
	if (current_mode == 2 && !msg->isSelfMessage()) // If in TDMA mode ...
	{
		if (COMMENTS_ON) EV << "Received a normal message in TDMA mode ..." << endl;
		handleMessageTDMA(msg);
		return;
	}
	// -------------------------------------------------------------------------------------------------------------

	if (disabled)
	{
		if (COMMENTS_ON) EV << "MAC is disabled -- dropping message " << msg << "\n";
		delete msg;
		return;
	}
	if (autoconfigInProgress)
	{
		if (COMMENTS_ON) EV << "Autoconfig is in progress." << endl;
		handleAutoconfigMessage(msg);
		return;
	}
	printState();
	// some consistency check
	if (!duplexMode && transmitState==TRANSMITTING_STATE && receiveState!=RX_IDLE_STATE)
		error("Inconsistent state -- transmitting and receiving at the same time");

	// ===================================================================================================
	/*
		Hier kommt die Behandlung von Nachrichten im CSMA Modus ...
	*/

	if (!msg->isSelfMessage() && current_mode == 1)
	{
		if (COMMENTS_ON) EV << "Message is not a self message, and I'm in CSMA mode." << endl;
		// either frame from upper layer, or frame/jam signal from the network
		if (msg->getArrivalGate() == gate("upperLayerIn"))
		{
			if (COMMENTS_ON) EV << "Processing frame from upper layer." << endl;
			processFrameFromUpperLayer(check_and_cast<PlcFrame *>(msg));
			numSentCSMA = numSentCSMA + (1 / MODE_CHANGE_TIME_CSMA);
		}
		else
		{
			if (COMMENTS_ON) EV << "Processing frame from network." << endl;
			if (dynamic_cast<PlcFrame*>(msg)!=NULL)
			{
				processMsgFromNetwork(PK(msg));
			}
		}
	}
	// ===================================================================================================
	// Behandlung der Self-Messages im CSMA-Modus
	if (msg->isSelfMessage() && current_mode == 1)
	{
		if (COMMENTS_ON) EV << "Message is a self message, and I'm in CSMA mode." << endl;
		// Process different self-messages (timer signals)
		if (COMMENTS_ON) EV << "Self-message " << msg << " received\n";
		switch (msg->getKind())
		{
			case ENDIFG:
				handleEndIFGPeriod();
				break;

			case ENDTRANSMISSION:
				handleEndTxPeriod();
				break;

			case ENDRECEPTION:
				handleEndRxPeriod();
				break;

			case ENDBACKOFF:
				handleEndBackoffPeriod();
				break;

			case ENDJAMMING:
				handleEndJammingPeriod();
				break;

			case ENDPAUSE:
				handleEndPausePeriod();
				break;

			// CHANGE ---------------------------------
			/*
			case ENDVENDORAWARENESS:
				removePolitenessRules();
				break;
			*/
			// ----------------------------------------

			default:
				error("self-message with unexpected message kind %d", msg->getKind());
		}
	}
	// ===================================================================================================
	// Behandlung der Self-Messages im TDMA-Modus
	if (msg->isSelfMessage() && current_mode == 2)
	{
		if (COMMENTS_ON) EV << "Self-message for CSMA ignored in TDMA mode." << endl;
	}
	printState();

	if (ev.isGUI())
		updateDisplayString();
}


void PlcMAC::processFrameFromUpperLayer(PlcFrame *frame)
{
    PlcMACBase::processFrameFromUpperLayer(frame);

    if (!autoconfigInProgress && (duplexMode || receiveState==RX_IDLE_STATE) && transmitState==TX_IDLE_STATE)
    {
    	if (COMMENTS_ON) EV << "No incoming carrier signals detected, frame clear to send, wait IFG first\n";
        // CHANGE ----------------------------------------------------
        frame->setVendorID(vendorID);   // write vendor ID into the message - for simulation purposes only
        frame->setIsPolite(polite);     // write  politeness status in the message - for simulation purposes only

        // If the traffic is of high priority, the modem will ask the CCo for QoS traffic mode (TDMA)
        if(frame->getPriority() > 2)
        {
        	requestCCoForQoSTraffic(frame->getPriority());
        }
        // -----------------------------------------------------------
        scheduleEndIFGPeriod(frame->getPriority());
    }
}


void PlcMAC::processMsgFromNetwork(cPacket *msg)
{
	if (COMMENTS_ON) EV << "Sending msg from network to PlcMACBase" << endl;
    PlcMACBase::processMsgFromNetwork(msg);
    if (COMMENTS_ON) EV << "PlcMACBase finished processing." << endl;

    // CHANGE ----------------------------------------------------------
    if (dynamic_cast<PlcFrame*>(msg)!=NULL)
    {
    	readOutPreamble(msg);
    }
    // -----------------------------------------------------------------

    simtime_t endRxTime = simTime() + msg->getBitLength()*bitTime;

    if (!duplexMode && transmitState==TRANSMITTING_STATE)
    {
        // since we're half-duplex, receiveState must be RX_IDLE_STATE (asserted at top of handleMessage)
    	if (dynamic_cast<PlcJam*>(msg) != NULL)
    	{
            // error("Stray jam signal arrived while transmitting (usual cause is cable length exceeding allowed maximum)");
    		if (COMMENTS_ON) EV << "Stray jam signal arrived while transmitting (usual cause is cable length exceeding allowed maximum)";
    	}
    	if (COMMENTS_ON) EV << "Transmission interrupted by incoming frame, handling collision\n" << endl;
        cancelEvent(endTxMsg);

        if (COMMENTS_ON) EV << "Transmitting jam signal\n";
        sendJamSignal(); // backoff will be executed when jamming finished

        // set receive state and schedule end of reception
        receiveState = RX_COLLISION_STATE;
        numConcurrentTransmissions++;
        simtime_t endJamTime = simTime()+jamDuration;
        scheduleAt(endRxTime<endJamTime ? endJamTime : endRxTime, endRxMsg);
        delete msg;

        numCollisions++;
        // numCollisionsVector.record(numCollisions);
        return;
    }
    else if (receiveState==RX_IDLE_STATE)
    {
        if (dynamic_cast<PlcJam*>(msg) != NULL)
        {
        	// CHANGE ----------------------------------------------------------------------------------------
            // error("Stray jam signal arrived (usual cause is cable length exceeding allowed maximum)");
        	if (COMMENTS_ON) EV << "Stray jam signal arrived (usual cause is cable length exceeding allowed maximum)" << endl;
            receiveState = RX_COLLISION_STATE;
            simtime_t endJamTime = simTime()+jamDuration;
            scheduleAt(endRxTime<endJamTime ? endJamTime : endRxTime, endRxMsg);
            delete msg;
            return;
            // -----------------------------------------------------------------------------------------------
        }
        if (dynamic_cast<PlcJam *>(msg) == NULL)
        {
        	if (COMMENTS_ON) EV << "Start reception of frame\n";
			numConcurrentTransmissions++;
			if (frameBeingReceived)
			{
				if (COMMENTS_ON) EV << "frameBeingReceived!=0 in RX_IDLE_STATE";
				frameBeingReceived = NULL;
			}
			frameBeingReceived = (PlcFrame *)msg;
			scheduleEndRxPeriod(msg);
			channelBusySince = simTime();
        }
    }
    else if (receiveState==RECEIVING_STATE && dynamic_cast<PlcJam*>(msg)==NULL && endRxMsg->getArrivalTime()-simTime()<bitTime)
    {
        // With the above condition we filter out "false" collisions that may occur with
        // back-to-back frames. That is: when "beginning of frame" message (this one) occurs
        // BEFORE "end of previous frame" event (endRxMsg) -- same simulation time,
        // only wrong order.

    	if (COMMENTS_ON) EV << "Back-to-back frames: completing reception of current frame, starting reception of next one\n";

        // complete reception of previous frame
        cancelEvent(endRxMsg);
        PlcFrame *frame = frameBeingReceived;
        frameBeingReceived = NULL;
        frameReceptionComplete(frame);

        // start receiving next frame
        frameBeingReceived = (PlcFrame *)msg;
        scheduleEndRxPeriod(msg);
    }
    else // (receiveState==RECEIVING_STATE || receiveState==RX_COLLISION_STATE)
    {
        // handle overlapping receptions
        if (dynamic_cast<PlcJam*>(msg) != NULL)
        {
            if (numConcurrentTransmissions<=0)
            {
            	// CHANGE ------------------------------------------------------------------------------------------
                // error("numConcurrentTransmissions=%d on jam arrival (stray jam?)",numConcurrentTransmissions);
            	if (COMMENTS_ON) EV << "numConcurrentTransmissions=" << numConcurrentTransmissions << " on jam arrival (stray jam?)" << endl;
				if (AUTO_JAM_ENABLED)
					if (COMMENTS_ON) EV << "Probably, a \"real \" jam occured during an artificial jam." << endl;
				// ------------------------------------------------------------------------------------------------
            }
            numConcurrentTransmissions--;
            if (COMMENTS_ON) EV << "Jam signal received, this marks end of one transmission\n";

            // by the time jamming ends, all transmissions will have been aborted
            if (numConcurrentTransmissions==0)
            {
            	if (COMMENTS_ON) EV << "Last jam signal received, collision will ends when jam ends\n";
                cancelEvent(endRxMsg);
                scheduleAt(endRxTime, endRxMsg);
            }
        }
        else // PlcFrame or PlcPauseFrame
        {
            numConcurrentTransmissions++;
            if (endRxMsg->getArrivalTime() < endRxTime)
            {
                // otherwise just wait until the end of the longest transmission
            	if (COMMENTS_ON) EV << "Overlapping receptions -- setting collision state and extending collision period\n";
                cancelEvent(endRxMsg);
                scheduleAt(endRxTime, endRxMsg);
            }
            else
            {
            	if (COMMENTS_ON) EV << "Overlapping receptions -- setting collision state\n";
            }
        }

        // delete collided frames: arrived frame as well as the one we're currently receiving
        delete msg;
        if (receiveState==RECEIVING_STATE)
        {
            delete frameBeingReceived;
            frameBeingReceived = NULL;

            numCollisions++;
            // numCollisionsVector.record(numCollisions);
        }

        // go to collision state
        receiveState = RX_COLLISION_STATE;
    }
}

void PlcMAC::handleEndIFGPeriod()
{
    PlcMACBase::handleEndIFGPeriod();

    // CHANGE ----------------------------------------------------------------------------
    // We skip carrier extension, because there is no for plc communications
    /*
    // End of IFG period, okay to transmit, if Rx idle OR duplexMode
    cPacket *frame = (cPacket *)txQueue.front();

    // Perform carrier extension if in Gigabit Powerline
    if (carrierExtension && frame->getByteLength() < GIGABIT_MIN_FRAME_WITH_EXT)
    {
        EV << "Performing carrier extension of small frame\n";
        frame->setByteLength(GIGABIT_MIN_FRAME_WITH_EXT);
    }
	*/
    // -----------------------------------------------------------------------------------

    // send frame to network
    startFrameTransmission();
}

void PlcMAC::startFrameTransmission()
{
    cPacket *origFrame = (cPacket *)txQueue.front();
    if (COMMENTS_ON) EV << "Transmitting a copy of frame " << origFrame << endl;
    cPacket *frame = origFrame->dup();

    // add preamble and SFD (Starting Frame Delimiter), then send out
    frame->addByteLength(PREAMBLE_BYTES+SFD_BYTES);
    if (ev.isGUI())  updateConnectionColor(TRANSMITTING_STATE);

    // CHANGE ------------------------------------------------------------

    if(dynamic_cast<PlcFrame*>(frame)!=NULL)
	{
		PlcFrame *plc = check_and_cast<PlcFrame *>(frame);
		MACAddress *temp = new MACAddress(plc->getSrc());
		if (COMMENTS_ON) EV << "Src address is set to " << temp->str() << "." << endl;
		//if(plc->getSrc().equals("00-00-00-00-00-00"))
		//if(!plc->getSrc().compareTo(MACAddress("00-00-00-00-00-00")))   // TODO: Changed by Ramon; does this work correctly?
		if(plc->getSrc() == MACAddress("00-00-00-00-00-00"))   // TODO: Changed by Ramon; or is this better?
		{
			if (COMMENTS_ON) EV << "Source address not valid, correcting ..." << endl;
			plc->setSrc(address);
			temp = new MACAddress(plc->getSrc());
			if (COMMENTS_ON) EV << "Src address is set to " << temp->str() << "." << endl;
			frame = check_and_cast<cPacket *>(plc);
		}
		else
		{
			if (COMMENTS_ON) EV << "Source address valid, continuing ..." << endl;
		}
		if(plc->getVendorID() == 0)
		{
			if (COMMENTS_ON) EV << "Vendor ID not valid, correcting ..." << endl;
			plc->setVendorID(vendorID);
		}
		else
		{
			if (COMMENTS_ON) EV << "Vendor ID valid, continuing ..." << endl;
		}
	}
    // -------------------------------------------------------------------

    send(frame, physOutGate);

    // update burst variables
    if (frameBursting)
    {
        bytesSentInBurst = frame->getByteLength();
        framesSentInBurst++;
    }

    // check for collisions (there might be an ongoing reception which we don't know about, see below)
    if (!duplexMode && receiveState!=RX_IDLE_STATE)
    {
        // During the IFG period the hardware cannot listen to the channel,
        // so it might happen that receptions have begun during the IFG,
        // and even collisions might be in progress.
        //
        // But we don't know of any ongoing transmission so we blindly
        // start transmitting, immediately collide and send a jam signal.
        //
        sendJamSignal();
        // numConcurrentTransmissions stays the same: +1 transmission, -1 jam

        if (receiveState==RECEIVING_STATE)
        {
            delete frameBeingReceived;
            frameBeingReceived = NULL;

            numCollisions++;
            // numCollisionsVector.record(numCollisions);
        }
        // go to collision state
        receiveState = RX_COLLISION_STATE;
    }
    else
    {
        // no collision
    	if(endTxMsg != NULL && endTxMsg->isScheduled()) cancelEvent(endTxMsg);
        scheduleEndTxPeriod(frame);

        // only count transmissions in totalSuccessfulRxTxTime if channel is half-duplex
        if (!duplexMode)
            channelBusySince = simTime();
    }
}

void PlcMAC::handleEndTxPeriod()
{
    PlcMACBase::handleEndTxPeriod();

    // only count transmissions in totalSuccessfulRxTxTime if channel is half-duplex
    if (!duplexMode)
    {
        simtime_t dt = simTime()-channelBusySince;
        totalSuccessfulRxTxTime += dt;
    }

    backoffs = 0;

    // check for and obey received PAUSE frames after each transmission
    if (checkAndScheduleEndPausePeriod())
        return;

    // Gigabit Powerline: now decide if we transmit next frame right away (burst) or wait IFG
    // FIXME! this is not entirely correct, there must be IFG between burst frames too
    bool burstFrame=false;
    if (frameBursting && !txQueue.empty())
    {
        // check if max bytes for burst not exceeded
        if (bytesSentInBurst<GIGABIT_MAX_BURST_BYTES)
        {
             burstFrame=true;
             if (COMMENTS_ON) EV << "Transmitting next frame in current burst\n";
        }
        else
        {
        	if (COMMENTS_ON) EV << "Next frame does not fit in current burst\n";
        }
    }

    if (burstFrame)
        startFrameTransmission();
    else
        beginSendFrames();
}

void PlcMAC::handleEndRxPeriod()
{
	if (COMMENTS_ON) EV << "Frame reception complete\n";
    simtime_t dt = simTime()-channelBusySince;
    if (receiveState==RECEIVING_STATE) // i.e. not RX_COLLISION_STATE
    {
        PlcFrame *frame = frameBeingReceived;
        frameBeingReceived = NULL;
        frameReceptionComplete(frame);
        totalSuccessfulRxTxTime += dt;
    }
    else
    {
        totalCollisionTime += dt;
    }

    receiveState = RX_IDLE_STATE;
    numConcurrentTransmissions = 0;

    if (transmitState==TX_IDLE_STATE && !txQueue.empty())
    {
    	if (COMMENTS_ON) EV << "Receiver now idle, can transmit frames in output buffer after IFG period\n";
        scheduleEndIFGPeriod();
    }
}

void PlcMAC::handleEndBackoffPeriod()
{
    if (transmitState != BACKOFF_STATE && current_mode == 1)
        error("At end of BACKOFF not in BACKOFF_STATE!");
    if (transmitState != BACKOFF_STATE && current_mode == 2)
    {
    	if (COMMENTS_ON) EV << "CSMA error message was ignored in TDMA mode (BACKOFF_STATE)." << endl;
    	transmitState = BACKOFF_STATE;
    }
    if (txQueue.empty())
        error("At end of BACKOFF and buffer empty!");

    if (receiveState==RX_IDLE_STATE)
    {
    	if (COMMENTS_ON) EV << "Backoff period ended, wait IFG\n";
        scheduleEndIFGPeriod();
    }
    else
    {
    	if (COMMENTS_ON) EV << "Backoff period ended but channel not free, idling\n";
        transmitState = TX_IDLE_STATE;
    }
}

void PlcMAC::handleEndJammingPeriod()
{
    if (transmitState != JAMMING_STATE && current_mode == 1)
        error("At end of JAMMING not in JAMMING_STATE!");
    if (transmitState != JAMMING_STATE && current_mode == 2)
    {
    	if (COMMENTS_ON) EV << "CSMA error message was ignored in TDMA mode (JAMMING_STATE)." << endl;
    	transmitState = JAMMING_STATE;
    }
    if (COMMENTS_ON) EV << "Jamming finished, executing backoff\n";
    handleRetransmission();
}

void PlcMAC::sendJamSignal()
{
	// Change ---------------------------------------------------------------------
	bubble("JAM DETECTED");
	if (COMMENTS_ON) EV << "JAM" << endl;
	// ----------------------------------------------------------------------------
    cPacket *jam = new PlcJam("JAM_SIGNAL");
    jam->setByteLength(JAM_SIGNAL_BYTES);
    if (ev.isGUI())  updateConnectionColor(JAMMING_STATE);
    send(jam, physOutGate);

    scheduleAt(simTime()+jamDuration, endJammingMsg);
    transmitState = JAMMING_STATE;
}

void PlcMAC::scheduleEndRxPeriod(cPacket *frame)
{
    scheduleAt(simTime()+frame->getBitLength()*bitTime, endRxMsg);
    receiveState = RECEIVING_STATE;
}

void PlcMAC::handleRetransmission()
{
    if (++backoffs > MAX_ATTEMPTS)
    {
    	if (COMMENTS_ON) EV << "Number of retransmit attempts of frame exceeds maximum, canceling transmission of frame\n";
        delete txQueue.pop();

        transmitState = TX_IDLE_STATE;
        backoffs = 0;
        // no beginSendFrames(), because end of jam signal sending will trigger it automatically
        return;
    }

    // CHANGE ------------------------------------------------------------------------------
    // If the number of retransmit attempts exceeds MAX_ATTEMPTS / 2 (rounded up), the modem
    // will try to get QoS traffic, or get more bandwidth for transmission
    int temp = MAX_ATTEMPTS / 2;
    if (backoffs > temp)
    {
    	if (COMMENTS_ON) EV << "Backoff counter is critically high. Trying to find help ..." << endl;
    	if (current_mode == 1) // CSMA
    	{
    		if (COMMENTS_ON) EV << "I'm in CSMA mode - trying to change to TDMA mode ..." << endl;
    		requestCCoForQoSTraffic(4);
    	}
    	if (current_mode == 2) // TDMA
    	{
    		if (COMMENTS_ON) EV << "I'm in TDMA mode - trying to get more bandwidth ..." << endl;
    		requestMoreBandwidth();
    	}
    }
    // -------------------------------------------------------------------------------------

    if (COMMENTS_ON) EV << "Executing backoff procedure\n";
    int backoffrange = (backoffs>=BACKOFF_RANGE_LIMIT) ? 1024 : (1 << backoffs);
    int slotNumber = intuniform(0,backoffrange-1);
    simtime_t backofftime = slotNumber*slotTime;

    // CHANGE ------------------------------------------------------------------------------
    // For CSMA/CA, we have to add a random selected additional wait time, based on the
    // priority of the frame

    int priority = 1;
    cObject *pointer = txQueue.front();
    if(pointer != NULL && dynamic_cast<PlcFrame*>(pointer)!=NULL)
	{
    	PlcFrame *plc = check_and_cast<PlcFrame *>(pointer);
    	priority = plc->getPriority();
	}
	double whole_period = PRIORITY_RESOLUTION_PERIOD;
	double quarter_period = whole_period/4;
	double basic_priority_period = whole_period - (priority * quarter_period);
	double fluctuation = quarter_period * 0.9; // 16,12 us
	int gap = CSMA_CA_MAX_ADDITIONAL_WAIT_TIME;
	int int_k = rand()%11; // 0 us to 14,08 us
	if (COMMENTS_ON) EV << "Diceroll resulted in " << int_k << "." << endl;
	double m = fluctuation - (int_k * gap);
	double x = (m+basic_priority_period)/1000000;
	simtime_t priority_wait_time = (simtime_t) x; // us
	simtime_t complete_wait_time = backofftime+priority_wait_time;
    scheduleAt(simTime()+complete_wait_time, endBackoffMsg);
    transmitState = BACKOFF_STATE;
    numBackoffs++;
    // numBackoffsVector.record(numBackoffs);
}

void PlcMAC::printState()
{
#define CASE(x) case x: EV << #x; break
	if (COMMENTS_ON) EV << "transmitState: ";
    switch (transmitState) {
        CASE(TX_IDLE_STATE);
        CASE(WAIT_IFG_STATE);
        CASE(TRANSMITTING_STATE);
        CASE(JAMMING_STATE);
        CASE(BACKOFF_STATE);
        CASE(PAUSE_STATE);
    }
    if (COMMENTS_ON) EV << ",  receiveState: ";
    switch (receiveState) {
        CASE(RX_IDLE_STATE);
        CASE(RECEIVING_STATE);
        CASE(RX_COLLISION_STATE);
    }
    if (COMMENTS_ON) EV << ",  backoffs: " << backoffs;
    if (COMMENTS_ON) EV << ",  numConcurrentTransmissions: " << numConcurrentTransmissions;
    if (COMMENTS_ON) EV << ",  queueLength: " << txQueue.length() << endl;
#undef CASE
}

void PlcMAC::finish()
{
    PlcMACBase::finish();
    /*
    simtime_t t = simTime();
    simtime_t totalChannelIdleTime = t - totalSuccessfulRxTxTime - totalCollisionTime;
    recordScalar("rx channel idle (%)", 100*(totalChannelIdleTime/t));
    recordScalar("rx channel utilization (%)", 100*(totalSuccessfulRxTxTime/t));
    recordScalar("rx channel collision (%)", 100*(totalCollisionTime/t));
    recordScalar("collisions",     numCollisions);
    recordScalar("backoffs",       numBackoffs);
    */
}

void PlcMAC::updateHasSubcribers()
{
    hasSubscribers = false;  // currently we don't fire any notifications
}

// CHANGE ----------------------------------------------------------------
void PlcMAC::readOutPreamble(cMessage *msg)
/*
     Das Powerline-Modem verwendet die Preambel als Trainingssequenz, um auf die
     aktuelle Kanalqualitaet zurueckzuschliessen. In dieser Funktion wird die Ambel
     ausgelesen, welche vom Kanalmodul geschrieben worden ist.
*/

{
	PlcFrame *plc = check_and_cast<PlcFrame *>(msg);
	if (COMMENTS_ON) EV << "Reading out preamble ..." << endl;
	if (COMMENTS_ON) EV << "Datarate: " << plc->getDatarate() << " Mbps" << endl;
	if (COMMENTS_ON) EV << "PER : " << plc->getPER() << " %" << endl;

	/*
		Von Siemens (Alla Heidenreich) kommt zur Haeufigkeit der Kanalaktualisierung folgende Aussage:
		Die Modems aktualisieren alle 5 bis 10 Sekunden synchron ihre Kanalmessung, oder asynchron, wenn
		die aktuelle PER die gespeicherte uebertrifft.
	*/
	if(plc->getPER() < PER)
	{
		if (COMMENTS_ON) EV << "PER in the preamble is lower than the stored one -> current txrate will be kept." << endl;
		return;
	}
	else
	{
		if (COMMENTS_ON) EV << "PER in the preamble is higher than the stored one -> current txrate will be changed." << endl;
		PER = plc->getPER();
	}

	if (COMMENTS_ON) EV << "Max txrate for this modem is " << max_txrate << " Mbps." << endl;
	double current_available_datarate = plc->getDatarate();
	if (current_available_datarate >= max_txrate)
	{
		current_available_datarate = max_txrate;
		if (COMMENTS_ON) EV << "Available txrate is bigger than modem capability." << endl;
	}

	if (smartNotchingEnabled)
	{
		txrate = current_available_datarate * 1000000 * 0.77;
		if (COMMENTS_ON) EV << "Smart notching is on." << endl;
		if (COMMENTS_ON) EV << "TXrate of " << current_available_datarate << " Mbps is reduced by 23%." << endl;
		if (COMMENTS_ON) EV << "Available datarate is " << txrate / 1000000 << " Mbps." << endl;
	}
	else
	{
		txrate = current_available_datarate*1000000;
	}
	if(myDataCollector != NULL && reportEnabled == true)
	{
		if (COMMENTS_ON) EV << "Sending net condition ..." << endl;
		NetCondition *myData = new NetCondition("NET_DAT");
		if (COMMENTS_ON) EV << "txrate [Bit/s]  = " << txrate << endl;
		if (COMMENTS_ON) EV << "txrate [MBit/s] = " << txrate / 1000000 << endl;
		myData->setDatarate(txrate/1000000);
		myData->setPER(PER);
		myData->setTypeOfNet(typeOfModem);
		cMessage *thisMsg = check_and_cast<cMessage *>(myData);
		sendDirect(thisMsg,0,0,myDataCollector,"dataIn");
	}
	if(myDataCollector == NULL)
	{
		if (COMMENTS_ON) EV << "Cannot send net condition ..." << endl;
	}


	/*
	checkForVendorID(msg);
	if (COMMENTS_ON) EV << "TXrateModifier is at " << txrateModifier << "." << endl;
	txrate = txrate * txrateModifier;
	if (COMMENTS_ON) EV << "TXrate switched to " << txrate / 1000000 << " Mbit/s." << endl;
	*/
	calculateParameters();
	if (ev.isGUI())
	{
		char modestr[64];
		sprintf(modestr, "%dMb\n%s", int(txrate/1000000), (duplexMode ? "full duplex" : "half duplex"));
		getDisplayString().setTagArg("t",0,modestr);
		sprintf(modestr, "%s: %dMb %s", getFullName(), int(txrate/1000000), (duplexMode ? "duplex" : "half duplex"));
		getParentModule()->bubble(modestr);
	}
}

/*
     Die Funktionen checkForVendorID, schedulePolitenessPerios, applyPolitenessRuels und
     removePolitenessRules realisieren den "Hoeflichkeits"-Algorithmus zur besseren Aufteilung
     des Spektrums, wenn konkurrierende Systeme auf einem Netz senden.
     Ist ein Modem "hoeflich", so wird es die vom anderen System verwendeten Freuqenzen aus seiner
     OFDM herausnehmen. Ein anderes, nicht hoefliches Modem profitiert enorm von diesem Umstand, da es
     nun audf den vom anderemn Modem ausgeblendeten Frequenzen ungestoert senden kann, und den
     verbleibenden Bereich immernoch "dreist" mitnutzt. Dies fuehrt dazu, das das hoefliche Modem eine
     deutlich geringere Kanalnutzung <50% als das "dreiste" Modem >50% hat.
     Sind beide Modems hoeflich, koennen sie sich den Kanal recht fair teilen 50/50. Sid beide Modems
     dreist, d.h. sie blockieren sich gegenseitig, geht Kanalkapazitaet "echt" verloren, und die restliche
     muss geteilt werden, d.h. beide Modems haben spuehrbar weniger als 50% verfuegbare Kanalkapazitaet.
     Dieses Prinzip wird in der Dissertation von Andreas Schwager (Sony) vorgestellt.
     Optimal ist es natuerlich, wenn auf einem Netz nur ein PLC-System betrieben wird, und die
     Kanalaufteilung gerecht mit CSMA/CA geregelt wird.

     !!!!!!!!!!!! IMPORTANT !!!!!!!!!!!!!
     To place the intelligence of vendor managing in the modems turned out to be
     very useless - the functions were moved to the CCo ("PlcNet"-module).
*/

/*
void PlcMAC::checkForVendorID(cMessage *msg)
{
	if (COMMENTS_ON) EV << "Checking for vendor ID ..." << endl;
	PlcFrame *plc = check_and_cast<PlcFrame *>(msg);
	if (COMMENTS_ON) EV << "Message comes from vendor " << plc->getVendorID() << "." << endl;
	if (COMMENTS_ON) EV << "My vendor ID is " << vendorID << "." << endl;
	if(plc->getVendorID() != vendorID)
	{
		if (COMMENTS_ON) EV << "Foreign Vendor ID detected." << endl;
		cancelEvent(endVendorAwareness);
		applyPolitenessRules(msg);
	}
	else
	{
		if (COMMENTS_ON) EV << "So this message doesn't come from a foreigner." << endl;
	}
}

void PlcMAC::schedulePolitenessPeriod()
{
	simtime_t temp = VENDOR_AWARENESS_PERIOD / 1000000;
	if (COMMENTS_ON) EV << "END of awareness period scheduled in " << temp * 1000000 << " micro sec." << endl;
	scheduleAt(simTime()+temp, endVendorAwareness);
}

void PlcMAC::applyPolitenessRules(cMessage *msg)
{
	PlcFrame *plc = check_and_cast<PlcFrame *>(msg);

	if(polite)
	{
		if (COMMENTS_ON) EV << "I am polite." << endl;
	}
	else
	{
		if (COMMENTS_ON) EV << "I am NOT polite." << endl;
	}
	if(plc->getIsPolite())
	{
		if (COMMENTS_ON) EV << "It is polite." << endl;
	}
	else
	{
		if (COMMENTS_ON) EV << "It is NOT polite." << endl;
	}

	double temp1 = FAIR_DIVISION_TXRATE_MODIFIER;		// Both modems are polite
	double temp2 = UNFAIR_DIVISION_TXRATE_MODIFIER_1;	// Only one is polite - modifier for the unpolite
	double temp3 = UNFAIR_DIVISION_TXRATE_MODIFIER_2;   // Only one is polite - modifier for the polite
	double temp4 = UNFAIR_DIVISION_TXRATE_MODIFIER_3;	// Both modems are NOT polite

	if (COMMENTS_ON) EV << "The modifiers are " << temp1 << ", " << temp2 << ", " << temp3 << " and " << temp4 << "." << endl;

	bool temp = plc->getIsPolite();

	if(polite && temp)
	{
		txrateModifier = temp1;
	}
	if(polite && !temp)
	{
		txrateModifier = temp3;
	}
	if(!polite && !temp)
	{
		txrateModifier = temp4;
	}
	if(!polite && temp)
	{
		txrateModifier = temp2;
	}
	if (COMMENTS_ON) EV << "TXrateModifier is set to " << txrateModifier << "." << endl;
	OtherVendorInNetwork = 1;
	schedulePolitenessPeriod();
}

void PlcMAC::removePolitenessRules()
{
	if (COMMENTS_ON) EV << "Removing politeness restrictions." << endl;
	double temp = 1/txrateModifier;
	txrateModifier = 1;
	if (COMMENTS_ON) EV << "TXrateModifier is at " << txrateModifier << "." << endl;
	txrate = txrate * temp;
	if (COMMENTS_ON) EV << "TXrate switched to " << txrate / 1000000 << " Mbit/s." << endl;
	if (ev.isGUI())
	{
		char modestr[64];
		sprintf(modestr, "%dMb\n%s", int(txrate/1000000), (duplexMode ? "full duplex" : "half duplex"));
		getDisplayString().setTagArg("t",0,modestr);
		sprintf(modestr, "%s: %dMb %s", getFullName(), int(txrate/1000000), (duplexMode ? "duplex" : "half duplex"));
		getParentModule()->bubble(modestr);
	}
	calculateParameters();
	OtherVendorInNetwork = 0;
}
*/

bool PlcMAC::compareMACAddresses (MACAddress *a)
{
	if (COMMENTS_ON) EV << "Comparing the addresses " << a->str() << " and " << address.str() << " ... " << endl;
	if (a->compareTo(address))   // TODO: Changed by Ramon; is this correct?
	{
	    return false;
	}
	return true;



	//for (int i = 0; i < MAC_ADDRESS_BYTES; i++)
	//{
	//	if (a->getAddressByte(i) != address.getAddressByte(i)) return false;
	//}
	//return true;
}

void PlcMAC::sendSendingRequest()
{
	PlcSendRequestTDMA *sndreq = new PlcSendRequestTDMA ("SND_REQ");
	sndreq->setSrc(address);
	MACAddress *pointer = new MACAddress(sndreq->getSrc());
	if (COMMENTS_ON) EV << "Created sending request for my address " << pointer->str() << "." << endl;
	send(sndreq, physOutGate);
}

void PlcMAC::processFrameFromUpperLayerTDMA (PlcFrame *frame)
{
	// Die Nachricht kommt vom IP-Layer ... Hinzufuegen der MAC-Informationen

	// Bytes hinzufuegen
	if (COMMENTS_ON) EV << "Frame has a length of " << frame->getByteLength() << " byte." << endl;
	if (COMMENTS_ON) EV << "Adding preamble and SFD bytes ... " << endl;
	frame->addByteLength(PREAMBLE_BYTES+SFD_BYTES);
	if (COMMENTS_ON) EV << "Frame has a nox length of " << frame->getByteLength() << " byte." << endl;
	// Prioritaet abfragen
	if (COMMENTS_ON) EV << "Frame has a Priority of " << frame->getPriority() << "." << endl;
	// Vendor-ID hinzufuegen
	frame->setVendorID(vendorID);
	if (COMMENTS_ON) EV << "Frame has a vendor ID of " << frame->getVendorID() << "." << endl;
	// (ggf.) MAC-Adresse ueberschreiben
	frame->setSrc(address);
	if (COMMENTS_ON) EV << "Source address is now " << frame->getSrc().str() << "." << endl;
	// Nachricht versenden
	if (COMMENTS_ON) EV << "Sending out frame at physical out gate." << endl;

	// Correcting the run time (TDMA pakets are send in zero time) ...
	if (COMMENTS_ON) EV << "Correcting parameters of frame ..." << endl;
	double presetTime = (frame->getEncapsulationTime()).dbl();
	double size = frame->getBitLength();

	// TODO:
	double token_and_request_time = 0;
	if (token_just_received)
	{
		token_and_request_time = 2 * (MIN_PLC_FRAME / txrate) + 2* CIFS/1000000;
		token_just_received = false;
	}
	double duration = size / txrate + CIFS/1000000 + token_and_request_time;

	double correction = presetTime - duration;
	frame->setEncapsulationTime(correction);
	if (COMMENTS_ON) EV << "Frame was encapsuled at " << presetTime*1000 << "ms." << endl;
	if (COMMENTS_ON) EV << "Frame has a size of " << size/8 << "byte." << endl;
	if (COMMENTS_ON) EV << "The txrate is at the moment " << txrate/1000000 << "MBit/s." << endl;
	if (COMMENTS_ON) EV << "The bit duration of the frame is " << duration*1000 << "ms." << endl;
	if (COMMENTS_ON) EV << "The corrected delay is " << correction*1000 << "ms." << endl;
	send(frame, physOutGate);

	// Erinnerung fuer naechste Nachricht schicken
	double length = frame->getBitLength(); // in Bit
	double speed = txrate; // in Bit/s
	simtime_t sendingDuration = length / speed + CIFS/1000000; // [Bit] / [Bit/s] = [s]
	if (COMMENTS_ON) EV << "Next frame can be send in " << sendingDuration << " seconds." << endl;
	if (nextMsgTDMA->isScheduled()) cancelEvent(nextMsgTDMA);
	scheduleAt(simTime()+sendingDuration, nextMsgTDMA);
	// Delete front element of Queue ...
	if (!txQueue.empty()) delete txQueue.pop();
}

void PlcMAC::manageReminder()
{
	if (COMMENTS_ON) EV << "TDMAsendingEnabled: " << TDMAsendingEnabled
						<< " - txQueue.empty(): " << txQueue.empty() << endl;

	// Ich darf noch senden, und will auch etwas senden ...
	if(TDMAsendingEnabled == 1 && !txQueue.empty())
	{
		if (COMMENTS_ON) EV << "Going to send the next message ..." << endl;
		// Get the first message out of the queue
		if(txQueue.front() == NULL)
		{
			if (COMMENTS_ON) EV << "First element of queue is empty." << endl;
		}
		cPacket *origFrame = (cPacket *)txQueue.front();
		cPacket *frame = origFrame->dup();
		if(dynamic_cast<PlcFrame*>(frame)!=NULL)
		{
			if (COMMENTS_ON) EV << "Message in queue is valid, porceeding ..." << endl;
			PlcFrame *plc = check_and_cast<PlcFrame *>(frame);
			processFrameFromUpperLayerTDMA(plc);
		}
		else
		{
			if (COMMENTS_ON) EV << "Message in queue is corrupted, ignoring ..." << endl;
			return;
		}
	}
	// Ich darf nicht senden, will aber noch senden ...
	if(TDMAsendingEnabled == 0 && !txQueue.empty())
	{
		if (COMMENTS_ON) EV << "Going to send a sending request ..." << endl;
		sendSendingRequest();
	}
	// Ich darf noch senden, will aber nicht senden
	if(TDMAsendingEnabled == 1 && txQueue.empty())
	{
		if (COMMENTS_ON) EV << "Nothing to send ... ignoring token." << endl;
		return;
	}
	// Ich darf nicht senden, will das aber auch nicht
	if(TDMAsendingEnabled == 0 && txQueue.empty())
	{
		if (COMMENTS_ON) EV << "Nothing to send ... having no token." << endl;
		return;
	}
	// To bridge slots where the queue is really empty ...
	if (nextMsgTDMA->isScheduled()) cancelEvent(nextMsgTDMA);
	scheduleAt(simTime()+ TDMA_PERIOD/2, nextMsgTDMA);
}

void PlcMAC::processMsgFromNetworkTDMA(cPacket *msg)
{
	readOutPreamble(msg);
	// Die Nachricht kommt vom Netzwerk ... ohne Verzoegerung weiterleiten an den IP-Layer.
	send(msg, "upperLayerOut");
}

void PlcMAC::handleMessageTDMA(cMessage *msg)
{
	if (COMMENTS_ON) EV << "Current mode is TDMA - performing TDMA procedure for message ..." << endl;
	if(!msg->isSelfMessage())
	{
		if (COMMENTS_ON) EV << "Message is not a self message - checking arrival gate ..." << endl;
		if (COMMENTS_ON) EV << "Arrival gate is: " << msg->getArrivalGate()->getName() << endl;
		if (msg->getArrivalGate() == gate("upperLayerIn"))
		{
			if (COMMENTS_ON) EV << "Message comes from upper layer - checking sending status ... " << endl;
			if(TDMAsendingEnabled == 1)
			{
				bubble("CLEAR TO SEND!");
				if (COMMENTS_ON) EV << "Ready to send ..." << endl;
				if (COMMENTS_ON) EV << "Processing frame from upper layer." << endl;
				processFrameFromUpperLayerTDMA(check_and_cast<PlcFrame *>(msg));
				numSentTDMA = numSentTDMA+1;
			}
			if(TDMAsendingEnabled == 0)
			{
				bubble("NOT CLEAR TO SEND!");
				if (COMMENTS_ON) EV << "NOT ready to send ..." << endl;
				sendSendingRequest();
				txQueue.insert(msg);
				if (COMMENTS_ON) EV << "Waiting for token." << endl;
			}
			return;
		}
		if (msg->getArrivalGate() == gate("phys$i"))
		{
			if (COMMENTS_ON) EV << "Message comes from lower layer - proceed as usual ... " << endl;
			if (COMMENTS_ON) EV << "Processing frame from network ..." << endl;
			if (dynamic_cast<PlcFrame*>(msg)!=NULL) processMsgFromNetworkTDMA(check_and_cast<PlcFrame *>(msg));;
			printState();
			if (ev.isGUI()) updateDisplayString();
			return;
		}
		else
		{
			if (COMMENTS_ON) EV << "Arrival gate status unclear ... ignoring." << endl;
		}
	}
}

void PlcMAC::RXTXstateView()
{
	if (transmitState == TX_IDLE_STATE)
	{
		if (COMMENTS_ON) EV << "transmitState = TX_IDLE_STATE" << endl;
	}
	else if (transmitState == WAIT_IFG_STATE)
	{
		if (COMMENTS_ON) EV << "transmitState = WAIT_IFG_STATE" << endl;
	}
	else if (transmitState == TRANSMITTING_STATE)
	{
		if (COMMENTS_ON) EV << "transmitState = TRANSMITTING_STATE" << endl;
	}
	else if (transmitState == JAMMING_STATE)
	{
		if (COMMENTS_ON) EV << "transmitState = JAMMING_STATE" << endl;
	}
	else if (transmitState == BACKOFF_STATE)
	{
		if (COMMENTS_ON) EV << "transmitState = BACKOFF_STATE" << endl;
	}
	else if (transmitState == PAUSE_STATE)
	{
		if (COMMENTS_ON) EV << "transmitState = PAUSE_STATE" << endl;
	}
	else
	{
		if (COMMENTS_ON) EV << "transmitState = UNDEFINED" << endl;
	}
	if (receiveState == RX_IDLE_STATE)
	{
		if (COMMENTS_ON) EV << "receiveState = RX_IDLE_STATE" << endl;
	}
	else if (receiveState == RECEIVING_STATE)
	{
		if (COMMENTS_ON) EV << "receiveState = RECEIVING_STATE" << endl;
	}
	else if (receiveState == RX_COLLISION_STATE)
	{
		if (COMMENTS_ON) EV << "receiveState = RX_COLLISION_STATE" << endl;
	}
	else
	{
		if (COMMENTS_ON) EV << "receiveState = UNDEFINED" << endl;
	}
}

void PlcMAC::cancelAllEvents()
{
	cancelEvent(endTxMsg);
	cancelEvent(endRxMsg);
	cancelEvent(endBackoffMsg);
	cancelEvent(endJammingMsg);
	cancelEvent(endIFGMsg);
	cancelEvent(endPauseMsg);
}

void PlcMAC::requestCCoForQoSTraffic(int var_priority)
{
	if (CSMA_ONLY == 0)
	{
		if (COMMENTS_ON) EV << "Sending QoS request to CCo with priority traffic level "
							<< var_priority << "." << endl;
		QoSRequest *newRequest = new QoSRequest("QOS_REQ");
		newRequest->setPriority(var_priority);
		send(newRequest, physOutGate);
	}
	if (CSMA_ONLY == 1)
	{
		if (COMMENTS_ON) EV << "Won't request QoS traffic - TDMA is switched off." << endl;
		return;
	}
}

void PlcMAC::requestMoreBandwidth()
{
	if (COMMENTS_ON) EV << "Sending request for more bandwidth ..." << endl;
	MoreBandwidthRequest *thisRequest = new MoreBandwidthRequest("BNW_REQ");
	thisRequest->setSrc(address);
	send(thisRequest, physOutGate);
}

void PlcMAC::eraseChannelProperties()
{
	// if not CCo ...
	cModule *myParent = this->getParentModule();
	myParent = myParent->getParentModule();
//	if(myParent->hasGate("ethg$o",0))   // TODO: Changed by Ramon; ethg --> plcg
	if(myParent->hasGate("plcg$o",0))   // TODO: e.g. CCo assignment in ini file
	{
//		cGate *myGate = myParent->gate("ethg$o",0); // TODO: Changed by Ramon; ethg --> plcg
		cGate *myGate = myParent->gate("plcg$o",0);
		cChannel *myChannel = myGate->getChannel();
		if(myChannel != NULL)
		{
			if (COMMENTS_ON) EV << "I'm not CCo, and I erase the delay of my adjacent channel." << endl;
			if(myChannel->hasPar("delay"))
			{
				int parNum = myChannel->findPar("delay");
				myChannel->par(parNum) = 0;
			}
		}
	}
}

void PlcMAC::sentStatisticalData()
{
	if(reportEnabled == false) return;
	simtime_t now = simTime();
	simtime_t interval = DATA_COLLECT_INTERVAL;
	int temp = now/interval;
	if(temp>counter)
	{
		DATA_PlcMAC *newData = new DATA_PlcMAC("DATA");
		newData->setTypeOfModem(typeOfModem);
		newData->setNumBackoffs(backoffs);
		newData->setNumCollisions(numCollisions);
		simtime_t t = simTime();
		newData->setTotalCollisionTime(totalCollisionTime);
		newData->setTotalSuccessfulRxTxTime(totalSuccessfulRxTxTime);
		simtime_t totalChannelIdleTime = t - totalSuccessfulRxTxTime - totalCollisionTime;
		newData->setTotalChannelIdleTime(totalChannelIdleTime);
		sendDirect(newData,0,0,myDataCollector,"dataIn");
		counter++;
	}
}

// -----------------------------------------------------------------------
