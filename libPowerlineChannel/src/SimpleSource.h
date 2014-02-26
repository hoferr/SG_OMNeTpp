#ifndef __LIBPOWERLINECHANNEL_SIMPLESOURCE_H_
#define __LIBPOWERLINECHANNEL_SIMPLESOURCE_H_

#include <omnetpp.h>
#include <csimulation.h>

class SimpleSource : public cSimpleModule
{
  protected:

	cMessage *sendFrame;
	simtime_t intervall;
	int typeOfSource;

    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
};

#endif
