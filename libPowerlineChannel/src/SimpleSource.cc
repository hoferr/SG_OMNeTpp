#include "SimpleSource.h"

Define_Module(SimpleSource);

void SimpleSource::initialize()
{
    intervall = par("intervall");
    typeOfSource = par("typeOfSource");
    sendFrame = new cMessage ("SEND");
    scheduleAt(simTime()+5.0, sendFrame);
}

void SimpleSource::handleMessage(cMessage *msg)
{
	int packetSize = 0;
	if (typeOfSource == 0) packetSize = rand()%225;
	if (typeOfSource == 1) packetSize = rand()%1500;
	cPacket *newPacket = new cPacket("FRAME");
	newPacket->setByteLength(packetSize);

	send(newPacket, "out");
	scheduleAt(simTime()+intervall, sendFrame);
}
