#include "Waeschetrockner.h"

Register_Class(Waeschetrockner);
Define_Module(Waeschetrockner);

void Waeschetrockner::initialize()
{
	variation_value = 5000000;			    // prozentuale gleichverteilte Schwankungbreite aller
											// Paketwiederhohlraten "_freq" in 1/1000000

	MTU = 1460;								// "Maximum Transfer Unit" fuer den TCP/IP-Layer
	droppedPkts = 0;
	numPkts = 0;

	messageConnection_freq     = 604800;    // hier sind die Paketwiederhohlraten der einzelnen
	messageDeviceOff_freq      = 43200;    	// Nachrichten aus den Dokumenten und den eMails abgelegt
	messageStandby_freq        = 43200;
	messageOperating_freq      = 43200;
	messageDeviceError_freq    = 604800;

	messageConnection_size     = 3000;		// hier sind die Paketgroessen der einzelnen Nachrichten
	messageDeviceOff_size      = 1000;		// aus den Dokumenten und den eMails abgelegt
	messageStandby_size        = 1000;
	messageOperating_size      = 2000;
	messageDeviceError_size    = 10000;

	messageConnection_retry    = 0;		    // Zaehlen der Sendeverschiebeaktionen wegen Kanalbelegung
	messageDeviceOff_retry     = 0;
	messageStandby_retry       = 0;
	messageOperating_retry     = 0;
	messageDeviceError_retry   = 0;

	// hier werden die SelfMessages fuer die einzelnen Nachrichten initialisiert ...
	messageConnection_msg  = new cMessage("messageConnection");
	messageDeviceOff_msg   = new cMessage("messageDeviceOff");
	messageStandby_msg     = new cMessage("messageStandby");
	messageOperating_msg   = new cMessage("messageOperating");
	messageDeviceError_msg = new cMessage("messageDeviceError_msg");

	// der Startpunkt des Sendebetriebes fuer jede einzelne Nachricht wird zufaellig ausgewaehlt ...
	int messageConnection_startDelay   = rand()%(int)messageConnection_freq;
	int messageDeviceOff_startDelay    = rand()%(int)messageDeviceOff_freq;
	int messageStandby_startDelay      = rand()%(int)messageStandby_freq;
	int messageOperating_startDelay    = rand()%(int)messageOperating_freq;
	int messageDeviceError_startDelay  = rand()%(int)messageDeviceError_freq;

	// die SelfMessages werden losgeschickt ...
	scheduleAt(simTime()+messageConnection_startDelay,  messageConnection_msg);
	scheduleAt(simTime()+messageDeviceOff_startDelay,   messageDeviceOff_msg);
	scheduleAt(simTime()+messageStandby_startDelay,     messageStandby_msg);
	scheduleAt(simTime()+messageOperating_startDelay,   messageOperating_msg);
	scheduleAt(simTime()+messageDeviceError_startDelay, messageDeviceError_msg);

	// fuer die grossen Nachrichten muss eine Fragmentierung eingebaut werden ...
	pktCounter_1     = (messageConnection_size / MTU);
	pktRest_1        = messageConnection_size - pktCounter_1 * MTU;
	pktCounter_msg_1 = new cMessage ("pktCounter_msg_1");

	pktCounter_2     = (messageOperating_size / MTU);
	pktRest_2        = messageOperating_size - pktCounter_2 * MTU;
	pktCounter_msg_2 = new cMessage ("pktCounter_msg_2");

	pktCounter_3     = (messageDeviceError_size / MTU);
	pktRest_3        = messageDeviceError_size - pktCounter_3 * MTU;
	pktCounter_msg_3 = new cMessage ("pktCounter_msg_3");

	cGate *myGate =  this->gate("out");
	myOutputChannel = myGate->getChannel();
	if(COMMENTS_ON) EV << "My output channel is a " << myOutputChannel->getClassName() << "." << endl;
}

void Waeschetrockner::handleMessage(cMessage *msg)
{
	if(msg->isSelfMessage())
	{
		if(COMMENTS_ON) EV << "SelfMessage <" << msg->getName() << "> received." << endl;

		//======================================================================================
		// ... es handelt sich um die Nachricht "messageConnection.xml"
		if(strcmp(msg->getName(), "messageConnection") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				messageConnection_retry++;
				if(messageConnection_retry > 3)
				{
					bubble("TRAFFIC_JAM");
					messageConnection_retry = 0;
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						messageConnection_msg);
				if(messageConnection_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					messageConnection_retry = 0;
					if(messageConnection_msg->isScheduled()) cancelEvent(messageConnection_msg);
					scheduleAt(simTime()+messageConnection_freq+variation(),
							   messageConnection_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("messageConnection");
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
			if (pktCounter_msg_1->isScheduled()) cancelEvent(pktCounter_msg_1);
			scheduleAt(channelFreeAgain, pktCounter_msg_1);
			scheduleAt(simTime()+messageConnection_freq+variation(), messageConnection_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << messageConnection_msg->getArrivalTime() << "s." << endl;
		}
		if(strcmp(msg->getName(), "pktCounter_msg_1") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				if (pktCounter_msg_1->isScheduled()) cancelEvent(pktCounter_msg_1);
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   pktCounter_msg_1);
				return;
			}
			pktCounter_1--;
			if(COMMENTS_ON) EV << "Fragmentation counter is a " << pktCounter_1 << "." << endl;
			if (pktCounter_1 >= 0)
			{
				// erzeuge ein neues Paket ...
				cPacket *newPkt = new cPacket();
				// setze den Paketnamen ein ...
				newPkt->setName("messageConnection");
				// setze die Groesse des Paketes ...
				if(pktCounter_1 >  0) newPkt->setByteLength(MTU);
				if(pktCounter_1 == 0) newPkt->setByteLength(pktRest_1);
				if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
								   << " Byte" << endl;
				// sende das Paket ...
				numPkts++;
				send(newPkt, "out");
				// plane die naechste Nachricht ein ...
				double channelFreeAgain = (myOutputChannel->getTransmissionFinishTime()).dbl();
				if(COMMENTS_ON) EV << "Channel is free again at " << channelFreeAgain << "s." << endl;
				if (pktCounter_1 >= 1)
				{
					if (pktCounter_msg_1->isScheduled()) cancelEvent(pktCounter_msg_1);
					scheduleAt(channelFreeAgain, pktCounter_msg_1);
				}
			}
			if (pktCounter_1 <= 0) pktCounter_1 = (messageConnection_size / MTU);
		}
		//======================================================================================
		// ... es handelt sich um die Nachricht "messageDeviceOff.xml"
		if(strcmp(msg->getName(), "messageDeviceOff") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				messageDeviceOff_retry++;
				if(messageDeviceOff_retry > 3)
				{
					bubble("TRAFFIC_JAM");
					messageDeviceOff_retry = 0;
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   messageDeviceOff_msg);
				if(messageDeviceOff_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					messageDeviceOff_retry = 0;
					if(messageDeviceOff_msg->isScheduled()) cancelEvent(messageDeviceOff_msg);
					scheduleAt(simTime()+messageDeviceOff_freq+variation(),
							messageDeviceOff_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("messageDeviceOff");
			// setze die Groesse des Paketes ...
			newPkt->setByteLength(messageDeviceOff_size);
			if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
							   << " Byte" << endl;
			// plane die naechste Nachricht ein ...
			scheduleAt(simTime()+messageDeviceOff_freq+variation(), messageDeviceOff_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << messageDeviceOff_msg->getArrivalTime() << "s." << endl;
			// sende das Paket ...
			numPkts++;
			send(newPkt, "out");
		}
		//======================================================================================
		// ... es handelt sich um die Nachricht "messageStandby.xml"
		if(strcmp(msg->getName(), "messageStandby") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				messageStandby_retry++;
				if(messageStandby_retry > 3)
				{
					bubble("TRAFFIC_JAM");
					messageStandby_retry = 0;
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   messageStandby_msg);
				if(messageStandby_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					messageStandby_retry = 0;
					if(messageStandby_msg->isScheduled()) cancelEvent(messageStandby_msg);
					scheduleAt(simTime()+messageStandby_freq+variation(),
							   messageStandby_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("messageStandby");
			// setze die Groesse des Paketes ...
			newPkt->setByteLength(messageStandby_size);
			if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
							   << " Byte" << endl;
			// plane die naechste Nachricht ein ...
			scheduleAt(simTime()+messageStandby_freq+variation(), messageStandby_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << messageStandby_msg->getArrivalTime() << "s." << endl;
			// sende das Paket ...
			numPkts++;
			send(newPkt, "out");
		}
		//======================================================================================
		// ... es handelt sich um die Nachricht "messageOperating.xml"
		if(strcmp(msg->getName(), "messageOperating") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				messageOperating_retry++;
				if(messageOperating_retry > 3)
				{
					bubble("TRAFFIC_JAM");
					messageOperating_retry = 0;
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						messageOperating_msg);
				if(messageOperating_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					messageOperating_retry = 0;
					if(messageOperating_msg->isScheduled()) cancelEvent(messageOperating_msg);
					scheduleAt(simTime()+messageOperating_freq+variation(),
							   messageOperating_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("messageOperating");
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
			if (pktCounter_msg_2->isScheduled()) cancelEvent(pktCounter_msg_2);
			scheduleAt(channelFreeAgain, pktCounter_msg_2);
			scheduleAt(simTime()+messageOperating_freq+variation(), messageOperating_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << messageOperating_msg->getArrivalTime() << "s." << endl;
		}
		if(strcmp(msg->getName(), "pktCounter_msg_2") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				if (pktCounter_msg_2->isScheduled()) cancelEvent(pktCounter_msg_2);
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   pktCounter_msg_2);
				return;
			}
			pktCounter_2--;
			if(COMMENTS_ON) EV << "Fragmentation counter is a " << pktCounter_2 << "." << endl;
			if (pktCounter_2 >= 0)
			{
				// erzeuge ein neues Paket ...
				cPacket *newPkt = new cPacket();
				// setze den Paketnamen ein ...
				newPkt->setName("messageConnection");
				// setze die Groesse des Paketes ...
				if(pktCounter_2 >  0) newPkt->setByteLength(MTU);
				if(pktCounter_2 == 0) newPkt->setByteLength(pktRest_2);
				if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
								   << " Byte" << endl;
				// sende das Paket ...
				numPkts++;
				send(newPkt, "out");
				// plane die naechste Nachricht ein ...
				double channelFreeAgain = (myOutputChannel->getTransmissionFinishTime()).dbl();
				if(COMMENTS_ON) EV << "Channel is free again at " << channelFreeAgain << "s." << endl;
				if (pktCounter_2 >= 1)
				{
					if (pktCounter_msg_2->isScheduled()) cancelEvent(pktCounter_msg_2);
					scheduleAt(channelFreeAgain, pktCounter_msg_2);
				}
			}
			if (pktCounter_2 <= 0) pktCounter_2 = (messageOperating_size / MTU);
		}
		//======================================================================================
		// ... es handelt sich um die Nachricht "messageDeviceError.xml"
		if(strcmp(msg->getName(), "messageDeviceError") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				messageDeviceError_retry++;
				if(messageDeviceError_retry > 3)
				{
					bubble("TRAFFIC_JAM");
					messageDeviceError_retry = 0;
				}
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						messageDeviceError_msg);
				if(messageDeviceError_retry > 5)
				{
					bubble("DROPPING_PAKT");
					droppedPkts++;
					messageDeviceError_retry = 0;
					if(messageDeviceError_msg->isScheduled()) cancelEvent(messageDeviceError_msg);
					scheduleAt(simTime()+messageDeviceError_freq+variation(),
							   messageDeviceError_msg);
				}
				return;
			}
			// erzeuge ein neues Paket ...
			cPacket *newPkt = new cPacket();
			// setze den Paketnamen ein ...
			newPkt->setName("messageDeviceError");
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
			if (pktCounter_msg_3->isScheduled()) cancelEvent(pktCounter_msg_3);
			scheduleAt(channelFreeAgain, pktCounter_msg_3);
			scheduleAt(simTime()+messageDeviceError_freq+variation(), messageDeviceError_msg);
			if(COMMENTS_ON) EV << "Next <" << msg->getName() << "> is scheduled for "
							   << messageDeviceError_msg->getArrivalTime() << "s." << endl;
		}
		if(strcmp(msg->getName(), "pktCounter_msg_3") == 0)
		{
			if (myOutputChannel->isBusy())
			{
				if (pktCounter_msg_3->isScheduled()) cancelEvent(pktCounter_msg_3);
				scheduleAt(myOutputChannel->getTransmissionFinishTime()+variation(),
						   pktCounter_msg_3);
				return;
			}
			pktCounter_3--;
			if(COMMENTS_ON) EV << "Fragmentation counter is a " << pktCounter_3 << "." << endl;
			if (pktCounter_3 >= 0)
			{
				// erzeuge ein neues Paket ...
				cPacket *newPkt = new cPacket();
				// setze den Paketnamen ein ...
				newPkt->setName("messageDeviceError");
				// setze die Groesse des Paketes ...
				if(pktCounter_3 >  0) newPkt->setByteLength(MTU);
				if(pktCounter_3 == 0) newPkt->setByteLength(pktRest_3);
				if(COMMENTS_ON) EV << "... sending a cPacket with a size of " << newPkt->getByteLength()
								   << " Byte" << endl;
				// sende das Paket ...
				numPkts++;
				send(newPkt, "out");
				// plane die naechste Nachricht ein ...
				double channelFreeAgain = (myOutputChannel->getTransmissionFinishTime()).dbl();
				if(COMMENTS_ON) EV << "Channel is free again at " << channelFreeAgain << "s." << endl;
				if (pktCounter_3 >= 1)
				{
					if (pktCounter_msg_3->isScheduled()) cancelEvent(pktCounter_msg_3);
					scheduleAt(channelFreeAgain, pktCounter_msg_3);
				}
			}
			if (pktCounter_3 <= 0) pktCounter_3 = (messageDeviceError_size / MTU);
		}
		//======================================================================================
	}
	if(!msg->isSelfMessage())
	{
		// Eintreffende Nachrichten werden einfach geloescht ...
		delete msg;
	}
}

std::string Waeschetrockner::info(){
	std::cout << "moeff"<<endl;
	return "moeff";
//	return new Waeschetrockner();
}

void Waeschetrockner::getWaeschetrockner(){
	std::cout << "moep" <<endl;
//	return new Waeschetrockner();
}

void Waeschetrockner::finish()
{
	if(COMMENTS_ON && numPkts != 0) EV << this->getClassName()  << "::"  << this->getFullName() << endl;
	if(COMMENTS_ON) EV << "Number of send packets: " << numPkts << endl;
	if(COMMENTS_ON) EV << "Number of lost packets: " << droppedPkts << endl;
	double lost = 0;
	if (numPkts != 0) lost = (double)droppedPkts/numPkts*100;
	if(COMMENTS_ON) EV << "Loss percentage       : " << lost << "%" << endl;
	//cancelAndDelete(ptrInitTimer);
	//ptrInitTimer = NULL;
	cancelAndDelete(messageConnection_msg);
	cancelAndDelete(messageDeviceOff_msg);
	cancelAndDelete(messageStandby_msg);
	cancelAndDelete(messageOperating_msg);
	cancelAndDelete(messageDeviceError_msg);
	cancelAndDelete(pktCounter_msg_1);
	cancelAndDelete(pktCounter_msg_2);
	cancelAndDelete(pktCounter_msg_3);
}

inline int Waeschetrockner::variation()
{
	volatile int x = rand()%variation_value;
	double rtn = (double)x/1000000;
	if(COMMENTS_ON) EV << "Absolute value of variation is " << rtn << "." << endl;
	return rtn;
}

