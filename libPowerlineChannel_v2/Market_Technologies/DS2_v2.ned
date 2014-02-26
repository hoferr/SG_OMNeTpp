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

channel DS2_Channel_v2
{
    @class(PowerlineChannel_v2);

    int typeOfChannel = 1;

    int BPLCdelay64 = 234;
    int BPLCdelay128 = 232;
    int BPLCdelay256 = 243;
    int BPLCdelay512 = 265;
    int BPLCdelay1024 = 308;
    
	int BPLCdelay64_MAX = 208;
    int BPLCdelay128_MAX = 199;
    int BPLCdelay256_MAX = 198;
    int BPLCdelay512_MAX = 191;
    int BPLCdelay1024_MAX = 173;
    
    int BPLCdelay64_ROBO = 475;
    int BPLCdelay128_ROBO = 486;
    int BPLCdelay256_ROBO = 623;
    int BPLCdelay512_ROBO = 897;
    int BPLCdelay1024_ROBO = 1444;

    double myPER = default(0);

    double delay = 0;
    double datarate = 0.0;
    double ber = 0;
    double per = 0;
    bool disabled = false;
    @display("ls=red,,s;t=DS2_Channel,t");
}