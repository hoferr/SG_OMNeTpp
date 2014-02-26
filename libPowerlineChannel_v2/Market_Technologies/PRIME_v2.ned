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

channel PRIME_Channel_v2
{
    @class(PowerlineChannel_v2);

    int typeOfChannel = 0;

    int PLCdelay16 = 120;
    int PLCdelay32 = 123;
    int PLCdelay64 = 128;
    int PLCdelay128 = 138;
    int PLCdelay220 = 153;
        
    int PLCdelay16_MAX = 111;
    int PLCdelay32_MAX = 112;
    int PLCdelay64_MAX = 114;
    int PLCdelay128_MAX = 116;
    int PLCdelay220_MAX = 120;
    
    int PLCdelay16_ROBO = 125;
    int PLCdelay32_ROBO = 129;
    int PLCdelay64_ROBO = 137;
    int PLCdelay128_ROBO = 152;
    int PLCdelay220_ROBO = 175;

    double myPER = default(0);

    double delay = 0;
    double datarate = 0.0;
    double ber = 0;
    double per = 0;
    bool disabled = false;
    @display("ls=red,,s;t=PRIME_Channel,t");
}