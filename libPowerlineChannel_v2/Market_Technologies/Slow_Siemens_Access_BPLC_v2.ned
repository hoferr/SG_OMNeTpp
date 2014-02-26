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

channel Slow_Siemens_Access_BPLC_Channel_v2
{
    @class(PowerlineChannel_v2);

    int typeOfChannel = 1;

    int BPLCdelay64 = 5389;
    int BPLCdelay128 = 5683;
    int BPLCdelay256 = 6604;
    int BPLCdelay512 = 7959;
    int BPLCdelay1024 = 10811;
    
    int BPLCdelay64_MAX = 850;
    int BPLCdelay128_MAX = 962;
    int BPLCdelay256_MAX = 6191;
    int BPLCdelay512_MAX = 7140;
    int BPLCdelay1024_MAX = 8529;
    
    int BPLCdelay64_ROBO = 6495;
    int BPLCdelay128_ROBO = 6617;
    int BPLCdelay256_ROBO = 8097;
    int BPLCdelay512_ROBO = 10904;
    int BPLCdelay1024_ROBO = 16934;

    double myPER = default(0);

    double delay = 0;
    double datarate = 0.0;
    double ber = 0;
    double per = 0;
    bool disabled = false;
    @display("ls=red,,s;t=Slow_Siemens_Access_BPLC_Channel,t");
}
