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

import inet.networklayer.common.InterfaceTable;
import inet.nodes.ethernet.Eth40G;
import inet.nodes.inet.StandardHost;
import ned.IdealChannel;


module PowerlineHost_CCo
{
    parameters:
        @node();
        //        int numTcpApps = default(0);
        //        int numUdpApps = default(0);
        //        string tcpAppType = default("n/a");
        //        string udpAppType = default("n/a");
        //        bool IPForward = default(false);
        //        int namid = default(-1);
        //        string routingFile = default("");
        @display("i=device/pc2,#0080FF");
    gates:
        //        inout pppg[];
        inout plcg[];
    submodules:

        powerlineHost: PowerlineHost {
            @display("p=60,78");
        }
        plcNet: PlcNet {
            @display("p=144,78");
        }
        interfaceTable: InterfaceTable {
            @display("p=37,20");
        }
    connections allowunconnected:
        powerlineHost.plcg++ <--> plcNet.plcg++;
        for i=0..sizeof(plcg)-1 {
            plcg++ <--> plcNet.plcg++;					// You have attached the two eth ports with an ideal channel <-->. You MUST specify a datarate and a delay ona channel (otherwise the ethernet mac cannot determine the transmission speed. Is it 10MBps, 100MBps or 40Gbps ???) [https://groups.google.com/forum/#!topic/omnetpp/vNSy1xRWMrY]
        }
}
