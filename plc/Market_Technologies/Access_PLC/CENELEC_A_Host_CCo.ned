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

package plc.Market_Technologies.Access_PLC;

import plc.src.PlcNet;

// The modem is stuck (at the moment) on his average datarate for more stable simulations.

module CENELEC_A_Host_CCo
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

        cenelec_a_Host: CENELEC_A_Host {
            @display("p=60,78");
        }
        plcNet: PlcNet {
            @display("p=144,78");
            AVG_PER_RATE = default(0);  		      // %      
            MAX_PLC_DATARATE = 0.003;    			  // MBit/s 
            AVERAGE_PLC_DATARATE = 0.003; 			  // MBit/s  
            CHANNEL_FLUCTUATIONS = 5;  			      // %      
            CHANNEL_DISTRIBUTION_THETA = 0.25;        // no unit
            VENDOR_MALUS_2_NETWORKS = 0; 		      // %
            VENDOR_MALUS_3_NETWORKS = 0;  			  // %
            VENDOR_MALUS_4_NETWORKS = 0;  		      // %
            VENDOR_MALUS_UNPOLITENESS_ACTIVE = 100;   // %
            ISP_PERIOD = 10;   						  // s
            HOPCOUNT_LOSS = 0;		   				  // %
            ROBO_DATARATE = 0.003;                    // MBit/s
            PRIORITY_1_CHANCE = 0;                    // %
            PRIORITY_2_CHANCE = 100;                  // %
            PRIORITY_3_CHANCE = 0;                    // %
            TDMA_PERIOD = 0.002;   				      // s - 10x BPLC value
            MAXIMUM_CLIENTS = 1000;                   // no unit
            TDMA_TIME_OUT = 0.004;   				  // s 
            CHANCE_TO_ACCEPT_QOS_REQ = 75;   	      // %
            BANDWIDTH_REQUEST_RESPONSE_CHANCE = 75;   // %
            TDMA_ONLY = true;	                      // no unit
            CSMA_ONLY = false;  					  // no unit
            MODE_CHANGE_TIME_CSMA = 0.02;             // s
            MODE_CHANGE_TIME_TDMA = 0.02;             // s
            LOSS_PER_METER = 0.1;                     // %
            KINK_LENGTH = 1000;  			          // m
            type = 0;								  // PLC
            vendorID = 1;							  // no unit

            MAX_PLC_DATA = 255; 					  // Byte						
            MAX_PLC_FRAME = 270;            		  // Byte				
            MIN_PLC_FRAME = 0;            			  // Byte																						
            PREAMBLE_BYTES = 0;                       // Byte
            SFD_BYTES = 0;							  // Byte
            PLC_MAC_FRAME_BYTES = 25;                 // Byte
            PLC_LLC_HEADER_LENGTH = 0;				  // Byte

            CSMA_CA_MAX_ADDITIONAL_WAIT_TIME = 1280;   // us - 1000x BPLC value
            CHANNEL_UPDATE_RATIO = 5;                  // s
            CIFS = 35840;  						       // us - 1000x BPLC value
            RIFS = 26000;                              // us - 1000x BPLC value
            PRIORITY_RESOLUTION_PERIOD = 71680;        // us - 1000x BPLC value
        }
    connections allowunconnected:
        cenelec_a_Host.ethg++ <--> plcNet.ethg++;
        for i=0..sizeof(ethg)-1 {
            ethg++ <--> plcNet.ethg++;
        }
}
