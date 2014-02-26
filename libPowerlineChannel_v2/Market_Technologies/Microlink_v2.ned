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

channel Microlink_Channel_v2
{
    @class(PowerlineChannel_v2);

    int typeOfChannel = 1;

    int BPLCdelay64 = 401;
    int BPLCdelay128 = 428;
    int BPLCdelay256 = 676;
    int BPLCdelay512 = 1170;
    int BPLCdelay1024 = 2156;
    
    int BPLCdelay64_MAX = 174;
    int BPLCdelay128_MAX = 182;
    int BPLCdelay256_MAX = 253;
    int BPLCdelay512_MAX = 396;
    int BPLCdelay1024_MAX = 681;
    
    int BPLCdelay64_ROBO = 1181;
    int BPLCdelay128_ROBO = 1270;
    int BPLCdelay256_ROBO = 2088;
    int BPLCdelay512_ROBO = 3724;
    int BPLCdelay1024_ROBO = 6995;

    double myPER = default(0);

    double delay = 0;
    double datarate = 0.0;
    double ber = 0;
    double per = 0;
    bool disabled = false;
    @display("ls=red,,s;t=Microlink_Channel,t");
}
