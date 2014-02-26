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

package libpowerlinechannel;

channel PowerlineChannel
{
    @class(PowerlineChannel);

    int typeOfChannel = default(1);		// '0': PLC, '1': BPLC

    int BPLCdelay64 = default(10);
    int BPLCdelay128 = default(20);
    int BPLCdelay256 = default(30);
    int BPLCdelay512 = default(40);
    int BPLCdelay1024 = default(50);

    int PLCdelay16 = default(10);
    int PLCdelay32 = default(20);
    int PLCdelay64 = default(30);
    int PLCdelay128 = default(40);
    int PLCdelay220 = default(50);

    double myPER = default(1);

    double delay = default(0);
    double datarate = 0.0;
    double ber = 0;
    double per = 0;
    bool disabled = false;
    @display("ls=red,,s;t=PLCchannel,t");
}
