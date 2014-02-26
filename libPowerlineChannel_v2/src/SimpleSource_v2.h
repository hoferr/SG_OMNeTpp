#ifndef __LIBPOWERLINECHANNEL_SIMPLESOURCE_V2_H_
#define __LIBPOWERLINECHANNEL_SIMPLESOURCE_V2_H_

#include <omnetpp.h>
#include <csimulation.h>

class SimpleSource_v2 : public cSimpleModule
{
  protected:

	cMessage *sendFrame;
	simtime_t intervall;
	int typeOfSource;

	cChannel *myOutputChannel;

    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
};

#endif
