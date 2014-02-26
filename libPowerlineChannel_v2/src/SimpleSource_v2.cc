#include "SimpleSource_v2.h"

Define_Module(SimpleSource_v2);

void SimpleSource_v2::initialize()
{
    intervall = par("intervall");
    typeOfSource = par("typeOfSource");
    sendFrame = new cMessage ("SEND");
    scheduleAt(simTime()+5.0, sendFrame);

    cGate *myGate =  this->gate("out");
    myOutputChannel = myGate->getChannel();
}

void SimpleSource_v2::handleMessage(cMessage *msg)
{
	int packetSize = 0;
	if (typeOfSource == 0) packetSize = rand()%255;
	if (typeOfSource == 1) packetSize = rand()%1500;
	cPacket *newPacket = new cPacket("FRAME");
	newPacket->setByteLength(packetSize);

	send(newPacket, "out");

	simtime_t freeAgain = myOutputChannel->getTransmissionFinishTime();
	scheduleAt(freeAgain, sendFrame);
}
