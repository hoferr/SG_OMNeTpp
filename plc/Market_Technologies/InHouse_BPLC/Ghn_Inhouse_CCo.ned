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

package plc.Market_Technologies.InHouse_BPLC;

import plc.src.PlcNet;
import plc.src.Plc2Eth_Adapter;

// The modem is stuck (at the moment) on his average datarate for more stable simulations.

module Ghn_InHouse_CCo
{
    string queueType = default("DropTailQueue");
    @display("i=device/modem,#0080FF;bgb=234,115");
    gates:
        inout MAC_side;
        inout PLC_side[];
    submodules:
        plcNet: PlcNet {
            @display("p=173,55");
            propagationSpeed = 2e8;                   // m/s
            AVG_PER_RATE = default(0);  		      // %      
            MAX_PLC_DATARATE = 250;    			      // MBit/s 
            AVERAGE_PLC_DATARATE = 250; 			  // MBit/s  
            CHANNEL_FLUCTUATIONS = 0;  			      // %      
            CHANNEL_DISTRIBUTION_THETA = 0.25;        // no unit
            VENDOR_MALUS_2_NETWORKS = 50; 		      // %
            VENDOR_MALUS_3_NETWORKS = 66;  			  // %
            VENDOR_MALUS_4_NETWORKS = 75;  		      // %
            VENDOR_MALUS_UNPOLITENESS_ACTIVE = 5;     // %
            ISP_PERIOD = 10;   						  // s
            HOPCOUNT_LOSS = 0;		   				  // %
            ROBO_DATARATE = 250;                      // MBit/s
            PRIORITY_1_CHANCE = 0;                    // %
            PRIORITY_2_CHANCE = 80;                   // %
            PRIORITY_3_CHANCE = 20;                   // %
            TDMA_PERIOD = 0.0002;   				  // s
            MAXIMUM_CLIENTS = 31;                     // no unit
            TDMA_TIME_OUT = 0.004;   				  // s 
            CHANCE_TO_ACCEPT_QOS_REQ = 75;   	      // %
            BANDWIDTH_REQUEST_RESPONSE_CHANCE = 75;   // %
            TDMA_ONLY = true;	                      // no unit
            CSMA_ONLY = false;  					  // no unit
            MODE_CHANGE_TIME_CSMA = 0.02;             // s
            MODE_CHANGE_TIME_TDMA = 0.02;             // s
            LOSS_PER_METER = 0.8;                     // %
            KINK_LENGTH = 120;  			          // m
            type = 1;								  // BPLC
            vendorID = 1;							  // no unit
        }
        plc2Eth_Adapter: Plc2Eth_Adapter {
            @display("p=56,54");
            adapter_PLC.duplexEnabled = true;         // no unit
            adapter_PLC.smartNotchingEnabled = false; // no unit
            adapter_PLC.max_txrate = 1000;            // Mbit/s
            adapter_PLC.vendorID = 1;                 // no unit
            adapter_PLC.polite = false;               // no unit
            adapter_PLC.typeOfModem = 1;              // BPLC
            adapter_PLC.CSMA_ONLY = false;			  // no unit
            adapter_PLC.TDMA_ONLY = true;             // no unit
            adapter_PLC.TDMA_PERIOD = 0.0002;         // s
            adapter_PLC.MODE_CHANGE_TIME_TDMA = 0.02; // s
            adapter_PLC.MODE_CHANGE_TIME_CSMA = 0.02; // s
            adapter_PLC.ROBO_DATARATE = 1;            // Mbit/s
            adapter_PLC.PRIORITY_1_CHANCE = 0;        // %
            adapter_PLC.PRIORITY_2_CHANCE = 80;       // %
            adapter_PLC.PRIORITY_3_CHANCE = 20;       // %
            plcEncap.typeOfModem = 1;                 // BPLC
            plcEncap.PRIORITY_1_CHANCE = 0;           // %
            plcEncap.PRIORITY_2_CHANCE = 80;          // %
            plcEncap.PRIORITY_3_CHANCE = 20;   		  // %           
        }
    connections allowunconnected:
        for i=0..sizeof(PLC_side)-1 {
            PLC_side++ <--> plcNet.ethg++;
        }
        plc2Eth_Adapter.PLC_side <--> plcNet.ethg++;
        plc2Eth_Adapter.MAC_side <--> MAC_side;
}

