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

package plc.Generic_Technologies;

import plc.src.PlcEncap;
import plc.src.Adapter_PLC;
import plc.src.Adapter_MAC;
import inet.linklayer.queue.DropTailQueue;
import inet.linklayer.ethernet.EtherEncap;


module Generic_Access_BPLC
{
    string queueType = default("DropTailQueue");
    @display("i=device/modem;bgb=240,331");
    gates:
        inout MAC_side;
        inout PLC_side;
    submodules:
        adapter_MAC: Adapter_MAC {
            queueModule = "dropTailQueue";
            txQueueLimit = 100;
            @display("p=72,161");
        }
        adapter_PLC: Adapter_PLC {
            queueModule = "dropTailQueue1";
            txQueueLimit = 100;
            duplexEnabled = true;         // no unit
            smartNotchingEnabled = false; // no unit
            max_txrate = 200;             // Mbit/s
            vendorID = 1;                 // no unit
            polite = true;                // no unit
            typeOfModem = 1;              // BPLC
            CSMA_ONLY = false;			  // no unit
            TDMA_ONLY = true;             // no unit
            TDMA_PERIOD = 0.0002;         // s
            MODE_CHANGE_TIME_TDMA = 0.02; // s
            MODE_CHANGE_TIME_CSMA = 0.02; // s
            ROBO_DATARATE = 6;            // Mbit/s
            PRIORITY_1_CHANCE = 5;        // %
            PRIORITY_2_CHANCE = 70;       // %
            PRIORITY_3_CHANCE = 25;       // %
            @display("p=164,161");
        }
        etherEncap: EtherEncap {
            @display("p=72,83");
        }
        plcEncap: PlcEncap {
            typeOfModem = 1;              // BPLC
            PRIORITY_1_CHANCE = 5;        // %
            PRIORITY_2_CHANCE = 70;       // %
            PRIORITY_3_CHANCE = 25;       // %
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
