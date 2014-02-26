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

channel HomePlugAV1o1_Channel_v2
{
    @class(PowerlineChannel_v2);

    int typeOfChannel = 1;

    int BPLCdelay64 = 115;
    int BPLCdelay128 = 119;
    int BPLCdelay256 = 147;
    int BPLCdelay512 = 204;
    int BPLCdelay1024 = 318;
    
    int BPLCdelay64_MAX = 86;
    int BPLCdelay128_MAX = 86;
    int BPLCdelay256_MAX = 93;
    int BPLCdelay512_MAX = 106;
    int BPLCdelay1024_MAX = 132;
    
    int BPLCdelay64_ROBO = 308;
    int BPLCdelay128_ROBO = 326;
    int BPLCdelay256_ROBO = 534;
    int BPLCdelay512_ROBO = 906;
    int BPLCdelay1024_ROBO = 1207;

    double myPER = default(0);

    double delay = 0;
    double datarate = 0.0;
    double ber = 0;
    double per = 0;
    bool disabled = false;
    @display("ls=red,,s;t=HomePlugAV1o1_Channel,t");
}