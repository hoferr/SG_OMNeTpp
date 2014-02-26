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
// werden

package libpowerlinechannel_v2;

channel PowerlineChannel_v2
{
    @class(PowerlineChannel_v2);

    int typeOfChannel = default(1);		// '0': PLC, '1': BPLC

    int BPLCdelay64 = default(10);
    int BPLCdelay128 = default(20);
    int BPLCdelay256 = default(30);
    int BPLCdelay512 = default(40);
    int BPLCdelay1024 = default(50);
    
    int BPLCdelay64_MAX   = default(5);
    int BPLCdelay128_MAX  = default(10);
    int BPLCdelay256_MAX  = default(15);
    int BPLCdelay512_MAX  = default(20);
    int BPLCdelay1024_MAX = default(25);
    
    int BPLCdelay64_ROBO   = default(20);
    int BPLCdelay128_ROBO  = default(40);
    int BPLCdelay256_ROBO  = default(60);
    int BPLCdelay512_ROBO  = default(80);
    int BPLCdelay1024_ROBO = default(100);

    int PLCdelay16 = default(10);
    int PLCdelay32 = default(20);
    int PLCdelay64 = default(30);
    int PLCdelay128 = default(40);
    int PLCdelay220 = default(50);
    
    int PLCdelay16_MAX  = default(5);
    int PLCdelay32_MAX  = default(10);
    int PLCdelay64_MAX  = default(15);
    int PLCdelay128_MAX = default(20);
    int PLCdelay220_MAX = default(25);
    
    int PLCdelay16_ROBO  = default(20);
    int PLCdelay32_ROBO  = default(40);
    int PLCdelay64_ROBO  = default(60);
    int PLCdelay128_ROBO = default(80);
    int PLCdelay220_ROBO = default(100);

    double myPER = default(1);

    double delay = default(0);
    double datarate = 0.0;
    double ber = 0;
    double per = 0;
    bool disabled = false;
    @display("ls=blue,,s;t=PLCchannel_v2,t");
}
