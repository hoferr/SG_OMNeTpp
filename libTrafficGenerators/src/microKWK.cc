#include "microKWK.h"

Register_Class(microKWK);
Define_Module(microKWK);

void microKWK::initialize()
{
	variation_value = 5000000;			    // prozentuale gleichverteilte Schwankungbreite aller
											// Paketwiederhohlraten "_freq" in 1/1000000

	MTU = 1460;								// "Maximum Transfer Unit" fuer den TCP/IP-Layer
	droppedPkts = 0;
	numPkts = 0;

	getaggregatorrequest_freq   = 10;    	// hier sind die Paketwiederhohlraten der einzelnen
	responseCHPdata_freq        = 10;    	// Nachrichten aus den Dokumenten und den eMails abgelegt
	getweatherforecastdata_freq = 60;
	tarifcomplexdata_freq       = 60;
	getmeterdata_freq           = 60;

	getaggregatorrequest_size   = 1090;		// hier sind die Paketgroessen der einzelnen Nachrichten
	responseCHPdata_size        = 2190;		// aus den Dokumenten und den eMails abgelegt
	getweatherforecastdata_size = 49;
	tarifcomplexdata_size       = 46;
	getmeterdata_size           = 39;

	getaggregatorrequest_retry   = 0;		// Zaehlen der Sendeverschiebeaktionen wegen Kanalbelegung
	responseCHPdata_retry        = 0;
	getweatherforecastdata_retry = 0;
	tarifcomplexdata_retry       = 0;
	getmeterdata_retry           = 0;

	// hier werden die SelfMessages fuer die einzelnen Nachrichten initialisiert ...
	getaggregatorrequest_msg      = new cMessage("getaggregatorrequest");
	responseCHPdata_msg           = new cMessage("responseCHPdata");
	getweatherforecastdata_msg    = new cMessage("getweatherforecastdata");
	tarifcomplexdata_msg          = new cMessage("tarifcomplexdata");
	getmeterdata_msg              = new cMessage("getmeterdata_msg");

	// der Startpunkt des Sendebetriebes fuer jede einzelne Nachricht wird zufaellig ausgewaehlt ...
	int getaggregatorrequest_startDelay      = rand()%(int)getaggregatorrequest_freq;
	int responseCHPdata_startDelay           = rand()%(int)responseCHPdata_freq;
	int getweatherforecastdata_startDelay    = rand()%(int)getweatherforecastdata_freq;
	int tarifcomplexdata_startDelay          = rand()%(int)tarifcomplexdata_freq;
	int getmeterdata_startDelay              = rand()%(int)getmeterdata_freq;

	// die SelfMessages werden losgeschickt ...
	scheduleAt(simTime()+getaggregatorrequest_startDelay,   getaggregatorrequest_msg);
	scheduleAt(simTime()+responseCHPdata_startDelay,        responseCHPdata_msg);
	scheduleAt(simTime()+getweatherforecastdata_startDelay, getweatherforecastdata_msg);
	scheduleAt(simTime()+tarifcomplexdata_startDelay,       tarifcomplexdata_msg);
	scheduleAt(simTime()+getmeterdata_startDelay,           getmeterdata_msg);

	// fuer die grosse Nachricht muss eine Fragmentierung eingebaut werden ...
	pktCounter = (responseCHPdata_size / MTU);
	pktRest = responseCHPdata_size - pktCounter * MTU;
	pktCounter_msg = new cMessage ("pktCounter_msg");
	cGate *myGate =  this->gate("out");
	myOutputChannel = myGate->getChannel();
	if(COMMENTS_ON) EV << "My output channel is a " << myOutputChannel->getClassName() << "." << endl;
}

void microKWK::handleMessage(cMessage *msg)
{
	if(msg->isSelfMessage())
	{
		if(COMMENTS_ON) EV << "SelfMessage <" << msg->getName() << "> received." << endl;

		//======================================================================================
		// ... es handelt sich um die Nachricht "get_aggregatorrequest.xml"
		if(strcmp(msg->getName(), "getaggregatorrequest") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				getaggregatorrequest_retry++;
				if(getaggregatorrequest_retry > 3)
				{
					bubble("TRAFFIC_JAM");
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   getaggregatorrequest_msg);
				if(getaggregatorrequest_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					getaggregatorrequest_retry = 0;
					if(getaggregatorrequest_msg->isScheduled()) cancelEvent(getaggregatorrequest_msg);
					scheduleAt(simTime()+getaggregatorrequest_freq+variation(),
							   getaggregatorrequest_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("getaggregatorrequest");
			// setze die Groesse des Paketes ...
			newPkt->setByteLength(getaggregatorrequest_size);
			if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
					           << " Byte" << endl;
			// plane die naechste Nachricht ein ...
			scheduleAt(simTime()+getaggregatorrequest_freq+variation(), getaggregatorrequest_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << getaggregatorrequest_msg->getArrivalTime() << "s." << endl;
			// sende das Paket ...
			numPkts++;
			send(newPkt, "out");
		}
		//======================================================================================
		// ... es handelt sich um die Nachricht "responseCHPdata.xml"
		if(strcmp(msg->getName(), "responseCHPdata") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				responseCHPdata_retry++;
				if(responseCHPdata_retry > 3)
				{
					bubble("TRAFFIC_JAM");
					responseCHPdata_retry = 0;
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   responseCHPdata_msg);
				if(responseCHPdata_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					responseCHPdata_retry = 0;
					if(responseCHPdata_msg->isScheduled()) cancelEvent(responseCHPdata_msg);
					scheduleAt(simTime()+responseCHPdata_freq+variation(),
							   responseCHPdata_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("responseCHPdata");
			// setze die Groesse des Paketes ...
			newPkt->setByteLength(MTU);
			if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
							   << " Byte" << endl;
			// sende das Paket ...
			numPkts++;
			send(newPkt, "out");
			// plane die naechste Nachricht ein ...
			double channelFreeAgain = (myOutputChannel->getTransmissionFinishTime()).dbl();
			if(COMMENTS_ON) EV << "Channel is free again at " << channelFreeAgain << "s." << endl;
			if (pktCounter_msg->isScheduled()) cancelEvent(pktCounter_msg);
			scheduleAt(channelFreeAgain, pktCounter_msg);
			scheduleAt(simTime()+responseCHPdata_freq+variation(), responseCHPdata_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << responseCHPdata_msg->getArrivalTime() << "s." << endl;
		}
		if(strcmp(msg->getName(), "pktCounter_msg") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				if (pktCounter_msg->isScheduled()) cancelEvent(pktCounter_msg);
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   pktCounter_msg);
				return;
			}
			pktCounter--;
			if(COMMENTS_ON) EV << "Fragmentation counter is a " << pktCounter << "." << endl;
			if (pktCounter >= 0)
			{
				// erzeuge ein neues Paket ...
				cPacket *newPkt = new cPacket();
				// setze den Paketnamen ein ...
				newPkt->setName("responseCHPdata");
				// setze die Groesse des Paketes ...
				if(pktCounter >  0) newPkt->setByteLength(MTU);
				if(pktCounter == 0) newPkt->setByteLength(pktRest);
				if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
								   << " Byte" << endl;
				// sende das Paket ...
				numPkts++;
				send(newPkt, "out");
				// plane die naechste Nachricht ein ...
				double channelFreeAgain = (myOutputChannel->getTransmissionFinishTime()).dbl();
				if(COMMENTS_ON) EV << "Channel is free again at " << channelFreeAgain << "s." << endl;
				if (pktCounter >= 1)
				{
					if (pktCounter_msg->isScheduled()) cancelEvent(pktCounter_msg);
					scheduleAt(channelFreeAgain, pktCounter_msg);
				}
			}
			if (pktCounter <= 0) pktCounter = (responseCHPdata_size / MTU);
		}
		//======================================================================================
		// ... es handelt sich um die Nachricht "get_weatherforecastdata.xml"
		if(strcmp(msg->getName(), "getweatherforecastdata") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				getweatherforecastdata_retry++;
				if(getweatherforecastdata_retry > 3)
				{
					bubble("TRAFFIC_JAM");
					getweatherforecastdata_retry = 0;
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   getweatherforecastdata_msg);
				if(getweatherforecastdata_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					getweatherforecastdata_retry = 0;
					if(getweatherforecastdata_msg->isScheduled()) cancelEvent(getweatherforecastdata_msg);
					scheduleAt(simTime()+getweatherforecastdata_freq+variation(),
							   getweatherforecastdata_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("getweatherforecastdata");
			// setze die Groesse des Paketes ...
			newPkt->setByteLength(getweatherforecastdata_size);
			if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
							   << " Byte" << endl;
			// plane die naechste Nachricht ein ...
			scheduleAt(simTime()+getweatherforecastdata_freq+variation(), getweatherforecastdata_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << getweatherforecastdata_msg->getArrivalTime() << "s." << endl;
			// sende das Paket ...
			numPkts++;
			send(newPkt, "out");
		}
		//======================================================================================
		// ... es handelt sich um die Nachricht "tarifcomplexdata.xml"
		if(strcmp(msg->getName(), "tarifcomplexdata") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				tarifcomplexdata_retry++;
				if(tarifcomplexdata_retry > 3)
				{
					bubble("TRAFFIC_JAM");
					tarifcomplexdata_retry = 0;
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   tarifcomplexdata_msg);
				if(tarifcomplexdata_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					tarifcomplexdata_retry = 0;
					if(tarifcomplexdata_msg->isScheduled()) cancelEvent(tarifcomplexdata_msg);
					scheduleAt(simTime()+tarifcomplexdata_freq+variation(),
							   tarifcomplexdata_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("tarifcomplexdata");
			// setze die Groesse des Paketes ...
			newPkt->setByteLength(tarifcomplexdata_size);
			if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
							   << " Byte" << endl;
			// plane die naechste Nachricht ein ...
			scheduleAt(simTime()+tarifcomplexdata_freq+variation(), tarifcomplexdata_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << tarifcomplexdata_msg->getArrivalTime() << "s." << endl;
			// sende das Paket ...
			numPkts++;
			send(newPkt, "out");
		}
		//======================================================================================
		// ... es handelt sich um die Nachricht "get_meterdata.xml"
		if(strcmp(msg->getName(), "getmeterdata") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				getmeterdata_retry++;
				if(getmeterdata_retry > 3)
				{
					bubble("TRAFFIC_JAM");
					getmeterdata_retry = 0;
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   getmeterdata_msg);
				if(getmeterdata_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					getmeterdata_retry = 0;
					if(getmeterdata_msg->isScheduled()) cancelEvent(getmeterdata_msg);
					scheduleAt(simTime()+getmeterdata_freq+variation(),
							getmeterdata_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("getmeterdata");
			// setze die Groesse des Paketes ...
			newPkt->setByteLength(getmeterdata_size);
			if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
							   << " Byte" << endl;
			// plane die naechste Nachricht ein ...
			scheduleAt(simTime()+getmeterdata_freq+variation(), getmeterdata_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << getmeterdata_msg->getArrivalTime() << "s." << endl;
			// sende das Paket ...
			numPkts++;
			send(newPkt, "out");
		}
		//======================================================================================
	}
	if(!msg->isSelfMessage())
	{
		// Eintreffende Nachrichten werden einfach geloescht ...
		delete msg;
	}
}

std::string microKWK::info(){
	std::cout << "moeff"<<endl;
	return "moeff";
//	return new microKWK();
}

void microKWK::getMicroKWK(){
	std::cout << "moep" <<endl;
//	return new microKWK();
}

void microKWK::finish()
{
	if(COMMENTS_ON) EV << this->getClassName() << endl;
	if(COMMENTS_ON) EV << "Number of send packets: " << numPkts << endl;
	if(COMMENTS_ON) EV << "Number of lost packets: " << droppedPkts << endl;
	double lost = 0;
	if (numPkts != 0) lost = (double)droppedPkts/numPkts*100;
	if(COMMENTS_ON) EV << "Loss percentage       : " << lost << "%" << endl;
	//cancelAndDelete(ptrInitTimer);
	//ptrInitTimer = NULL;
	cancelAndDelete(getaggregatorrequest_msg);
	cancelAndDelete(responseCHPdata_msg);
	cancelAndDelete(getweatherforecastdata_msg);
	cancelAndDelete(tarifcomplexdata_msg);
	cancelAndDelete(getmeterdata_msg);
	cancelAndDelete(pktCounter_msg);
}

inline int microKWK::variation()
{
	volatile int x = rand()%variation_value;
	double rtn = (double)x/1000000;
	if(COMMENTS_ON) EV << "Absolute value of variation is " << rtn << "." << endl;
	return rtn;
}
