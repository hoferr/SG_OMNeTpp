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

module PowerlineHost_CCo_Orig
{
    parameters:
        @node();
        int numTcpApps = default(0);
        int numUdpApps = default(0);
        string tcpAppType = default("n/a");
        string udpAppType = default("n/a");
        bool IPForward = default(false);
        int namid = default(-1);
        string routingFile = default("");
        @display("i=device/pc2,#0080FF");
    gates:
        inout pppg[];
        inout ethg[];
    submodules:

        powerlineHost: PowerlineHost {
            @display("p=60,78");
        }
        plcNet: PlcNet {
            @display("p=144,78");
        }
    connections allowunconnected:
        powerlineHost.ethg++ <--> plcNet.ethg++;
        for i=0..sizeof(ethg)-1 {
            ethg++ <--> plcNet.ethg++;
        }
}
