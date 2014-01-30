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

simple PlcNet
{
    parameters:
        @node();
        string positions;
        int type = default(1);
        // double propagationSpeed @unit("mps") = default(200000000mps); // correct: m/s !!!
        double propagationSpeed = default(2e8); // correct: m/s !!!

        double AVG_PER_RATE = default(0);  		  			// %       // confirmed
        double MAX_PLC_DATARATE = default(200);    			// MBit/s  // confirmed
        double AVERAGE_PLC_DATARATE = default(45); 			// MBit/s  // confirmed
        double CHANNEL_FLUCTUATIONS = default(5);  			// %       // to confirm
        double CHANNEL_DISTRIBUTION_THETA = default(0.25);  // no unit // to confirm

        double VENDOR_MALUS_2_NETWORKS	= default(50); 		     // %
        double VENDOR_MALUS_3_NETWORKS	= default(66);  		 // %
        double VENDOR_MALUS_4_NETWORKS	= default(75);  		 // %
        double VENDOR_MALUS_UNPOLITENESS_ACTIVE  = default(0.5); // %
        double ISP_PERIOD = default(5);   						 // s
        double HOPCOUNT_LOSS = default(1.0);	   				 // %
        
        double ROBO_DATARATE = default(6);  // MBit/s

		double PRIORITY_1_CHANCE = default(5);    // %
		double PRIORITY_2_CHANCE = default(70);   // %
		double PRIORITY_3_CHANCE = default(15);   // %
     // double PRIORITY_4_CHANCE = default(10);   // %          // is defined by chances 1...3

        double TDMA_PERIOD = default(0.002);   					  // s
        int MAXIMUM_CLIENTS = default(31);   
        double TDMA_TIME_OUT = default(0.004);   				  // s 
        double CHANCE_TO_ACCEPT_QOS_REQ	= default(75);   		  // %
        double BANDWIDTH_REQUEST_RESPONSE_CHANCE  = default(75);  // %
        
        bool TDMA_ONLY = default(false);	
        bool CSMA_ONLY = default(false);  
        double MODE_CHANGE_TIME_CSMA = default(0.02);   // s
        double MODE_CHANGE_TIME_TDMA = default(0.02);   // s
        double LOSS_PER_METER = default(0.8);           // %
        double KINK_LENGTH	= default(120);  			// m
        
        int vendorID = default(1);
        
        bool reportEnabled = default(true);
        
        //===================================================================================
        int MAX_PACKETBURST = default(4);																			
        int GIGABIT_MAX_BURST_BYTES = default(6464);  // maximum burst length in bytes 									
        int MAX_PLC_DATA = default(1500);  			  // including LLC, SNAP etc headers								
        int MAX_PLC_FRAME = default(1616);            // excludes preamble and SFD								
        int MIN_PLC_FRAME = default(162);             // excludes preamble and SFD									
        int INTERFRAME_GAP_BITS = default(96);																
        int MAX_ATTEMPTS = default(5);																	
        int BACKOFF_RANGE_LIMIT = default(6);																	
        int JAM_SIGNAL_BYTES = default(4);
        int PREAMBLE_BYTES = default(7);
        int SFD_BYTES = default(1);
        int PAUSE_BITTIME = default(512); 	          // pause is in 512-bit-time units
        int PLC_MAC_FRAME_BYTES = default(20);        // src(6)+dest(6)+segment_control(5)+frame_control(3)
        int PLC_LLC_HEADER_LENGTH = default(3); 	  // ssap(1)+dsap(1)+control(1)
        int PLC_SNAP_HEADER_LENGTH = default(5);      // org(3)+local(2)
        int PLC_PAUSE_COMMAND_BYTES  = default(6);    // FIXME verify
        
        double CSMA_CA_MAX_ADDITIONAL_WAIT_TIME = default(1.28);   // us
 		double CHANNEL_UPDATE_RATIO = default(5);                  // s 
 		double CIFS = default(35.84);   						   // us
 		double RIFS = default(26.00);   						   // us
 		double PRIORITY_RESOLUTION_PERIOD = default(71.68);        // us
 		double VENDOR_AWARENESS_PERIOD = default(500000);          // us
        //===================================================================================

        @display("i=block/socket");
    gates:
//        inout ethg[];
        inout plcg[];
}

