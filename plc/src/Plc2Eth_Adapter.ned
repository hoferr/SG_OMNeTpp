// Lehrstuhl fuer Energietransport und -speicherung
// UNIVERSITAET DUISBURG-ESSEN
//
// ef.Ruhr E-DeMa AP-2
//
// Wissenschaftlicher Mitarbeiter:
// Dipl.-Ing. Holger Kellerbauer
//
// Das Linklayer-Paket "powerline" umfasst eine Sammlung von Modulen, die zur Simulation von Powerline-
// ?bertragungsstrecken in intelligenten Energieverteilsystemen programmiert worden sind. 
//
// Dieser Quellcode wurde erstellt von Dipl.-Ing. Holger Kellerbauer - er basiert auf dem INET Framework-Modul
// "Linklayer/Ethernet" von Andras Varga (c) 2003. Er ist gesitiges Eigentum des Lehrstuhles f?r Energietransport
// und -speicherung der Universitaet Duisburg-Essen, und darf ohne Genehmigung weder weitergegeben, noch verwendet
// werden.

package plc.src;

import inet.linklayer.ethernet.EtherEncap;
import inet.linklayer.queue.DropTailQueue;


module Plc2Eth_Adapter
{
    string queueType = default("DropTailQueue");
    @display("i=device/modem;bgb=240,331");
    gates:
        inout MAC_side;
        inout PLC_side;
    submodules:
        adapter_MAC: Adapter_MAC {
            queueModule = "dropTailQueue";
            txQueueLimit = 100; // queue sends one packet at a time
            @display("p=72,161");
        }
        adapter_PLC: Adapter_PLC {
            queueModule = "dropTailQueue1";
            txQueueLimit = 100; // queue sends one packet at a time
            @display("p=164,161");
        }
        etherEncap: EtherEncap {
            @display("p=72,83");
        }
        plcEncap: PlcEncap {
            @display("p=164,83");
        }
        dropTailQueue: DropTailQueue {
            @display("p=72,243");
        }
        dropTailQueue1: DropTailQueue {
            @display("p=164,243");
        }
    connections allowunconnected:
        adapter_MAC.phys <--> MAC_side;
        adapter_PLC.phys <--> PLC_side;
        adapter_MAC.upperLayerOut --> etherEncap.lowerLayerIn;
        etherEncap.lowerLayerOut --> adapter_MAC.upperLayerIn;
        plcEncap.lowerLayerOut --> adapter_PLC.upperLayerIn;
        adapter_PLC.upperLayerOut --> plcEncap.lowerLayerIn;
        etherEncap.upperLayerOut --> plcEncap.upperLayerIn;
        plcEncap.upperLayerOut --> etherEncap.upperLayerIn;
}
