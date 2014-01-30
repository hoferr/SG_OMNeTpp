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

/*

In dieser Datei sind alle Konstanten der PLC-Welt zusammengetragen. Desweiteren kann hier etwas Konfiguration
betrieben werden.

*/

#ifndef __INET_PLC_H
#define __INET_PLC_H

#include "INETDefs.h"

// #define MAX_PACKETBURST              4																			// UPDATED!
// #define GIGABIT_MAX_BURST_BYTES      6464  /* maximum burst length in bytes */ 									// UPDATED!
// #define MAX_PLC_DATA                 1500  /* including LLC, SNAP etc headers */								// confirmed
// #define MAX_PLC_FRAME                1616  /* excludes preamble and SFD */										// UPDATED!
// #define MIN_PLC_FRAME                162   /* excludes preamble and SFD */										// UPDATED!
// #define GIGABIT_MIN_FRAME_WITH_EXT   512   /* excludes preamble and SFD, but includes 448 byte extension */	// UNNECCESSARY!
// #define INTERFRAME_GAP_BITS          96																			// confirmed
#define PLC_TXRATE             		10000000.0         /* 10 Mbit/sec (in bit/s) */						// UNNECCESSARY!    TODO: Uncommented by Ramon; seems necessary!?!
// #define FAST_PLC_TXRATE       		100000000.0        /* 100 Mbit/sec (in bit/s) */						// UNNECCESSARY!
#define GIGABIT_PLC_TXRATE   	    1000000000.0       /* 1 Gbit/sec (in bit/s) */							// UNNECCESSARY!    TODO: Uncommented by Ramon; seems necessary!?!
// #define FAST_GIGABIT_PLC_TXRATE		10000000000.0      /* 10 Gbit/sec (in bit/s) */						// UNNECCESSARY!
#define SLOT_TIME                    (512.0/PLC_TXRATE)     /* for PLC & Fast PLC, in seconds */				// Needs to be updated on every calculateParameters()  TODO: Uncommented by Ramon; seems necessary!?!
#define GIGABIT_SLOT_TIME            (4096.0/GIGABIT_PLC_TXRATE) /* seconds */								// UNNECCESSARY!    TODO: Uncommented by Ramon
// #define MAX_ATTEMPTS                 5																			// confirmed
// #define BACKOFF_RANGE_LIMIT          6																			// UPDATED!
// #define JAM_SIGNAL_BYTES             4
// #define PREAMBLE_BYTES               7
// #define SFD_BYTES                    1
// #define PAUSE_BITTIME                512 /* pause is in 512-bit-time units */

// #define PLC_MAC_FRAME_BYTES         (20)      /* src(6)+dest(6)+segment_control(5)+frame_control(3) */			// UPDATED!
// #define PLC_LLC_HEADER_LENGTH       (3) 	  /* ssap(1)+dsap(1)+control(1) */
// #define PLC_SNAP_HEADER_LENGTH      (5)       /* org(3)+local(2) */
//#define PLC_PAUSE_COMMAND_BYTES      (6)       /* FIXME verify */

// CHANGE ------------------------------------------------------------------------------
// #define CSMA_CA_MAX_ADDITIONAL_WAIT_TIME    1.28   /* us */  	 // confirmed
// #define CHANNEL_UPDATE_RATIO                   5   /* s */   	 // confirmed

/*
	Zitat Siemens zur Paketfehlerrate:
	"Aus User-Sicht ist diese sehr niedrig, sprich gegen 0, weil der PLC MAC fehlerhafte Frames wiederholt.
    Aus PLC-MAC-Sicht wird die BER verwendet um Modulation und Forward Error Correction Rate anzupassen. Daraus
    folgt, dass die BER sehr hoch sein kann. Darauf reagiert der PLC MAC dynamisch. Deshalb kann hier keine
    typische BER angegeben werden." (27.04.2010)

    -> durch die dynamische Anpassung der FEC wird die PER nahe null sein. Fuer die Simulation wird sie gleich
       null gesetzt. Der hieraus resultierende Fehler scheint vernachlaessigbar.
*/

// THESE ELEMENTS WERE SHIFTED INTO THE PLCNET-MODULES
// #define AVG_PER_RATE                           0   /* % */       // confirmed
// #define MAX_PLC_DATARATE					    200   /* MBit/s */  // confirmed
// #define AVERAGE_PLC_DATARATE                  45   /* MBit/s */  // confirmed
// #define ROBO_DATARATE					      6   /* MBit/s */  // confirmed
// #define CHANNEL_FLUCTUATIONS                   5   /* % */   	// to confirm
// #define CHANNEL_DISTRIBUTION_THETA          0.25   /* no unit */ // to confirm
// #define ROBO_DATARATE                          6   /* MBit/s */  // confirmed

// #define CIFS							      35.84   /* us */      // confirmed
// #define RIFS							      26.00   /* us */      // confirmed
// #define PRIORITY_RESOLUTION_PERIOD         71.68   /* us */      // confirmed
// #define VENDOR_AWARENESS_PERIOD           500000   /* us */      // assumption (0.25x mode duration)

// #define FAIR_DIVISION_TXRATE_MODIFIER        0.50   /* no unit */ // UNNECCESSARY!
// #define UNFAIR_DIVISION_TXRATE_MODIFIER_1    0.55   /* no unit */ // UNNECCESSARY!
// #define UNFAIR_DIVISION_TXRATE_MODIFIER_2    0.35   /* no unit */ // UNNECCESSARY!
// #define UNFAIR_DIVISION_TXRATE_MODIFIER_3    0.40   /* no unit */ // UNNECCESSARY!


// #define VENDOR_MALUS_2_NETWORKS				    4   /* % */		  // confirmed
// #define VENDOR_MALUS_3_NETWORKS				    8   /* % */		  // confirmed
// #define VENDOR_MALUS_4_NETWORKS				   12   /* % */		  // confirmed
// #define VENDOR_MALUS_UNPOLITENESS_ACTIVE        25   /* % */       // assumption
// #define ISP_PERIOD							    5   /* s */		  // assumption (0.5x mode duration)
// #define HOPCOUNT_LOSS						  1.8   /* % */		  // to confirm

/*
	Zitat Siemens zur Verteilung der Prioritaeten:
	"Die Verteilung der Prioritaeten ist sehr stark von der Anwendung abhaengig. Beispiel aus dem In-home Szenario:
    wenn Prioritaet-4 der Voice class entspricht, so wird diese von Voip Equipment verwendet. Typisch dafuer: kleine
    Frames und im Verhaeltnis zur moeglichen Bandbreite ein kleiner Anteil < 10%. Typisches Protokoll ist UDP; meist
    mit RTP darueber. Auch einige HomePlug Management Frames sowie IGMP-Frames nutzen diese Prioritaet.
    Prioritaet-3 entspricht dann der Video class. Hier kann der Anteil an der moeglichen Bandbreite schon sehr gross
    sein; die moegliche Bandbreite wird typischerweise aber nicht ueberschritten. Grosse Frames (~1400 Bytes) sind ueblich.
    Typisches Protokoll ist UDP; meist mit RTP darueber.
    Prioritaet-2 entspricht dann der Best Effort class und ist ausserdem die Default-Prioritaet. Jeder Traffic, der
    nicht klassifiziert werden kann, landet hier. Frame Groessen variieren hier stark, die verfuegbare Bandbreite kann
    auch von Anwendungen ueberschritten werden. Paketverluste sind dann nicht vermeidbar. Die Anwendungen muessen damit
    klar kommen. TCP ist typisches Protokoll.
    Prioritaet-1 ist die Bulk class. Diese niedrigste Prioritaet wird selten verwendet. Typisch hierfuer sind eher
    grosse Frames sowie das TCP-Protokoll. Anwendungen, welche die Bulk class nutzen wollen niemanden stoeren, aber
    trotzdem soviel Bandbreite wie moeglich. Typische Anwendung sind Downloads (FTP) sowie File Sharing. Meist
    werden/duerfen Anwendungen das ToS-Feld im IP-Header nicht setzen obwohl es Sinn macht. Deshalb wird diese
    Prioritaet eher selten bis gar nicht verwendet." (27.04.2010)

    -> Daraus wurde folgende Verteilung der Prioritaeten abgeschaetzt:
*/

// #define PRIORITY_1_CHANCE      				5   /* % */		  // confirmed
// #define PRIORITY_2_CHANCE       			   70   /* % */       // confirmed
// #define PRIORITY_3_CHANCE       			   15   /* % */       // confirmed
// #define PRIORITY_4_CHANCE                   10      %          // is defined by chances 1...3

/*
	Zu den Verweildauern im TDMA / CSMA Modus:
	Nach den Angaben von Siemens sind die Verweildauern in TDMA- und CSMA-Modus in etwa gleich (CSMA
	etwas kuerzer, wegen der Beacon Region) - nimmt man aber die Originalzeiten einer/der Beacon Period
	(0,04s) kann man in der Simulation kaum noch etwas erkennen, desweiteren funktioniert sie dann nicht
	mehr so fluessig. Da fuer die Simulation nur groessere Zeitraeume von Interesse sind, wurden diese Zeiten
	gleichmaessig nach oben multipliziert, so dass zusammenhaengend mehr Zeit in einem Modus verbracht wird,
	im Mittel jedoch beide Verkehrsarten gleich haeufig aktiv sind.
*/

// #define TDMA_PERIOD						    0.002   /* s */        // assumption (1/10 * MODE_CHANGE_TIME_TDMA)
// #define MAXIMUM_CLIENTS						   31   /* no unit */  // confirmed
// #define TDMA_TIME_OUT						0.004   /* s */		   // assumption (2x TDMA_PERIOD)
// #define CHANCE_TO_ACCEPT_QOS_REQ			       75   /* % */        // to confirm
// #define BANDWIDTH_REQUEST_RESPONSE_CHANCE      75    /* %*/		   // to confirm

// Configuration (TDMA / CSMA, "0" for OFF, "1" for ON)

// #define TDMA_ONLY								0	/* bool */		// If both are zero, both modes are possible!
// #define CSMA_ONLY								1   /* bool */
// #define MODE_CHANGE_TIME_CSMA				 0.02   /* s */			// confirmed 1/50Hz
// #define MODE_CHANGE_TIME_TDMA				 0.02   /* s */         // confirmed 1/50Hz

// AUTO_JAM_ENABLED (on) kann fuer die Simulation eines "hidden node" verwendet werden.
// Configuration ("0" for OFF, "1" for ON)

// #define LOSS_PER_METER					      0.8   /* % */       // x% from current datarate above KINK_LENGTH
// #define KINK_LENGTH							  120   /* m */       // source: devolo AG
#define AUTO_JAM_ENABLED					    0   /* bool */    // for checking purposes only
#define AUTO_JAM_REPETITION					  100   /* no unit */ // for checking purposes only
#define RANDOM_PRIORITY                         1   /* bool */    // for checking purposes only
#define COMMENTS_ON                             1   /* bool */    // for checking purposes only

#define CHN_OVERWRITE_ENABLED					1   /* bool */    // for config purposes
#define DATA_COLLECT_INTERVAL                  20   /* s */       // for config purposes
// -------------------------------------------------------------------------------------

#endif
