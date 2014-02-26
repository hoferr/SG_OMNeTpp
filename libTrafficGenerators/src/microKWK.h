#ifndef __MICROKWK_H__
#define __MICROKWK_H__

#include <omnetpp.h>

#define COMMENTS_ON	1

class microKWK : public cSimpleModule
{
public:
	microKWK(){};
	~microKWK(){};
	void getMicroKWK();
protected:
	cMessage* ptrInitTimer;
	double messagefreq;

	int variation_value;
	int MTU;
	long int droppedPkts;
	long int numPkts;

	double getaggregatorrequest_freq;
	double responseCHPdata_freq;
	double getweatherforecastdata_freq;
	double tarifcomplexdata_freq;
	double getmeterdata_freq;

	int getaggregatorrequest_size;
	int responseCHPdata_size;
	int getweatherforecastdata_size;
	int tarifcomplexdata_size;
	int getmeterdata_size;

	int getaggregatorrequest_retry;
	int responseCHPdata_retry;
	int getweatherforecastdata_retry;
	int tarifcomplexdata_retry;
	int getmeterdata_retry;

	cMessage * getaggregatorrequest_msg;
	cMessage * responseCHPdata_msg;
	cMessage * getweatherforecastdata_msg;
	cMessage * tarifcomplexdata_msg;
	cMessage * getmeterdata_msg;

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

extern "C" cSimpleModule* createMicroKWK(){
	return new microKWK();
}

extern "C" void destroyMicroKWK(cSimpleModule * csm){
	delete csm;
}

#endif
