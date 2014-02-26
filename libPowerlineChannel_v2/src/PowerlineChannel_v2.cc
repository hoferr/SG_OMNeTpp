// Lehrstuhl fuer Energietransport und -speicherung
// UNIVERSITAET DUISBURG-ESSEN
//
// ef.Ruhr E-DeMa AP-2
//
// Wissenschaftlicher Mitarbeiter:
// Dipl.-Ing. Holger Kellerbauer
//
// Das Linklayer-Paket "powerline" umfasst eine Sammlung von Modulen, die zur Simulation von Powerline-
// Uebertragungsstrecken in intelligenten Energieverteilsystemen programmiert worden sind.
//
// Dieser Quellcode wurde erstellt von Dipl.-Ing. Holger Kellerbauer - er basiert auf dem INET Framework-Modul
// "Linklayer/Ethernet" von Andras Varga (c) 2003. Er ist gesitiges Eigentum des Lehrstuhles fuer Energietransport
// und -speicherung der Universitaet Duisburg-Essen, und darf ohne Genehmigung weder weitergegeben, noch verwendet
// werden.

#include "PowerlineChannel_v2.h"

#ifdef WITH_PARSIM
#include <ccommbuffer.h>
#endif

using std::ostream;

Register_Class(PowerlineChannel_v2)
Define_Channel(PowerlineChannel_v2)

PowerlineChannel_v2::PowerlineChannel_v2(const char *name) :
	cDatarateChannel(name) {
}

PowerlineChannel_v2::~PowerlineChannel_v2()
{
	if(COMMENTS_ON) EV << "Destructor is called." << endl;
}

PowerlineChannel_v2* PowerlineChannel_v2::create(const char *name)
{
	return dynamic_cast<PowerlineChannel_v2*>(cDatarateChannel::create(name));
}

void PowerlineChannel_v2::initialize()
{
	if(simTime() < 1 && COMMENTS_ON) EV << "initialize() is called." << endl;
	if(simTime() < 1) cChannel::initialize();

	// 1. Lesen der Parameter aus dem .ned-File ...

	if(simTime() < 1) typeOfChannel = par("typeOfChannel");

	if(typeOfChannel == 0)							 // Wenn es ein PLC-System ist ...
	{
		PLCdelay16  = par("PLCdelay16");		     // Uebergabe der Parameter in ms (avg)
		PLCdelay32  = par("PLCdelay32");
		PLCdelay64  = par("PLCdelay64");
		PLCdelay128 = par("PLCdelay128");
		PLCdelay220 = par("PLCdelay220");

		PLCdelay16_MAX  = par("PLCdelay16_MAX");	 // Uebergabe der Parameter in ms (max)
		PLCdelay32_MAX  = par("PLCdelay32_MAX");
		PLCdelay64_MAX  = par("PLCdelay64_MAX");
		PLCdelay128_MAX = par("PLCdelay128_MAX");
		PLCdelay220_MAX = par("PLCdelay220_MAX");

		PLCdelay16_ROBO  = par("PLCdelay16_ROBO");	 // Uebergabe der Parameter in ms (ROBO)
		PLCdelay32_ROBO  = par("PLCdelay32_ROBO");
		PLCdelay64_ROBO  = par("PLCdelay64_ROBO");
		PLCdelay128_ROBO = par("PLCdelay128_ROBO");
		PLCdelay220_ROBO = par("PLCdelay220_ROBO");

		BPLCdelay64   = 0;							 // Ueberschreiben der unnoetigen Werte
		BPLCdelay128  = 0;
		BPLCdelay256  = 0;
		BPLCdelay512  = 0;
		BPLCdelay1024 = 0;

		BPLCdelay64_MAX   = 0;						 // Ueberschreiben der unnoetigen Werte
		BPLCdelay128_MAX  = 0;
		BPLCdelay256_MAX  = 0;
		BPLCdelay512_MAX  = 0;
		BPLCdelay1024_MAX = 0;

		BPLCdelay64_ROBO   = 0;					     // Ueberschreiben der unnoetigen Werte
		BPLCdelay128_ROBO  = 0;
		BPLCdelay256_ROBO  = 0;
		BPLCdelay512_ROBO  = 0;
		BPLCdelay1024_ROBO = 0;
	}

	if(typeOfChannel == 1)							 // Wenn es ein BPLC-System ist ...
	{
		BPLCdelay64   = par("BPLCdelay64");		     // Uebergabe der Parameter in us (avg)
		BPLCdelay128  = par("BPLCdelay128");
		BPLCdelay256  = par("BPLCdelay256");
		BPLCdelay512  = par("BPLCdelay512");
		BPLCdelay1024 = par("BPLCdelay1024");

		BPLCdelay64_MAX   = par("BPLCdelay64_MAX");	 // Uebergabe der Parameter in us (max)
		BPLCdelay128_MAX  = par("BPLCdelay128_MAX");
		BPLCdelay256_MAX  = par("BPLCdelay256_MAX");
		BPLCdelay512_MAX  = par("BPLCdelay512_MAX");
		BPLCdelay1024_MAX = par("BPLCdelay1024_MAX");

		BPLCdelay64_ROBO   = par("BPLCdelay64_ROBO");// Uebergabe der Parameter in us (ROBO)
		BPLCdelay128_ROBO  = par("BPLCdelay128_ROBO");
		BPLCdelay256_ROBO  = par("BPLCdelay256_ROBO");
		BPLCdelay512_ROBO  = par("BPLCdelay512_ROBO");
		BPLCdelay1024_ROBO = par("BPLCdelay1024_ROBO");

		PLCdelay16  = 0;							 // Ueberschreiben der unnoetigen Werte
		PLCdelay32  = 0;
		PLCdelay64  = 0;
		PLCdelay128 = 0;
		PLCdelay220 = 0;

		PLCdelay16_MAX  = 0;					     // Ueberschreiben der unnoetigen Werte
		PLCdelay32_MAX  = 0;
		PLCdelay64_MAX  = 0;
		PLCdelay128_MAX = 0;
		PLCdelay220_MAX = 0;

		PLCdelay16_ROBO  = 0;					     // Ueberschreiben der unnoetigen Werte
		PLCdelay32_ROBO  = 0;
		PLCdelay64_ROBO  = 0;
		PLCdelay128_ROBO = 0;
		PLCdelay220_ROBO = 0;
	}

	BPLCdelay64_d   = 0;							 // Definiertes Setzen der Parameter
	BPLCdelay128_d  = 0;
	BPLCdelay256_d  = 0;
	BPLCdelay512_d  = 0;
	BPLCdelay1024_d = 0;

	BPLCdelay64_MAX_d   = 0;
	BPLCdelay128_MAX_d  = 0;
	BPLCdelay256_MAX_d  = 0;
	BPLCdelay512_MAX_d  = 0;
	BPLCdelay1024_MAX_d = 0;

	BPLCdelay64_ROBO_d   = 0;
	BPLCdelay128_ROBO_d  = 0;
	BPLCdelay256_ROBO_d  = 0;
	BPLCdelay512_ROBO_d  = 0;
	BPLCdelay1024_ROBO_d = 0;

	PLCdelay16_d  = 0;
	PLCdelay32_d  = 0;
	PLCdelay64_d  = 0;
	PLCdelay128_d = 0;
	PLCdelay220_d = 0;

	PLCdelay16_MAX_d  = 0;
	PLCdelay32_MAX_d  = 0;
	PLCdelay64_MAX_d  = 0;
	PLCdelay128_MAX_d = 0;
	PLCdelay220_MAX_d = 0;

	PLCdelay16_ROBO_d  = 0;
	PLCdelay32_ROBO_d  = 0;
	PLCdelay64_ROBO_d  = 0;
	PLCdelay128_ROBO_d = 0;
	PLCdelay220_ROBO_d = 0;

	if(simTime() < 1) msgCounterPLC16  = 0;
	if(simTime() < 1) msgCounterPLC32  = 0;
	if(simTime() < 1) msgCounterPLC64  = 0;
	if(simTime() < 1) msgCounterPLC128 = 0;
	if(simTime() < 1) msgCounterPLC220 = 0;

	if(simTime() < 1) msgCounterPLCAll = 0;

	if(simTime() < 1) msgCounterBPLC64   = 0;
	if(simTime() < 1) msgCounterBPLC128  = 0;
	if(simTime() < 1) msgCounterBPLC256  = 0;
	if(simTime() < 1) msgCounterBPLC512  = 0;
	if(simTime() < 1) msgCounterBPLC1024 = 0;

	if(simTime() < 1) msgCounterBPLCAll  = 0;

	if(simTime() < 1) avg_PLCdelay16  = 0;
	if(simTime() < 1) avg_PLCdelay32  = 0;
	if(simTime() < 1) avg_PLCdelay64  = 0;
	if(simTime() < 1) avg_PLCdelay128 = 0;
	if(simTime() < 1) avg_PLCdelay220 = 0;

	if(simTime() < 1) avg_PLCdelayAll = 0;

	if(simTime() < 1) avg_BPLCdelay64   = 0;
	if(simTime() < 1) avg_BPLCdelay128  = 0;
	if(simTime() < 1) avg_BPLCdelay256  = 0;
	if(simTime() < 1) avg_BPLCdelay512  = 0;
	if(simTime() < 1) avg_BPLCdelay1024 = 0;

	if(simTime() < 1) avg_BPLCdelayAll  = 0;

	if(simTime() < 1) min_PLCdelay16    = 0;
	if(simTime() < 1) min_PLCdelay32    = 0;
	if(simTime() < 1) min_PLCdelay64    = 0;
	if(simTime() < 1) min_PLCdelay128   = 0;
	if(simTime() < 1) min_PLCdelay220   = 0;
	if(simTime() < 1) min_BPLCdelay64   = 0;
	if(simTime() < 1) min_BPLCdelay128  = 0;
	if(simTime() < 1) min_BPLCdelay256  = 0;
	if(simTime() < 1) min_BPLCdelay512  = 0;
	if(simTime() < 1) min_BPLCdelay1024 = 0;

	if(simTime() < 1) max_PLCdelay16    = 0;
	if(simTime() < 1) max_PLCdelay32    = 0;
	if(simTime() < 1) max_PLCdelay64    = 0;
	if(simTime() < 1) max_PLCdelay128   = 0;
	if(simTime() < 1) max_PLCdelay220   = 0;
	if(simTime() < 1) max_BPLCdelay64   = 0;
	if(simTime() < 1) max_BPLCdelay128  = 0;
	if(simTime() < 1) max_BPLCdelay256  = 0;
	if(simTime() < 1) max_BPLCdelay512  = 0;
	if(simTime() < 1) max_BPLCdelay1024 = 0;

	myPER = par("myPER");
	if(simTime() < 1) messageCounter = 0;

	double multiplier = 0;
	if(typeOfChannel == 0) multiplier = 1000;    // Umrechnung auf ms
	if(typeOfChannel == 1) multiplier = 1000000; // Umrechnung auf us

	// 2. Umsetzung der Variablen auf die Standardeinheit "Sekunde" ...

	if(typeOfChannel == 0) // Fuer PLC-Kanaele
	{
		PLCdelay16_d  = (double) PLCdelay16  / multiplier;
		PLCdelay32_d  = (double) PLCdelay32  / multiplier;
		PLCdelay64_d  = (double) PLCdelay64  / multiplier;
		PLCdelay128_d = (double) PLCdelay128 / multiplier;
		PLCdelay220_d = (double) PLCdelay220 / multiplier;

		PLCdelay16_MAX_d  = (double) PLCdelay16_MAX  / multiplier;
		PLCdelay32_MAX_d  = (double) PLCdelay32_MAX  / multiplier;
		PLCdelay64_MAX_d  = (double) PLCdelay64_MAX  / multiplier;
		PLCdelay128_MAX_d = (double) PLCdelay128_MAX / multiplier;
		PLCdelay220_MAX_d = (double) PLCdelay220_MAX / multiplier;

		PLCdelay16_ROBO_d  = (double) PLCdelay16_ROBO  / multiplier;
		PLCdelay32_ROBO_d  = (double) PLCdelay32_ROBO  / multiplier;
		PLCdelay64_ROBO_d  = (double) PLCdelay64_ROBO  / multiplier;
		PLCdelay128_ROBO_d = (double) PLCdelay128_ROBO / multiplier;
		PLCdelay220_ROBO_d = (double) PLCdelay220_ROBO / multiplier;
	}
	if(typeOfChannel == 1) // Fuer BPLC-Kanaele
	{
		BPLCdelay64_d   = (double) BPLCdelay64   / multiplier;
		BPLCdelay128_d  = (double) BPLCdelay128  / multiplier;
		BPLCdelay256_d  = (double) BPLCdelay256  / multiplier;
		BPLCdelay512_d  = (double) BPLCdelay512  / multiplier;
		BPLCdelay1024_d = (double) BPLCdelay1024 / multiplier;

		BPLCdelay64_MAX_d   = (double) BPLCdelay64_MAX   / multiplier;
		BPLCdelay128_MAX_d  = (double) BPLCdelay128_MAX  / multiplier;
		BPLCdelay256_MAX_d  = (double) BPLCdelay256_MAX  / multiplier;
		BPLCdelay512_MAX_d  = (double) BPLCdelay512_MAX  / multiplier;
		BPLCdelay1024_MAX_d = (double) BPLCdelay1024_MAX / multiplier;

		BPLCdelay64_ROBO_d   = (double) BPLCdelay64_ROBO   / multiplier;
		BPLCdelay128_ROBO_d  = (double) BPLCdelay128_ROBO  / multiplier;
		BPLCdelay256_ROBO_d  = (double) BPLCdelay256_ROBO  / multiplier;
		BPLCdelay512_ROBO_d  = (double) BPLCdelay512_ROBO  / multiplier;
		BPLCdelay1024_ROBO_d = (double) BPLCdelay1024_ROBO / multiplier;
	}

	// 3. Einberechnung der Paketfehlerrate auf die durchschnittliche Laufzeit ...

	if(myPER > 0 && typeOfChannel == 0) // Fuer PLC-Kanaele
	{
		PLCdelay16_d  = (PLCdelay16_d *(100-myPER)+(2 * PLCdelay16_d +PLCdelay16_d)*myPER)/100;
		PLCdelay32_d  = (PLCdelay32_d *(100-myPER)+(2 * PLCdelay32_d +PLCdelay16_d)*myPER)/100;
		PLCdelay64_d  = (PLCdelay64_d *(100-myPER)+(2 * PLCdelay64_d +PLCdelay16_d)*myPER)/100;
		PLCdelay128_d = (PLCdelay128_d*(100-myPER)+(2 * PLCdelay128_d+PLCdelay16_d)*myPER)/100;
		PLCdelay220_d = (PLCdelay220_d*(100-myPER)+(2 * PLCdelay220_d+PLCdelay16_d)*myPER)/100;
	}

	if(myPER > 0 && typeOfChannel == 1) // Fuer BPLC-Kanaele
	{
		BPLCdelay64_d   = (BPLCdelay64_d  *(100-myPER)+(2*BPLCdelay64_d  +BPLCdelay64_d)*myPER)/100;
		BPLCdelay128_d  = (BPLCdelay128_d *(100-myPER)+(2*BPLCdelay128_d +BPLCdelay64_d)*myPER)/100;
		BPLCdelay256_d  = (BPLCdelay256_d *(100-myPER)+(2*BPLCdelay256_d +BPLCdelay64_d)*myPER)/100;
		BPLCdelay512_d  = (BPLCdelay512_d *(100-myPER)+(2*BPLCdelay512_d +BPLCdelay64_d)*myPER)/100;
		BPLCdelay1024_d = (BPLCdelay1024_d*(100-myPER)+(2*BPLCdelay1024_d+BPLCdelay64_d)*myPER)/100;
	}

	if(simTime() < 1)
	{
		if(COMMENTS_ON) printParameters();
		if(COMMENTS_ON) EV << "Setting initial delays / datarates ..." << endl;

		if(COMMENTS_ON) EV << "BEFORE PARAMETER CHANGE ..." << endl;
		if(COMMENTS_ON) EV << "Initial channel delay is set to "
				           << getDelay() * 1000 << "ms." << endl;
		if(COMMENTS_ON) EV << "Initial channel datarate is set to "
						   << getDatarate() << "bit/s." << endl << endl;

		if(typeOfChannel == 0) setDelay(getDelay(), 220);
		if(typeOfChannel == 1) setDelay(getDelay(), 1024);

		if(COMMENTS_ON) EV << "AFTER PARAMETER CHANGE ..." << endl;
		if(COMMENTS_ON) EV << "Initial channel delay is set to "
						   << getDelay() * 1000 << "ms." << endl;
		if(COMMENTS_ON) EV << "Initial channel datarate is set to "
						   << getDatarate() << "bit/s." << endl << endl;
	}
}

void PowerlineChannel_v2::processMessage(cMessage *msg, simtime_t time, result_t& result)
{

	if(COMMENTS_ON) EV << "processMessage() is called." << endl;
	messageCounter++;

	// Auslesen der Paketgroesse ...
	cPacket *thisPacket = check_and_cast<cPacket *>(msg);
	int packetSize = thisPacket->getByteLength();
	if(COMMENTS_ON) EV << "The incoming frame has a size of " << packetSize << " byte." << endl;

	if(typeOfChannel == 0)		// Fuer PLC-Kanaele
	{
		if(COMMENTS_ON) EV << "Selecting the delay of a PLC channel for this packet ..." << endl;
		// Auswahl der Verzoegerung nach der Paketgroesse ...
		if(packetSize > 0   && packetSize <= 16)
		{
			msgCounterPLC16  = msgCounterPLC16  +1;
			msgCounterPLCAll = msgCounterPLCAll +1;
			if(COMMENTS_ON) EV << "msgCounterPLC16  = " << msgCounterPLC16 << endl;
			if(COMMENTS_ON) EV << "msgCounterPLCAll = " << msgCounterPLCAll << endl;
			setDelay(runtimeDistribution(PLCdelay16_MAX_d,PLCdelay16_d,PLCdelay16_ROBO_d), 16);

			avg_PLCdelay16  = (avg_PLCdelay16  * (msgCounterPLC16-1)  + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterPLC16;
			avg_PLCdelayAll = (avg_PLCdelayAll * (msgCounterPLCAll-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterPLCAll;
			if(COMMENTS_ON) EV << "avg_PLCdelay16  = " << avg_PLCdelay16 * 1000 << " ms" << endl;
			if(COMMENTS_ON) EV << "avg_PLCdelayAll = " << avg_PLCdelayAll * 1000 << " ms" << endl;

			if(min_PLCdelay16 > getDelay() || min_PLCdelay16 == 0) min_PLCdelay16 = packetSize*8/cDatarateChannel::getDatarate();
			if(max_PLCdelay16 < getDelay() || max_PLCdelay16 == 0) max_PLCdelay16 = packetSize*8/cDatarateChannel::getDatarate();
		}
		if(packetSize > 16  && packetSize <= 32)
		{
			msgCounterPLC32  = msgCounterPLC32  +1;
			msgCounterPLCAll = msgCounterPLCAll +1;
			if(COMMENTS_ON) EV << "msgCounterPLC32  = " << msgCounterPLC32 << endl;
			if(COMMENTS_ON) EV << "msgCounterPLCAll = " << msgCounterPLCAll << endl;
			setDelay(runtimeDistribution(PLCdelay32_MAX_d,PLCdelay32_d,PLCdelay32_ROBO_d), 32);

			avg_PLCdelay32  = (avg_PLCdelay32  * (msgCounterPLC32-1)  + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterPLC32;
			avg_PLCdelayAll = (avg_PLCdelayAll * (msgCounterPLCAll-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterPLCAll;
			if(COMMENTS_ON) EV << "avg_PLCdelay32  = " << avg_PLCdelay32 * 1000 << " ms" << endl;
			if(COMMENTS_ON) EV << "avg_PLCdelayAll = " << avg_PLCdelayAll * 1000 << " ms" << endl;

			if(min_PLCdelay32 > getDelay() || min_PLCdelay32 == 0) min_PLCdelay32 = packetSize*8/cDatarateChannel::getDatarate();
			if(max_PLCdelay32 < getDelay() || max_PLCdelay32 == 0) max_PLCdelay32 = packetSize*8/cDatarateChannel::getDatarate();
		}
		if(packetSize > 32  && packetSize <= 64)
		{
			msgCounterPLC64  = msgCounterPLC64  +1;
			msgCounterPLCAll = msgCounterPLCAll +1;
			if(COMMENTS_ON) EV << "msgCounterPLC64  = " << msgCounterPLC64 << endl;
			if(COMMENTS_ON) EV << "msgCounterPLCAll = " << msgCounterPLCAll << endl;
			setDelay(runtimeDistribution(PLCdelay64_MAX_d,PLCdelay64_d,PLCdelay64_ROBO_d), 64);

			avg_PLCdelay64  = (avg_PLCdelay64  * (msgCounterPLC64-1)  + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterPLC64;
			avg_PLCdelayAll = (avg_PLCdelayAll * (msgCounterPLCAll-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterPLCAll;
			if(COMMENTS_ON) EV << "avg_PLCdelay64  = " << avg_PLCdelay64 * 1000 << " ms" << endl;
			if(COMMENTS_ON) EV << "avg_PLCdelayAll = " << avg_PLCdelayAll * 1000 << " ms" << endl;

			if(min_PLCdelay64 > getDelay() || min_PLCdelay64 == 0) min_PLCdelay64 = packetSize*8/cDatarateChannel::getDatarate();
			if(max_PLCdelay64 < getDelay() || max_PLCdelay64 == 0) max_PLCdelay64 = packetSize*8/cDatarateChannel::getDatarate();
		}
		if(packetSize > 64  && packetSize <= 128)
		{
			msgCounterPLC128 = msgCounterPLC128 +1;
			msgCounterPLCAll = msgCounterPLCAll +1;
			if(COMMENTS_ON) EV << "msgCounterPLC128 = " << msgCounterPLC128 << endl;
			if(COMMENTS_ON) EV << "msgCounterPLCAll = " << msgCounterPLCAll << endl;
			setDelay(runtimeDistribution(PLCdelay128_MAX_d,PLCdelay128_d,PLCdelay128_ROBO_d), 128);

			avg_PLCdelay128 = (avg_PLCdelay128 * (msgCounterPLC128-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterPLC128;
			avg_PLCdelayAll = (avg_PLCdelayAll * (msgCounterPLCAll-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterPLCAll;
			if(COMMENTS_ON) EV << "avg_PLCdelay128 = " << avg_PLCdelay128 * 1000 << " ms" << endl;
			if(COMMENTS_ON) EV << "avg_PLCdelayAll = " << avg_PLCdelayAll * 1000 << " ms" << endl;

			if(min_PLCdelay128 > getDelay() || min_PLCdelay128 == 0) min_PLCdelay128 = packetSize*8/cDatarateChannel::getDatarate();
			if(max_PLCdelay128 < getDelay() || max_PLCdelay128 == 0) max_PLCdelay128 = packetSize*8/cDatarateChannel::getDatarate();
		}
		if(packetSize > 128 && packetSize <= 255)
		{
			msgCounterPLC220 = msgCounterPLC220 +1;
			msgCounterPLCAll = msgCounterPLCAll +1;
			if(COMMENTS_ON) EV << "msgCounterPLC220 = " << msgCounterPLC220 << endl;
			if(COMMENTS_ON) EV << "msgCounterPLCAll = " << msgCounterPLCAll << endl;
			setDelay(runtimeDistribution(PLCdelay220_MAX_d,PLCdelay220_d,PLCdelay220_ROBO_d), 220);

			avg_PLCdelay220 = (avg_PLCdelay220 * (msgCounterPLC220-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterPLC220;
			avg_PLCdelayAll = (avg_PLCdelayAll * (msgCounterPLCAll-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterPLCAll;
			if(COMMENTS_ON) EV << "avg_PLCdelay220 = " << avg_PLCdelay220 * 1000 << " ms" << endl;
			if(COMMENTS_ON) EV << "avg_PLCdelayAll = " << avg_PLCdelayAll * 1000 << " ms" << endl;

			if(min_PLCdelay220 > getDelay() || min_PLCdelay220 == 0) min_PLCdelay220 = packetSize*8/cDatarateChannel::getDatarate();
			if(max_PLCdelay220 < getDelay() || max_PLCdelay220 == 0) max_PLCdelay220 = packetSize*8/cDatarateChannel::getDatarate();
		}
	}
	if(typeOfChannel == 1)		// Fuer BPLC-Kanaele
	{
		if(COMMENTS_ON) EV << "Selecting the delay of a BPLC channel for this packet ..." << endl;
		// Auswahl der Verzoegerung nach der Paketgroesse ...
		if(packetSize > 0   && packetSize <= 64)
		{
			msgCounterBPLC64  = msgCounterBPLC64  +1;
			msgCounterBPLCAll = msgCounterBPLCAll +1;
			if(COMMENTS_ON) EV << "msgCounterBPLC64  = " << msgCounterBPLC64 << endl;
			if(COMMENTS_ON) EV << "msgCounterBPLCAll = " << msgCounterBPLCAll << endl;
			setDelay(runtimeDistribution(BPLCdelay64_MAX_d, BPLCdelay64_d, BPLCdelay64_ROBO_d), 64);

			avg_BPLCdelay64  = (avg_BPLCdelay64  * (msgCounterBPLC64-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterBPLC64;
			avg_BPLCdelayAll = (avg_BPLCdelayAll * (msgCounterBPLCAll-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterBPLCAll;
			if(COMMENTS_ON) EV << "avg_BPLCdelay64   = " << avg_BPLCdelay64 * 1000000 << " us" << endl;
			if(COMMENTS_ON) EV << "avg_BPLCdelayAll  = " << avg_BPLCdelayAll * 1000000 << " us" << endl;

			if(min_BPLCdelay64 > getDelay() || min_BPLCdelay64 == 0) min_BPLCdelay64 = packetSize*8/cDatarateChannel::getDatarate();
			if(max_BPLCdelay64 < getDelay() || max_BPLCdelay64 == 0) max_BPLCdelay64 = packetSize*8/cDatarateChannel::getDatarate();
		}
		if(packetSize > 64  && packetSize <= 128)
		{
			msgCounterBPLC128 = msgCounterBPLC128 +1;
			msgCounterBPLCAll = msgCounterBPLCAll +1;
			if(COMMENTS_ON) EV << "msgCounterBPLC128 = " << msgCounterBPLC128 << endl;
			if(COMMENTS_ON) EV << "msgCounterBPLCAll = " << msgCounterBPLCAll << endl;
			setDelay(runtimeDistribution(BPLCdelay128_MAX_d, BPLCdelay128_d, BPLCdelay128_ROBO_d), 128);

			avg_BPLCdelay128 = (avg_BPLCdelay128 * (msgCounterBPLC128-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterBPLC128;
			avg_BPLCdelayAll = (avg_BPLCdelayAll * (msgCounterBPLCAll-1)  + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterBPLCAll;
			if(COMMENTS_ON) EV << "avg_BPLCdelay128  = " << avg_BPLCdelay128 * 1000000 << " us" << endl;
			if(COMMENTS_ON) EV << "avg_BPLCdelayAll  = " << avg_BPLCdelayAll * 1000000 << " us" << endl;

			if(min_BPLCdelay128 > getDelay() || min_BPLCdelay128 == 0) min_BPLCdelay128 = packetSize*8/cDatarateChannel::getDatarate();
			if(max_BPLCdelay128 < getDelay() || max_BPLCdelay128 == 0) max_BPLCdelay128 = packetSize*8/cDatarateChannel::getDatarate();
		}
		if(packetSize > 128 && packetSize <= 256)
		{
			msgCounterBPLC256 = msgCounterBPLC256 +1;
			msgCounterBPLCAll = msgCounterBPLCAll +1;
			if(COMMENTS_ON) EV << "msgCounterBPLC256 = " << msgCounterBPLC256 << endl;
			if(COMMENTS_ON) EV << "msgCounterBPLCAll = " << msgCounterBPLCAll << endl;
			setDelay(runtimeDistribution(BPLCdelay256_MAX_d, BPLCdelay256_d, BPLCdelay256_ROBO_d), 256);

			avg_BPLCdelay256 = (avg_BPLCdelay256 * (msgCounterBPLC256-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterBPLC256;
			avg_BPLCdelayAll = (avg_BPLCdelayAll * (msgCounterBPLCAll-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterBPLCAll;
			if(COMMENTS_ON) EV << "avg_BPLCdelay256  = " << avg_BPLCdelay256 * 1000000 << " us" << endl;
			if(COMMENTS_ON) EV << "avg_BPLCdelayAll  = " << avg_BPLCdelayAll * 1000000 << " us" << endl;

			if(min_BPLCdelay256 > getDelay() || min_BPLCdelay256 == 0) min_BPLCdelay256 = packetSize*8/cDatarateChannel::getDatarate();
			if(max_BPLCdelay256 < getDelay() || max_BPLCdelay256 == 0) max_BPLCdelay256 = packetSize*8/cDatarateChannel::getDatarate();
		}
		if(packetSize > 256 && packetSize <= 512)
		{
			msgCounterBPLC512 = msgCounterBPLC512 +1;
			msgCounterBPLCAll = msgCounterBPLCAll +1;
			if(COMMENTS_ON) EV << "msgCounterBPLC512 = " << msgCounterBPLC512 << endl;
			if(COMMENTS_ON) EV << "msgCounterBPLCAll = " << msgCounterBPLCAll << endl;
			setDelay(runtimeDistribution(BPLCdelay512_MAX_d, BPLCdelay512_d, BPLCdelay512_ROBO_d), 512);

			avg_BPLCdelay512 = (avg_BPLCdelay512 * (msgCounterBPLC512-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterBPLC512;
			avg_BPLCdelayAll = (avg_BPLCdelayAll * (msgCounterBPLCAll-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterBPLCAll;
			if(COMMENTS_ON) EV << "avg_BPLCdelay512  = " << avg_BPLCdelay512 * 1000000 << " us" << endl;
			if(COMMENTS_ON) EV << "avg_BPLCdelayAll  = " << avg_BPLCdelayAll * 1000000 << " us" << endl;

			if(min_BPLCdelay512 > getDelay() || min_BPLCdelay512 == 0) min_BPLCdelay512 = packetSize*8/cDatarateChannel::getDatarate();
			if(max_BPLCdelay512 < getDelay() || max_BPLCdelay512 == 0) max_BPLCdelay512 = packetSize*8/cDatarateChannel::getDatarate();
		}
		if(packetSize > 512 && packetSize <= 1500)
		{
			msgCounterBPLC1024 = msgCounterBPLC1024 +1;
			msgCounterBPLCAll  = msgCounterBPLCAll  +1;
			if(COMMENTS_ON) EV << "msgCounterBPLC1024 = " << msgCounterBPLC1024 << endl;
			if(COMMENTS_ON) EV << "msgCounterBPLCAll  = " << msgCounterBPLCAll << endl;
			setDelay(runtimeDistribution(BPLCdelay1024_MAX_d, BPLCdelay1024_d, BPLCdelay1024_ROBO_d), 1024);

			avg_BPLCdelay1024 = (avg_BPLCdelay1024 * (msgCounterBPLC1024-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterBPLC1024;
			avg_BPLCdelayAll  = (avg_BPLCdelayAll  * (msgCounterBPLCAll-1) + packetSize*8/cDatarateChannel::getDatarate()) / msgCounterBPLCAll;
			if(COMMENTS_ON) EV << "avg_BPLCdelay1024 = " << avg_BPLCdelay1024 * 1000000 << " us" << endl;
			if(COMMENTS_ON) EV << "avg_BPLCdelayAll  = " << avg_BPLCdelayAll * 1000000 << " us" << endl;

			if(min_BPLCdelay1024 > getDelay() || min_BPLCdelay1024 == 0) min_BPLCdelay1024 = packetSize*8/cDatarateChannel::getDatarate();
			if(max_BPLCdelay1024 < getDelay() || max_BPLCdelay1024 == 0) max_BPLCdelay1024 = packetSize*8/cDatarateChannel::getDatarate();
		}
	}

	// Aussortieren zu grosser Pakete ...
	if((typeOfChannel == 0 && packetSize > 255) || (typeOfChannel == 1 && packetSize > 1616))
	{
		if(COMMENTS_ON) EV << "Packet was too big!" << endl;
		if(typeOfChannel == 0) setDelay(PLCdelay220_d, 220);
		if(typeOfChannel == 1) setDelay(BPLCdelay1024_d, 1024);
	}

	double multiplier = 0;
	if(typeOfChannel == 0) multiplier = 1000;    // Umrechnung auf ms
	if(typeOfChannel == 1) multiplier = 1000000; // Umrechnung auf us

	if (simTime() > 1)
	{
		if(COMMENTS_ON) EV << "Current datarate is " << cDatarateChannel::getDatarate()/1000
				           << " kBit/s." << endl;
		if(COMMENTS_ON) EV << "Packet size is " << packetSize << " Byte." << endl;
		if(COMMENTS_ON) EV << "Packet should arrive in "
						   << packetSize*8/cDatarateChannel::getDatarate() *1000 << "ms." << endl;
		if(COMMENTS_ON) EV << "Packet should arrive at "
						   << simTime() + packetSize*8/cDatarateChannel::getDatarate() << "s." << endl;
	}


	result.delay = myResult.delay;
	result.duration = 0;
	result.discard = false;

	cDatarateChannel::setDelay(myResult.delay.dbl());

	// Durchreichen der Parameter zum klassischen cDatarateChannel ...
	cDatarateChannel::processMessage(msg, time, result);

}

void PowerlineChannel_v2::finish()
{
	if(COMMENTS_ON && typeOfChannel == 0)
	{
		EV << endl;
		EV << "avg_PLCdelay16  = " << avg_PLCdelay16  * 1000
		   << " ms (should be about " << PLCdelay16 << " ms)" << endl;
		EV << "avg_PLCdelay32  = " << avg_PLCdelay32  * 1000
		   << " ms (should be about " << PLCdelay32 << " ms)" << endl;
		EV << "avg_PLCdelay64  = " << avg_PLCdelay64  * 1000
		   << " ms (should be about " << PLCdelay64 << " ms)" << endl;
		EV << "avg_PLCdelay128 = " << avg_PLCdelay128 * 1000
		   << " ms (should be about " << PLCdelay128 << " ms)" << endl;
		EV << "avg_PLCdelay220 = " << avg_PLCdelay220 * 1000
		   << " ms (should be about " << PLCdelay220 << " ms)" << endl;
		EV << "avg_PLCdelayAll = " << avg_PLCdelayAll * 1000 << " ms" << endl;
		EV << endl;
		EV << "min_PLCdelay16  = " << min_PLCdelay16  * 1000
		   << " ms (should be about " << PLCdelay16_MAX << " ms)" << endl;
		EV << "min_PLCdelay32  = " << min_PLCdelay32  * 1000
		   << " ms (should be about " << PLCdelay32_MAX << " ms)" << endl;
		EV << "min_PLCdelay64  = " << min_PLCdelay64  * 1000
		   << " ms (should be about " << PLCdelay64_MAX << " ms)" << endl;
		EV << "min_PLCdelay128 = " << min_PLCdelay128 * 1000
		   << " ms (should be about " << PLCdelay128_MAX << " ms)" << endl;
		EV << "min_PLCdelay220 = " << min_PLCdelay220 * 1000
		   << " ms (should be about " << PLCdelay220_MAX << " ms)" << endl;
		EV << endl;
		EV << "max_PLCdelay16  = " << max_PLCdelay16  * 1000
		   << " ms (should be about " << PLCdelay16_ROBO << " ms)" << endl;
		EV << "max_PLCdelay32  = " << max_PLCdelay32  * 1000
		   << " ms (should be about " << PLCdelay32_ROBO << " ms)" << endl;
		EV << "max_PLCdelay64  = " << max_PLCdelay64  * 1000
		   << " ms (should be about " << PLCdelay64_ROBO << " ms)" << endl;
		EV << "max_PLCdelay128 = " << max_PLCdelay128 * 1000
		   << " ms (should be about " << PLCdelay128_ROBO << " ms)" << endl;
		EV << "max_PLCdelay220 = " << max_PLCdelay220 * 1000
		   << " ms (should be about " << PLCdelay220_ROBO << " ms)" << endl;
		EV << endl;
		EV << "msgCounterPLC16  = " << msgCounterPLC16 << endl;
		EV << "msgCounterPLC32  = " << msgCounterPLC32 << endl;
		EV << "msgCounterPLC64  = " << msgCounterPLC64 << endl;
		EV << "msgCounterPLC128 = " << msgCounterPLC128 << endl;
		EV << "msgCounterPLC220 = " << msgCounterPLC220 << endl;
		EV << endl;
	}

	if(COMMENTS_ON && typeOfChannel == 1)
	{
		EV << endl;
		EV << "avg_BPLCdelay64   = " << avg_BPLCdelay64   * 1000000
		   << " us (should be about " << BPLCdelay64 << " us)" << endl;
		EV << "avg_BPLCdelay128  = " << avg_BPLCdelay128  * 1000000
		   << " us (should be about " << BPLCdelay128 << " us)" << endl;
		EV << "avg_BPLCdelay256  = " << avg_BPLCdelay256  * 1000000
		   << " us (should be about " << BPLCdelay256 << " us)" << endl;
		EV << "avg_BPLCdelay512  = " << avg_BPLCdelay512  * 1000000
		   << " us (should be about " << BPLCdelay512 << " us)" << endl;
		EV << "avg_BPLCdelay1024 = " << avg_BPLCdelay1024 * 1000000
		   << " us (should be about " << BPLCdelay1024 << " us)" << endl;
		EV << "avg_BPLCdelayAll  = " << avg_BPLCdelayAll  * 1000000 << " us" << endl;
		EV << endl;
		EV << "min_BPLCdelay64   = " << min_BPLCdelay64   * 1000000
		   << " us (should be about " << BPLCdelay64_MAX << " us)" << endl;
		EV << "min_BPLCdelay128  = " << min_BPLCdelay128  * 1000000
		   << " us (should be about " << BPLCdelay128_MAX << " us)" << endl;
		EV << "min_BPLCdelay256  = " << min_BPLCdelay256  * 1000000
		   << " us (should be about " << BPLCdelay256_MAX << " us)" << endl;
		EV << "min_BPLCdelay512  = " << min_BPLCdelay512  * 1000000
		   << " us (should be about " << BPLCdelay512_MAX << " us)" << endl;
		EV << "min_BPLCdelay1024 = " << min_BPLCdelay1024 * 1000000
		   << " us (should be about " << BPLCdelay1024_MAX << " us)" << endl;
		EV << endl;
		EV << "max_BPLCdelay64   = " << max_BPLCdelay64   * 1000000
		   << " us (should be about " << BPLCdelay64_ROBO << " us)" << endl;
		EV << "max_BPLCdelay128  = " << max_BPLCdelay128  * 1000000
		   << " us (should be about " << BPLCdelay128_ROBO << " us)" << endl;
		EV << "max_BPLCdelay256  = " << max_BPLCdelay256  * 1000000
		   << " us (should be about " << BPLCdelay256_ROBO << " us)" << endl;
		EV << "max_BPLCdelay512  = " << max_BPLCdelay512  * 1000000
		   << " us (should be about " << BPLCdelay512_ROBO << " us)" << endl;
		EV << "max_BPLCdelay1024 = " << max_BPLCdelay1024 * 1000000
		   << " us (should be about " << BPLCdelay1024_ROBO << " us)" << endl;
		EV << endl;
		EV << "msgCounterBPLC64   = " << msgCounterBPLC64 << endl;
		EV << "msgCounterBPLC128  = " << msgCounterBPLC128 << endl;
		EV << "msgCounterBPLC256  = " << msgCounterBPLC256 << endl;
		EV << "msgCounterBPLC512  = " << msgCounterBPLC512 << endl;
		EV << "msgCounterBPLC1024 = " << msgCounterBPLC1024 << endl;
		EV << endl;
	}

	if(COMMENTS_ON) EV << "finish() is called." << endl;
	if(COMMENTS_ON) EV << "PowerlineChannel_v2 is finished, with " << messageCounter
			           << " messages delivered." << endl;
}

void PowerlineChannel_v2::setDelay(double time, double byteSize)
{
	myResult.delay = (simtime_t)0;
	if (time == 0)
	{
		if(typeOfChannel == 0) time = PLCdelay220;
		if(typeOfChannel == 1) time = BPLCdelay1024;
	}
	double datarateCalc = byteSize * 8 / time;
	cDatarateChannel::setDelay(0);
	cDatarateChannel::setDatarate(datarateCalc);
	if(simTime() > 1) initialize();
	cDatarateChannel::handleParameterChange("delay");
	cDatarateChannel::handleParameterChange("datarate");
}

double PowerlineChannel_v2::getDelay()
{
	return myResult.delay.dbl();
}

void PowerlineChannel_v2::setDatarate(double rate)
{
	cDatarateChannel::setDatarate(rate);
}
double PowerlineChannel_v2::getDatarate()
{
	return cDatarateChannel::getDatarate();
}

void PowerlineChannel_v2::printParameters()
{
	EV << "printParameters() is called." << endl;
	EV << endl;
	if (typeOfChannel == 0) EV << "TypeOfChannel is set to PLC ("  << typeOfChannel << ")" << endl;
	if (typeOfChannel == 1) EV << "TypeOfChannel is set to BPLC (" << typeOfChannel << ")" << endl;
	EV << endl;

	if (typeOfChannel == 1){
	EV << "NED-file delay values for this channel (clean):" << endl;
	EV << "BPLCdelay64   is set to " << BPLCdelay64   << "us" << endl;
	EV << "BPLCdelay128  is set to " << BPLCdelay128  << "us"<< endl;
	EV << "BPLCdelay256  is set to " << BPLCdelay256  << "us"<< endl;
	EV << "BPLCdelay512  is set to " << BPLCdelay512  << "us"<< endl;
	EV << "BPLCdelay1024 is set to " << BPLCdelay1024 << "us"<< endl;
	EV << endl;
	EV << "BPLCdelay64_MAX   is set to " << BPLCdelay64_MAX   << "us" << endl;
	EV << "BPLCdelay128_MAX  is set to " << BPLCdelay128_MAX  << "us"<< endl;
	EV << "BPLCdelay256_MAX  is set to " << BPLCdelay256_MAX  << "us"<< endl;
	EV << "BPLCdelay512_MAX  is set to " << BPLCdelay512_MAX  << "us"<< endl;
	EV << "BPLCdelay1024_MAX is set to " << BPLCdelay1024_MAX << "us"<< endl;
	EV << endl;
	EV << "BPLCdelay64_ROBO   is set to " << BPLCdelay64_ROBO   << "us" << endl;
	EV << "BPLCdelay128_ROBO  is set to " << BPLCdelay128_ROBO  << "us"<< endl;
	EV << "BPLCdelay256_ROBO  is set to " << BPLCdelay256_ROBO  << "us"<< endl;
	EV << "BPLCdelay512_ROBO  is set to " << BPLCdelay512_ROBO  << "us"<< endl;
	EV << "BPLCdelay1024_ROBO is set to " << BPLCdelay1024_ROBO << "us"<< endl;
	EV << endl;}

	if (typeOfChannel == 0){
	EV << "NED-file delay values for this channel (clean):" << endl;
	EV << "PLCdelay16  is set to " << PLCdelay16  << "ms" << endl;
	EV << "PLCdelay32  is set to " << PLCdelay32  << "ms" << endl;
	EV << "PLCdelay64  is set to " << PLCdelay64  << "ms" << endl;
	EV << "PLCdelay128 is set to " << PLCdelay128 << "ms" << endl;
	EV << "PLCdelay220 is set to " << PLCdelay220 << "ms" << endl;
	EV << endl;
	EV << "PLCdelay16_MAX  is set to " << PLCdelay16_MAX << "ms" << endl;
	EV << "PLCdelay32_MAX  is set to " << PLCdelay32_MAX  << "ms" << endl;
	EV << "PLCdelay64_MAX  is set to " << PLCdelay64_MAX  << "ms" << endl;
	EV << "PLCdelay128_MAX is set to " << PLCdelay128_MAX << "ms" << endl;
	EV << "PLCdelay220_MAX is set to " << PLCdelay220_MAX << "ms" << endl;
	EV << endl;
	EV << "PLCdelay16_ROBO  is set to " << PLCdelay16_ROBO  << "ms" << endl;
	EV << "PLCdelay32_ROBO  is set to " << PLCdelay32_ROBO  << "ms" << endl;
	EV << "PLCdelay64_ROBO  is set to " << PLCdelay64_ROBO  << "ms" << endl;
	EV << "PLCdelay128_ROBO is set to " << PLCdelay128_ROBO << "ms" << endl;
	EV << "PLCdelay220_ROBO is set to " << PLCdelay220_ROBO << "ms" << endl;
	EV << endl;}

	if (typeOfChannel == 1){
	EV << "NED-file delay values [*10^6] for this channel (with PER):" << endl;
	EV << "BPLCdelay64_d   is set to " << BPLCdelay64_d   * 1000000 << "s"<< endl;
	EV << "BPLCdelay128_d  is set to " << BPLCdelay128_d  * 1000000 << "s"<< endl;
	EV << "BPLCdelay256_d  is set to " << BPLCdelay256_d  * 1000000 << "s"<< endl;
	EV << "BPLCdelay512_d  is set to " << BPLCdelay512_d  * 1000000 << "s"<< endl;
	EV << "BPLCdelay1024_d is set to " << BPLCdelay1024_d * 1000000 << "s"<< endl;
	EV << endl;
	EV << "BPLCdelay64_MAX_d   is set to " << BPLCdelay64_MAX_d   * 1000000 << "s"<< endl;
	EV << "BPLCdelay128_MAX_d  is set to " << BPLCdelay128_MAX_d  * 1000000 << "s"<< endl;
	EV << "BPLCdelay256_MAX_d  is set to " << BPLCdelay256_MAX_d  * 1000000 << "s"<< endl;
	EV << "BPLCdelay512_MAX_d  is set to " << BPLCdelay512_MAX_d  * 1000000 << "s"<< endl;
	EV << "BPLCdelay1024_MAX_d is set to " << BPLCdelay1024_MAX_d * 1000000 << "s"<< endl;
	EV << endl;
	EV << "BPLCdelay64_ROBO_d   is set to " << BPLCdelay64_ROBO_d   * 1000000 << "s"<< endl;
	EV << "BPLCdelay128_ROBO_d  is set to " << BPLCdelay128_ROBO_d  * 1000000 << "s"<< endl;
	EV << "BPLCdelay256_ROBO_d  is set to " << BPLCdelay256_ROBO_d  * 1000000 << "s"<< endl;
	EV << "BPLCdelay512_ROBO_d  is set to " << BPLCdelay512_ROBO_d  * 1000000 << "s"<< endl;
	EV << "BPLCdelay1024_ROBO_d is set to " << BPLCdelay1024_ROBO_d * 1000000 << "s"<< endl;
	EV << endl;}

	if (typeOfChannel == 0){
	EV << "NED-file delay values [*10^3] for this channel (with PER):" << endl;
	EV << "PLCdelay16_d  is set to " << PLCdelay16_d  * 1000 << "s" << endl;
	EV << "PLCdelay32_d  is set to " << PLCdelay32_d  * 1000 << "s" << endl;
	EV << "PLCdelay64_d  is set to " << PLCdelay64_d  * 1000 << "s" << endl;
	EV << "PLCdelay128_d is set to " << PLCdelay128_d * 1000 << "s" << endl;
	EV << "PLCdelay220_d is set to " << PLCdelay220_d * 1000 << "s" << endl;
	EV << endl;
	EV << "PLCdelay16_MAX_d  is set to " << PLCdelay16_MAX_d  * 1000 << "s" << endl;
	EV << "PLCdelay32_MAX_d  is set to " << PLCdelay32_MAX_d  * 1000 << "s" << endl;
	EV << "PLCdelay64_MAX_d  is set to " << PLCdelay64_MAX_d  * 1000 << "s" << endl;
	EV << "PLCdelay128_MAX_d is set to " << PLCdelay128_MAX_d * 1000 << "s" << endl;
	EV << "PLCdelay220_MAX_d is set to " << PLCdelay220_MAX_d * 1000 << "s" << endl;
	EV << endl;
	EV << "PLCdelay16_ROBO_d  is set to " << PLCdelay16_ROBO_d  * 1000 << "s" << endl;
	EV << "PLCdelay32_ROBO_d  is set to " << PLCdelay32_ROBO_d  * 1000 << "s" << endl;
	EV << "PLCdelay64_ROBO_d  is set to " << PLCdelay64_ROBO_d  * 1000 << "s" << endl;
	EV << "PLCdelay128_ROBO_d is set to " << PLCdelay128_ROBO_d * 1000 << "s" << endl;
	EV << "PLCdelay220_ROBO_d is set to " << PLCdelay220_ROBO_d * 1000 << "s" << endl;
	EV << endl;}

	EV << "myPER is set to " << myPER << "%" << endl;
	EV << "messageCounter is set to " << messageCounter << endl;
	EV << endl;
}

double PowerlineChannel_v2::runtimeDistribution(double min, double mean, double max)
{
	double multiplier = 0;
	if(typeOfChannel == 0) multiplier = 1000;    // Umrechnung auf ms
	if(typeOfChannel == 1) multiplier = 1000000; // Umrechnung auf us

	min = min * multiplier;
	mean = mean * multiplier;
	max = max * multiplier;

	double deviation = mean;

	if (COMMENTS_ON) EV << "Truncnormal distribution random experiment ... " << endl;
	if (COMMENTS_ON) EV << "Minimum = " << min << endl;
	if (COMMENTS_ON) EV << "Mean = " << mean << endl;
	if (COMMENTS_ON) EV << "Maximum = " << max << endl;

	volatile double x = truncnormal(mean,deviation);
	if (COMMENTS_ON)
	{
		EV << "Random value is: " << x;
		if(typeOfChannel == 0) EV << " ms " << endl;
		if(typeOfChannel == 1) EV << " us " << endl;
	}

	if (x >= max) x = max;
	if (x <= min) x = min;

	x = x/multiplier;

	if (COMMENTS_ON) EV << "Return value is: " << x << " s " << endl;
	return x;
}
