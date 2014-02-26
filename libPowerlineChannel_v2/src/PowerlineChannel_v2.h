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

#ifndef __INET_POWERLINECHANNEL_V2_H
#define __INET_POWERLINECHANNEL_V2_H

#include <omnetpp.h>
#include <cchannel.h>
#include <cdelaychannel.h>
#include <csimulation.h>

class SIM_API PowerlineChannel_v2 : public cDatarateChannel
{
	protected:
		int typeOfChannel;			// '0': PLC, '1': BPLC

		//===================================================================================================

		int BPLCdelay64;			// Variablen fuer die vorsimulierten Zeiten aus dem .ned-File (BPLC)
		int BPLCdelay128;			// Die Variablen werden in [us] gefuehrt (average datarate)
		int BPLCdelay256;
		int BPLCdelay512;
		int BPLCdelay1024;

		int BPLCdelay64_MAX;		// Variablen fuer die vorsimulierten Zeiten aus dem .ned-File (BPLC)
		int BPLCdelay128_MAX;		// Die Variablen werden in [us] gefuehrt (max datarate)
		int BPLCdelay256_MAX;
		int BPLCdelay512_MAX;
		int BPLCdelay1024_MAX;

		int BPLCdelay64_ROBO;		// Variablen fuer die vorsimulierten Zeiten aus dem .ned-File (BPLC)
		int BPLCdelay128_ROBO;		// Die Variablen werden in [us] gefuehrt (ROBO datarate)
		int BPLCdelay256_ROBO;
		int BPLCdelay512_ROBO;
		int BPLCdelay1024_ROBO;

		int PLCdelay16;				// Variablen fuer die vorsimulierten Zeiten aus dem .ned-File (BPLC)
		int PLCdelay32;				// Die Variablen werden in [ms] gefuehrt (average datarate)
		int PLCdelay64;
		int PLCdelay128;
		int PLCdelay220;

		int PLCdelay16_MAX;			// Variablen fuer die vorsimulierten Zeiten aus dem .ned-File (BPLC)
		int PLCdelay32_MAX;			// Die Variablen werden in [ms] gefuehrt (max datarate)
		int PLCdelay64_MAX;
		int PLCdelay128_MAX;
		int PLCdelay220_MAX;

		int PLCdelay16_ROBO;		// Variablen fuer die vorsimulierten Zeiten aus dem .ned-File (BPLC)
		int PLCdelay32_ROBO;		// Die Variablen werden in [ms] gefuehrt (ROBO datarate)
		int PLCdelay64_ROBO;
		int PLCdelay128_ROBO;
		int PLCdelay220_ROBO;

		//===================================================================================================

		double BPLCdelay64_d;		// Variablen fuer die Delays, die in der Simulation benutzt werden (BPLC)
		double BPLCdelay128_d;		// Die Variablen werden in [s] gefuehrt (average datarate)
		double BPLCdelay256_d;
		double BPLCdelay512_d;
		double BPLCdelay1024_d;

		double BPLCdelay64_MAX_d;	// Variablen fuer die Delays, die in der Simulation benutzt werden (BPLC)
		double BPLCdelay128_MAX_d;	// Die Variablen werden in [s] gefuehrt (max datarate)
		double BPLCdelay256_MAX_d;
		double BPLCdelay512_MAX_d;
		double BPLCdelay1024_MAX_d;

		double BPLCdelay64_ROBO_d;	// Variablen fuer die Delays, die in der Simulation benutzt werden (BPLC)
		double BPLCdelay128_ROBO_d;	// Die Variablen werden in [s] gefuehrt (ROBO datarate)
		double BPLCdelay256_ROBO_d;
		double BPLCdelay512_ROBO_d;
		double BPLCdelay1024_ROBO_d;

		double PLCdelay16_d;		// Variablen fuer die Delays, die in der Simulation benutzt werden (PLC)
		double PLCdelay32_d;		// Die Variablen werden in [s] gefuehrt
		double PLCdelay64_d;
		double PLCdelay128_d;
		double PLCdelay220_d;

		double PLCdelay16_MAX_d;	// Variablen fuer die Delays, die in der Simulation benutzt werden (PLC)
		double PLCdelay32_MAX_d;	// Die Variablen werden in [s] gefuehrt
		double PLCdelay64_MAX_d;
		double PLCdelay128_MAX_d;
		double PLCdelay220_MAX_d;

		double PLCdelay16_ROBO_d;	// Variablen fuer die Delays, die in der Simulation benutzt werden (PLC)
		double PLCdelay32_ROBO_d;	// Die Variablen werden in [s] gefuehrt
		double PLCdelay64_ROBO_d;
		double PLCdelay128_ROBO_d;
		double PLCdelay220_ROBO_d;

		//===================================================================================================

		double myPER;				// Variable fuer die Paketfehlerrate aus dem .ned-File
		long messageCounter;		// Variable fuer das Zaehlen der uebertragenen Nachrichten

		long msgCounterPLC16;
		long msgCounterPLC32;
		long msgCounterPLC64;
		long msgCounterPLC128;
		long msgCounterPLC220;

		long msgCounterPLCAll;

		long msgCounterBPLC64;
		long msgCounterBPLC128;
		long msgCounterBPLC256;
		long msgCounterBPLC512;
		long msgCounterBPLC1024;

		long msgCounterBPLCAll;

		result_t myResult;

		//===================================================================================================

		double avg_PLCdelay16;
		double avg_PLCdelay32;
		double avg_PLCdelay64;
		double avg_PLCdelay128;
		double avg_PLCdelay220;

		double avg_PLCdelayAll;

		double avg_BPLCdelay64;
		double avg_BPLCdelay128;
		double avg_BPLCdelay256;
		double avg_BPLCdelay512;
		double avg_BPLCdelay1024;

		double avg_BPLCdelayAll;

		double min_PLCdelay16;
		double min_PLCdelay32;
		double min_PLCdelay64;
		double min_PLCdelay128;
		double min_PLCdelay220;

		double min_BPLCdelay64;
		double min_BPLCdelay128;
		double min_BPLCdelay256;
		double min_BPLCdelay512;
		double min_BPLCdelay1024;

		double max_PLCdelay16;
		double max_PLCdelay32;
		double max_PLCdelay64;
		double max_PLCdelay128;
		double max_PLCdelay220;

		double max_BPLCdelay64;
		double max_BPLCdelay128;
		double max_BPLCdelay256;
		double max_BPLCdelay512;
		double max_BPLCdelay1024;

		// Hilfsfunktion fuer das Ausgeben aller Parameter
		void printParameters();

	public:
		// OMNeT++ Standardfunktionen
		virtual void initialize();
		virtual void finish();

		// Setzen und ausgeben der Laufzeitverzoegerung
		virtual void setDelay(double time, double byteSize);
		virtual double getDelay();

		virtual void setDatarate(double time);
		virtual double getDatarate();

		virtual double runtimeDistribution(double min, double mean, double max);

		// Virtuelle Funktionen aus der cChannel-Klasse
		virtual void processMessage(cMessage *msg, simtime_t time, result_t& result);
		virtual bool isTransmissionChannel() const {return true;}
		explicit PowerlineChannel_v2(const char *name=NULL);
		static PowerlineChannel_v2* create(const char *name);
		virtual ~PowerlineChannel_v2();
};

#endif
