#include "IKT_GW2.h"

Register_Class(IKT_GW2);
Define_Module(IKT_GW2);

void IKT_GW2::initialize()
{
	variation_value = 5000000;			     // prozentuale gleichverteilte Schwankungbreite aller
											 // Paketwiederhohlraten "_freq" in 1/1000000

	MTU = 1460;								 // "Maximum Transfer Unit" fuer den TCP/IP-Layer
	droppedPkts = 0;
	numPkts = 0;
	active = par("active");

	responseaggregatorrequest_freq   = 10;	 // hier sind die Paketwiederhohlraten der einzelnen
	getCHPdata_freq                  = 10;	 // Nachrichten aus den Dokumenten und den eMails abgelegt
	responseweatherforecastdata_freq = 60;
	responsetarifcomplexdata_freq    = 60;
	responsemeterdata_freq           = 60;

	responseaggregatorrequest_size   = 1090; // hier sind die Paketgroessen der einzelnen Nachrichten
	getCHPdata_size                  = 35;   // aus den Dokumenten und den eMails abgelegt
	responseweatherforecastdata_size = 487;
	responsetarifcomplexdata_size    = 9790;
	responsemeterdata_size           = 554;

	responseaggregatorrequest_retry   = 0;	 // Zaehlen der Sendeverschiebeaktionen wegen Kanalbelegung
	getCHPdata_retry                  = 0;
	responseweatherforecastdata_retry = 0;
	responsetarifcomplexdata_retry    = 0;
	responsemeterdata_retry           = 0;

	// hier werden die SelfMessages fuer die einzelnen Nachrichten initialisiert ...
	responseaggregatorrequest_msg   = new cMessage("responseaggregatorrequest");
	getCHPdata_msg                  = new cMessage("getCHPdata");
	responseweatherforecastdata_msg = new cMessage("responseweatherforecastdata");
	responsetarifcomplexdata_msg    = new cMessage("responsetarifcomplexdata");
	responsemeterdata_msg           = new cMessage("responsemeterdata_msg");

	// der Startpunkt des Sendebetriebes fuer jede einzelne Nachricht wird zufaellig ausgewaehlt ...
	int responseaggregatorrequest_startDelay   = rand()%(int)responseaggregatorrequest_freq;
	int getCHPdata_startDelay                  = rand()%(int)getCHPdata_freq;
	int responseweatherforecastdata_startDelay = rand()%(int)responseweatherforecastdata_freq;
	int responsetarifcomplexdata_startDelay    = rand()%(int)responsetarifcomplexdata_freq;
	int responsemeterdata_startDelay           = rand()%(int)responsemeterdata_freq;

	// die SelfMessages werden losgeschickt ...
	if (active)
	{
		scheduleAt(simTime()+responseaggregatorrequest_startDelay,   responseaggregatorrequest_msg);
		scheduleAt(simTime()+getCHPdata_startDelay,                  getCHPdata_msg);
		scheduleAt(simTime()+responseweatherforecastdata_startDelay, responseweatherforecastdata_msg);
		scheduleAt(simTime()+responsetarifcomplexdata_startDelay,    responsetarifcomplexdata_msg);
		scheduleAt(simTime()+responsemeterdata_startDelay,           responsemeterdata_msg);
	}

	// fuer die grosse Nachricht muss eine Fragmentierung eingebaut werden ...
	pktCounter = (getCHPdata_size / MTU);
	pktRest = getCHPdata_size - pktCounter * MTU;
	pktCounter_msg = new cMessage ("pktCounter_msg");
	cGate *myGate =  this->gate("out");
	myOutputChannel = myGate->getChannel();
	if(COMMENTS_ON) EV << "My output channel is a " << myOutputChannel->getClassName() << "." << endl;
}

void IKT_GW2::handleMessage(cMessage *msg)
{
	if(msg->isSelfMessage())
	{
		if(COMMENTS_ON) EV << "SelfMessage <" << msg->getName() << "> received." << endl;

		//======================================================================================
		// ... es handelt sich um die Nachricht "get_aggregatorrequest.xml"
		if(strcmp(msg->getName(), "responseaggregatorrequest") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				responseaggregatorrequest_retry++;
				if(responseaggregatorrequest_retry > 3)
				{
					bubble("TRAFFIC_JAM");
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   responseaggregatorrequest_msg);
				if(responseaggregatorrequest_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					responseaggregatorrequest_retry = 0;
					if(responseaggregatorrequest_msg->isScheduled()) cancelEvent(responseaggregatorrequest_msg);
					scheduleAt(simTime()+responseaggregatorrequest_freq+variation(),
							   responseaggregatorrequest_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("responseaggregatorrequest");
			// setze die Groesse des Paketes ...
			newPkt->setByteLength(responseaggregatorrequest_size);
			if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
					           << " Byte" << endl;
			// plane die naechste Nachricht ein ...
			scheduleAt(simTime()+responseaggregatorrequest_freq+variation(), responseaggregatorrequest_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << responseaggregatorrequest_msg->getArrivalTime() << "s." << endl;
			// sende das Paket ...
			numPkts++;
			send(newPkt, "out");
		}
		//======================================================================================
		// ... es handelt sich um die Nachricht "getCHPdata.xml"
		if(strcmp(msg->getName(), "getCHPdata") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				getCHPdata_retry++;
				if(getCHPdata_retry > 3)
				{
					bubble("TRAFFIC_JAM");
					getCHPdata_retry = 0;
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   getCHPdata_msg);
				if(getCHPdata_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					getCHPdata_retry = 0;
					if(getCHPdata_msg->isScheduled()) cancelEvent(getCHPdata_msg);
					scheduleAt(simTime()+getCHPdata_freq+variation(),
							   getCHPdata_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("getCHPdata");
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
			scheduleAt(simTime()+getCHPdata_freq+variation(), getCHPdata_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << getCHPdata_msg->getArrivalTime() << "s." << endl;
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
				newPkt->setName("getCHPdata");
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
			if (pktCounter <= 0) pktCounter = (getCHPdata_size / MTU);
		}
		//======================================================================================
		// ... es handelt sich um die Nachricht "get_weatherforecastdata.xml"
		if(strcmp(msg->getName(), "responseweatherforecastdata") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				responseweatherforecastdata_retry++;
				if(responseweatherforecastdata_retry > 3)
				{
					bubble("TRAFFIC_JAM");
					responseweatherforecastdata_retry = 0;
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   responseweatherforecastdata_msg);
				if(responseweatherforecastdata_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					responseweatherforecastdata_retry = 0;
					if(responseweatherforecastdata_msg->isScheduled()) cancelEvent(responseweatherforecastdata_msg);
					scheduleAt(simTime()+responseweatherforecastdata_freq+variation(),
							   responseweatherforecastdata_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("responseweatherforecastdata");
			// setze die Groesse des Paketes ...
			newPkt->setByteLength(responseweatherforecastdata_size);
			if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
							   << " Byte" << endl;
			// plane die naechste Nachricht ein ...
			scheduleAt(simTime()+responseweatherforecastdata_freq+variation(), responseweatherforecastdata_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << responseweatherforecastdata_msg->getArrivalTime() << "s." << endl;
			// sende das Paket ...
			numPkts++;
			send(newPkt, "out");
		}
		//======================================================================================
		// ... es handelt sich um die Nachricht "tarifcomplexdata.xml"
		if(strcmp(msg->getName(), "responsetarifcomplexdata") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				responsetarifcomplexdata_retry++;
				if(responsetarifcomplexdata_retry > 3)
				{
					bubble("TRAFFIC_JAM");
					responsetarifcomplexdata_retry = 0;
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   responsetarifcomplexdata_msg);
				if(responsetarifcomplexdata_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					responsetarifcomplexdata_retry = 0;
					if(responsetarifcomplexdata_msg->isScheduled()) cancelEvent(responsetarifcomplexdata_msg);
					scheduleAt(simTime()+responsetarifcomplexdata_freq+variation(),
							   responsetarifcomplexdata_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("tarifcomplexdata");
			// setze die Groesse des Paketes ...
			newPkt->setByteLength(responsetarifcomplexdata_size);
			if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
							   << " Byte" << endl;
			// plane die naechste Nachricht ein ...
			scheduleAt(simTime()+responsetarifcomplexdata_freq+variation(), responsetarifcomplexdata_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << responsetarifcomplexdata_msg->getArrivalTime() << "s." << endl;
			// sende das Paket ...
			numPkts++;
			send(newPkt, "out");
		}
		//======================================================================================
		// ... es handelt sich um die Nachricht "get_meterdata.xml"
		if(strcmp(msg->getName(), "responsemeterdata") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				responsemeterdata_retry++;
				if(responsemeterdata_retry > 3)
				{
					bubble("TRAFFIC_JAM");
					responsemeterdata_retry = 0;
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   responsemeterdata_msg);
				if(responsemeterdata_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					responsemeterdata_retry = 0;
					if(responsemeterdata_msg->isScheduled()) cancelEvent(responsemeterdata_msg);
					scheduleAt(simTime()+responsemeterdata_freq+variation(),
							responsemeterdata_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("responsemeterdata");
			// setze die Groesse des Paketes ...
			newPkt->setByteLength(responsemeterdata_size);
			if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
							   << " Byte" << endl;
			// plane die naechste Nachricht ein ...
			scheduleAt(simTime()+responsemeterdata_freq+variation(), responsemeterdata_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << responsemeterdata_msg->getArrivalTime() << "s." << endl;
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

std::string IKT_GW2::info(){
	std::cout << "moeff"<<endl;
	return "moeff";
//	return new IKT_GW2();
}

void IKT_GW2::getIKT_GW2(){
	std::cout << "moep" <<endl;
//	return new IKT_GW2();
}

void IKT_GW2::finish()
{
	if(COMMENTS_ON && numPkts != 0) EV << this->getClassName()  << "::"  << this->getFullName() << endl;
	if(COMMENTS_ON && numPkts != 0) EV << "Number of send packets: " << numPkts << endl;
	if(COMMENTS_ON && numPkts != 0) EV << "Number of lost packets: " << droppedPkts << endl;
	double lost = 0;
	if (numPkts != 0) lost = (double)droppedPkts/numPkts*100;
	if(COMMENTS_ON && numPkts != 0) EV << "Loss percentage       : " << lost << "%" << endl;
	//cancelAndDelete(ptrInitTimer);
	//ptrInitTimer = NULL;
	cancelAndDelete(responseaggregatorrequest_msg);
	cancelAndDelete(getCHPdata_msg);
	cancelAndDelete(responseweatherforecastdata_msg);
	cancelAndDelete(responsetarifcomplexdata_msg);
	cancelAndDelete(responsemeterdata_msg);
	cancelAndDelete(pktCounter_msg);
}

inline int IKT_GW2::variation()
{
	volatile int x = rand()%variation_value;
	double rtn = (double)x/1000000;
	if(COMMENTS_ON) EV << "Absolute value of variation is " << rtn << "." << endl;
	return rtn;
}
