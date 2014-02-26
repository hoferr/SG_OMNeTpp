#include "SimpleSink_v2.h"

Define_Module(SimpleSink_v2);

void SimpleSink_v2::initialize()
{

}

void SimpleSink_v2::handleMessage(cMessage *msg)
{
    delete msg;
}
