#ifndef __LIBPOWERLINECHANNEL_IKT_GW2_H_
#define __LIBPOWERLINECHANNEL_IKT_GW2_H_

#include <omnetpp.h>

#define COMMENTS_ON	1

class IKT_GW2 : public cSimpleModule
{
public:
	IKT_GW2(){};
	~IKT_GW2(){};
	void getIKT_GW2();
protected:
	cMessage* ptrInitTimer;
	double messagefreq;

	bool active;
	int variation_value;
	int MTU;
	long int droppedPkts;
	long int numPkts;

	double responseaggregatorrequest_freq;
	double getCHPdata_freq;
	double responseweatherforecastdata_freq;
	double responsetarifcomplexdata_freq;
	double responsemeterdata_freq;

	int responseaggregatorrequest_size;
	int getCHPdata_size;
	int responseweatherforecastdata_size;
	int responsetarifcomplexdata_size;
	int responsemeterdata_size;

	int responseaggregatorrequest_retry;
	int getCHPdata_retry;
	int responseweatherforecastdata_retry;
	int responsetarifcomplexdata_retry;
	int responsemeterdata_retry;

	cMessage * responseaggregatorrequest_msg;
	cMessage * getCHPdata_msg;
	cMessage * responseweatherforecastdata_msg;
	cMessage * responsetarifcomplexdata_msg;
	cMessage * responsemeterdata_msg;

	int pktCounter;
	int pktRest;
	cMessage * pktCounter_msg;
	cChannel * myOutputChannel;

	double sim_limit;
    virtual void initialize();
    virtual void handleMessage(cMessage *msg);
    virtual void finish();
    std::string info();
    virtual inline int variation();
	enum {IDLE=0, TRANSMIT=1, WAITACK=2,WAITSEND=3} state;
};

extern "C" cSimpleModule* createIKT_GW2(){
	return new IKT_GW2();
}

extern "C" void destroyIKT_GW2(cSimpleModule * csm){
	delete csm;
}

#endif
