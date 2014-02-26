#include "SimpleSink.h"

Define_Module(SimpleSink);

void SimpleSink::initialize()
{

}

void SimpleSink::handleMessage(cMessage *msg)
{
    delete msg;
}
