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

channel CENELEC_ABC_Channel_v2
{
    @class(PowerlineChannel_v2);

    int typeOfChannel = 0;

    int PLCdelay16 = 133;
    int PLCdelay32 = 137;
    int PLCdelay64 = 146;
    int PLCdelay128 = 163;
    int PLCdelay220 = 188;
    
    int PLCdelay16_MAX = 117;
    int PLCdelay32_MAX = 118;
    int PLCdelay64_MAX = 121;
    int PLCdelay128_MAX = 126;
    int PLCdelay220_MAX = 134;
    
    int PLCdelay16_ROBO = 186;
    int PLCdelay32_ROBO = 200;
    int PLCdelay64_ROBO = 227;
    int PLCdelay128_ROBO = 283;
    int PLCdelay220_ROBO = 362;

    double myPER = default(0);

    double delay = 0;
    double datarate = 0.0;
    double ber = 0;
    double per = 0;
    bool disabled = false;
    @display("ls=red,,s;t=CENELEC_ABC_Channel,t");
}

