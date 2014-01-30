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

//import inet.linklayer.INetworkInterface;
import inet.linklayer.IWiredNic;
import inet.linklayer.queue.DropTailQueue;

//module Internal_PLC_Modem like INetworkInterface
module Internal_PLC_Modem like IWiredNic
{
    parameters:
        string queueType = default("DropTailQueue");
        @display("i=block/plug");
    gates:
        input upperLayerIn;
        output upperLayerOut;
        inout phys;
    submodules:
        queue: DropTailQueue {
            parameters:
                @display("p=42,40;q=l2queue");
        }
        plcmac: PlcMAC {
            parameters:
                queueModule = "queue";
                txQueueLimit = 100; // queue sends one packet at a time
                @display("p=81,120");
        }
        plcencap: PlcEncap {
            parameters:
                @display("p=116,40");
        }
//        iWiredNic: <paramName> like IWiredNic {
//            @display("p=30,109");
//        }
    connections:
        upperLayerIn --> queue.in;
        queue.out --> plcencap.upperLayerIn;
        upperLayerOut <-- { @display("m=n"); } <-- plcencap.upperLayerOut;
        plcencap.lowerLayerOut --> plcmac.upperLayerIn;
        plcencap.lowerLayerIn <-- plcmac.upperLayerOut;
        plcmac.phys <--> phys;
}
