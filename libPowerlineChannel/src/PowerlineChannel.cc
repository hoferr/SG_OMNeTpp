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

#include "PowerlineChannel.h"

#ifdef WITH_PARSIM
#include <ccommbuffer.h>
#endif

using std::ostream;

Register_Class(PowerlineChannel)

PowerlineChannel::PowerlineChannel(const char *name) :
	cDelayChannel(name) {
}

PowerlineChannel::~PowerlineChannel()
{
	if(COMMENTS_ON) EV << "Destructor is called." << endl;
}

PowerlineChannel* PowerlineChannel::create(const char *name)
{
	return dynamic_cast<PowerlineChannel*>(cDelayChannel::create(name));
}

void PowerlineChannel::initialize()
{
	if(simTime() < 1 && COMMENTS_ON) EV << "initialize() is called." << endl;
	if(simTime() < 1) cChannel::initialize();

	// 1. Lesen der Parameter aus dem .ned-File ...

	if(simTime() < 1) typeOfChannel = par("typeOfChannel");

	if(typeOfChannel == 0)							 // Wenn es ein PLC-System ist ...
	{
		PLCdelay16  = par("PLCdelay16");		     // Uebergabe der Parameter in ms
		PLCdelay32  = par("PLCdelay32");
		PLCdelay64  = par("PLCdelay64");
		PLCdelay128 = par("PLCdelay128");
		PLCdelay220 = par("PLCdelay220");

		BPLCdelay64   = 0;							 // Ueberschreiben der unnoetigen Werte
		BPLCdelay128  = 0;
		BPLCdelay256  = 0;
		BPLCdelay512  = 0;
		BPLCdelay1024 = 0;
	}

	if(typeOfChannel == 1)							 // Wenn es ein PLC-System ist ...
	{
		BPLCdelay64   = par("BPLCdelay64");		     // Uebergabe der Parameter in us
		BPLCdelay128  = par("BPLCdelay128");
		BPLCdelay256  = par("BPLCdelay256");
		BPLCdelay512  = par("BPLCdelay512");
		BPLCdelay1024 = par("BPLCdelay1024");

		PLCdelay16  = 0;							 // Ueberschreiben der unnoetigen Werte
		PLCdelay32  = 0;
		PLCdelay64  = 0;
		PLCdelay128 = 0;
		PLCdelay220 = 0;
	}

	BPLCdelay64_d   = 0;							 // Definiertes Setzen der Parameter
	BPLCdelay128_d  = 0;
	BPLCdelay256_d  = 0;
	BPLCdelay512_d  = 0;
	BPLCdelay1024_d = 0;

	PLCdelay16_d  = 0;
	PLCdelay32_d  = 0;
	PLCdelay64_d  = 0;
	PLCdelay128_d = 0;
	PLCdelay220_d = 0;

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
	}
	if(typeOfChannel == 1) // Fuer BPLC-Kanaele
	{
		BPLCdelay64_d   = (double) BPLCdelay64   / multiplier;
		BPLCdelay128_d  = (double) BPLCdelay128  / multiplier;
		BPLCdelay256_d  = (double) BPLCdelay256  / multiplier;
		BPLCdelay512_d  = (double) BPLCdelay512  / multiplier;
		BPLCdelay1024_d = (double) BPLCdelay1024 / multiplier;
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
		if(COMMENTS_ON) EV << "Setting initial delays ..." << endl;
		if(typeOfChannel == 0) setDelay(PLCdelay220_d);
		if(typeOfChannel == 1) setDelay(BPLCdelay1024_d);
		if(COMMENTS_ON) EV << "Initial channel delay is set to "
				           << getDelay() * 1000 << "ms." << endl << endl;
		cDelayChannel::setDelay(myResult.delay.dbl());
	}
}

void PowerlineChannel::processMessage(cMessage *msg, simtime_t time, result_t& result)
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
		if(packetSize > 0)   setDelay(PLCdelay16_d);
		if(packetSize > 16)  setDelay(PLCdelay32_d);
		if(packetSize > 32)  setDelay(PLCdelay64_d);
		if(packetSize > 64)  setDelay(PLCdelay128_d);
		if(packetSize > 128) setDelay(PLCdelay220_d);
	}
	if(typeOfChannel == 1)		// Fuer BPLC-Kanaele
	{
		if(COMMENTS_ON) EV << "Selecting the delay of a BPLC channel for this packet ..." << endl;
		// Auswahl der Verzoegerung nach der Paketgroesse ...
		if(packetSize > 0)   setDelay(BPLCdelay64_d);
		if(packetSize > 64)  setDelay(BPLCdelay128_d);
		if(packetSize > 128) setDelay(BPLCdelay256_d);
		if(packetSize > 256) setDelay(BPLCdelay512_d);
		if(packetSize > 512) setDelay(BPLCdelay1024_d);
	}

	// Aussortieren zu grosser Pakete ...
	if((typeOfChannel == 0 && packetSize > 255) || (typeOfChannel == 1 && packetSize > 1616))
	{
		if(COMMENTS_ON) EV << "Packet was too big!" << endl;
		if(typeOfChannel == 0) setDelay(10*PLCdelay220_d);
		if(typeOfChannel == 1) setDelay(10*BPLCdelay1024_d);
	}

	if(COMMENTS_ON) EV << "Delivering the packet with a delay of "
			           << getDelay() * 1000 << " ms ..." << endl;

	result.delay = myResult.delay;
	result.duration = 0;
	result.discard = false;

	cDelayChannel::setDelay(myResult.delay.dbl());

	// Durchreichen der Parameter zum klassischen cDelayChannel ...
	cDelayChannel::processMessage(msg, time, result);

}

void PowerlineChannel::finish()
{
	if(COMMENTS_ON) EV << "finish() is called." << endl;
	if(COMMENTS_ON) EV << "PowerlineChannel is finished, with " << messageCounter
			           << " messages delivered." << endl;
}

void PowerlineChannel::setDelay(double time)
{
	myResult.delay = (simtime_t)time;
}
double PowerlineChannel::getDelay()
{
	return myResult.delay.dbl();
}

void PowerlineChannel::handleParameterChange(const char *parname)
{
	if(simTime() > 1) initialize();
	cDelayChannel::handleParameterChange("delay");
}

void PowerlineChannel::printParameters()
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
	EV << endl;}

	if (typeOfChannel == 0){
	EV << "NED-file delay values for this channel (clean):" << endl;
	EV << "PLCdelay16  is set to " << PLCdelay16  << "ms" << endl;
	EV << "PLCdelay32  is set to " << PLCdelay32  << "ms" << endl;
	EV << "PLCdelay64  is set to " << PLCdelay64  << "ms" << endl;
	EV << "PLCdelay128 is set to " << PLCdelay128 << "ms" << endl;
	EV << "PLCdelay220 is set to " << PLCdelay220 << "ms" << endl;
	EV << endl;}

	if (typeOfChannel == 1){
	EV << "NED-file delay values [*10^6] for this channel (with PER):" << endl;
	EV << "BPLCdelay64_d   is set to " << BPLCdelay64_d   * 1000000 << "s"<< endl;
	EV << "BPLCdelay128_d  is set to " << BPLCdelay128_d  * 1000000 << "s"<< endl;
	EV << "BPLCdelay256_d  is set to " << BPLCdelay256_d  * 1000000 << "s"<< endl;
	EV << "BPLCdelay512_d  is set to " << BPLCdelay512_d  * 1000000 << "s"<< endl;
	EV << "BPLCdelay1024_d is set to " << BPLCdelay1024_d * 1000000 << "s"<< endl;
	EV << endl;}

	if (typeOfChannel == 0){
	EV << "NED-file delay values [*10^3] for this channel (with PER):" << endl;
	EV << "PLCdelay16_d  is set to " << PLCdelay16_d  * 1000 << "s" << endl;
	EV << "PLCdelay32_d  is set to " << PLCdelay32_d  * 1000 << "s" << endl;
	EV << "PLCdelay64_d  is set to " << PLCdelay64_d  * 1000 << "s" << endl;
	EV << "PLCdelay128_d is set to " << PLCdelay128_d * 1000 << "s" << endl;
	EV << "PLCdelay220_d is set to " << PLCdelay220_d * 1000 << "s" << endl;
	EV << endl;}

	EV << "myPER is set to " << myPER << "%" << endl;
	EV << "messageCounter is set to " << messageCounter << endl;
	EV << endl;
}
