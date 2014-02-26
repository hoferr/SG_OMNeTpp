#ifndef __LIBPOWERLINECHANNEL_SIMPLESINK_V2_H_
#define __LIBPOWERLINECHANNEL_SIMPLESINK_V2_H_

#include <omnetpp.h>

class SimpleSink_v2 : public cSimpleModule
{
  protected:
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
};

#endif
