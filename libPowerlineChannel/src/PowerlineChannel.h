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

#define COMMENTS_ON	1				 // '1' Kommentare werden angezeigt
									 // '0' Kommentare werden ausgeblendet

#ifndef __INET_POWERLINECHANNEL_H
#define __INET_POWERLINECHANNEL_H

#include <omnetpp.h>
#include <cchannel.h>
#include <cdelaychannel.h>
#include <csimulation.h>

class SIM_API PowerlineChannel : public cDelayChannel
{
	protected:
		int typeOfChannel;			// '0': PLC, '1': BPLC

		int BPLCdelay64;			// Variablen fuer die vorsimulierten Zeiten aus dem .ned-File (BPLC)
		int BPLCdelay128;			// Die Variablen werden in [us] gefuehrt
		int BPLCdelay256;
		int BPLCdelay512;
		int BPLCdelay1024;

		int PLCdelay16;				// Variablen fuer die vorsimulierten Zeiten aus dem .ned-File (BPLC)
		int PLCdelay32;				// Die Variablen werden in [ms] gefuehrt
		int PLCdelay64;
		int PLCdelay128;
		int PLCdelay220;

		double BPLCdelay64_d;		// Variablen fuer die Delays, die in der Simulation benutzt werden (BPLC)
		double BPLCdelay128_d;		// Die Variablen werden in [s] gefuehrt
		double BPLCdelay256_d;
		double BPLCdelay512_d;
		double BPLCdelay1024_d;

		double PLCdelay16_d;		// Variablen fuer die Delays, die in der Simulation benutzt werden (PLC)
		double PLCdelay32_d;		// Die Variablen werden in [s] gefuehrt
		double PLCdelay64_d;
		double PLCdelay128_d;
		double PLCdelay220_d;

		double myPER;				// Variable fuer die Paketfehlerrate aus dem .ned-File
		long messageCounter;		// Variable fuer das Zaehlen der uebertragenen Nachrichten

		result_t myResult;

		// Hilfsfunktion fuer das Ausgeben aller Parameter
		void printParameters();

	public:
		// OMNeT++ Standardfunktionen
		virtual void initialize();
		virtual void finish();

		// Setzen und ausgeben der Laufzeitverzoegerung
		virtual void setDelay(double time);
		virtual double getDelay();

		// Virtuelle Funktionen aus der cChannel-Klasse
		virtual void processMessage(cMessage *msg, simtime_t time, result_t& result);
		virtual void handleParameterChange(const char *parname);
		virtual bool isTransmissionChannel() const {return true;}
		explicit PowerlineChannel(const char *name=NULL);
		static PowerlineChannel* create(const char *name);
		virtual ~PowerlineChannel();
};

#endif
