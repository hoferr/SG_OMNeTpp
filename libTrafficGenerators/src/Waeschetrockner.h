#ifndef __LIBTRAFFICGENERATORS_WAESCHETROCKNER_H_
#define __LIBTRAFFICGENERATORS_WAESCHETROCKNER_H_

#include <omnetpp.h>

#define COMMENTS_ON	1

class Waeschetrockner : public cSimpleModule
{
public:
	Waeschetrockner(){};
	~Waeschetrockner(){};
	void getWaeschetrockner();
protected:
	cMessage* ptrInitTimer;
	double messagefreq;

	int variation_value;
	int MTU;
	long int droppedPkts;
	long int numPkts;

	double messageConnection_freq;
	double messageDeviceOff_freq;
	double messageStandby_freq;
	double messageOperating_freq;
	double messageDeviceError_freq;

	int messageConnection_size;
	int messageDeviceOff_size;
	int messageStandby_size;
	int messageOperating_size;
	int messageDeviceError_size;

	int messageConnection_retry;
	int messageDeviceOff_retry;
	int messageStandby_retry;
	int messageOperating_retry;
	int messageDeviceError_retry;

	cMessage * messageConnection_msg;
	cMessage * messageDeviceOff_msg;
	cMessage * messageStandby_msg;
	cMessage * messageOperating_msg;
	cMessage * messageDeviceError_msg;

	int pktCounter_1;
	int pktRest_1;
	cMessage * pktCounter_msg_1;

	int pktCounter_2;
	int pktRest_2;
	cMessage * pktCounter_msg_2;

	int pktCounter_3;
	int pktRest_3;
	cMessage * pktCounter_msg_3;

	cChannel * myOutputChannel;

	double sim_limit;
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void finish();
    std::string info();
    virtual inline int variation();
	enum {IDLE=0, TRANSMIT=1, WAITACK=2,WAITSEND=3} state;
};

extern "C" cSimpleModule* createWaeschetrockner(){
	return new Waeschetrockner();
}

extern "C" void destroyWaeschetrockner(cSimpleModule * csm){
	delete csm;
}

#endif




