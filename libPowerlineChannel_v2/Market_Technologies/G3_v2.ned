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

channel G3_Channel_v2
{
    @class(PowerlineChannel_v2);

    int typeOfChannel = 0;

    int PLCdelay16  = 136;
    int PLCdelay32  = 140;
    int PLCdelay64  = 151;
    int PLCdelay128 = 170;
    int PLCdelay220 = 198;
    
    int PLCdelay16_MAX = 124;
    int PLCdelay32_MAX = 126;
    int PLCdelay64_MAX = 131;
    int PLCdelay128_MAX = 142;
    int PLCdelay220_MAX = 157;
    
    int PLCdelay16_ROBO = 193;
    int PLCdelay32_ROBO = 208;
    int PLCdelay64_ROBO = 238;
    int PLCdelay128_ROBO = 298;
    int PLCdelay220_ROBO = 385;

    double myPER = default(0);

    double delay = 0;
    double datarate = 0.0;
    double ber = 0;
    double per = 0;
    bool disabled = false;
    @display("ls=red,,s;t=G3_Channel,t");
}