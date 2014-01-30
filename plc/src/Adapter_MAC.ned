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

package plc.src;

simple Adapter_MAC
{
    parameters:
        bool promiscuous = default(false);
        string address = default("auto");
        double txrate @unit("bps") = default(100Mbps);
        bool duplexEnabled = default(true);
        int txQueueLimit = default(1000);

        string queueModule = default("");
        int mtu = default(1500);
        @display("i=block/ifcard");
    gates:
        input upperLayerIn;
        output upperLayerOut;
        inout phys @labels(plc);
}
