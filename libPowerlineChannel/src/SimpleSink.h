#ifndef __LIBPOWERLINECHANNEL_SIMPLESINK_H_
#define __LIBPOWERLINECHANNEL_SIMPLESINK_H_

#include <omnetpp.h>

class SimpleSink : public cSimpleModule
{
  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
};

#endif
