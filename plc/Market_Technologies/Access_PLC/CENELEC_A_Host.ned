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

import plc.src.Internal_PLC_Modem;
import inet.util.NAMTraceWriter;
import inet.transport.udp.UDP;
import inet.transport.tcp.TCP;
import inet.nodes.inet.NetworkLayer;
import inet.networklayer.ipv4.RoutingTable;
import inet.networklayer.common.InterfaceTable;
import inet.linklayer.ppp.PPPInterface;
import inet.base.NotificationBoard;
import inet.applications.udpapp.UDPApp;
import inet.applications.tcpapp.TCPApp;
import inet.applications.pingapp.PingApp;


module CENELEC_A_Host
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
        @display("i=device/pc2");
    gates:
        inout pppg[];
        inout ethg[];
    submodules:
        namTrace: NAMTraceWriter {
            parameters:
                namid = namid;
                @display("p=60,310");
        }
        notificationBoard: NotificationBoard {
            parameters:
                @display("p=60,70");
        }
        interfaceTable: InterfaceTable {
            parameters:
                @display("p=60,150");
        }
        routingTable: RoutingTable {
            parameters:
                IPForward = IPForward;
                routerId = "";
                routingFile = routingFile;
                @display("p=60,230");
        }
        tcpApp[numTcpApps]: <tcpAppType> like TCPApp {
            parameters:
                @display("p=163,67");
        }
        tcp: TCP {
            parameters:
                @display("p=163,154");
        }
        udpApp[numUdpApps]: <udpAppType> like UDPApp {
            parameters:
                @display("p=272,67");
        }
        udp: UDP {
            parameters:
                @display("p=272,154");
        }
        pingApp: PingApp {
            parameters:
                @display("p=343,200");
        }
        networkLayer: NetworkLayer {
            parameters:
                proxyARP = false;
                @display("p=248,247;q=queue");
            gates:
                ifIn[sizeof(pppg)+sizeof(ethg)];
                ifOut[sizeof(pppg)+sizeof(ethg)];
        }
        ppp[sizeof(pppg)]: PPPInterface {
            parameters:
                @display("p=157,350,row,90;q=txQueue");
        }
        cenelec_a_plc[sizeof(ethg)]: Internal_PLC_Modem {
            parameters:
                plcmac.duplexEnabled = true;         // no unit
                plcmac.smartNotchingEnabled = false; // no unit
                plcmac.max_txrate = 0.0048;          // Mbit/s
                plcmac.vendorID = 1;                 // no unit
                plcmac.polite = false;               // no unit
                plcmac.typeOfModem = 0;              // PLC
                plcmac.CSMA_ONLY = false;			 // no unit
                plcmac.TDMA_ONLY = true;             // no unit
                plcmac.TDMA_PERIOD = 0.002;          // s - 10x BPLC value
                plcmac.MODE_CHANGE_TIME_TDMA = 0.02; // s
                plcmac.MODE_CHANGE_TIME_CSMA = 0.02; // s
                plcmac.ROBO_DATARATE = 0.001;        // Mbit/s
                plcmac.PRIORITY_1_CHANCE = 0;        // %
                plcmac.PRIORITY_2_CHANCE = 100;      // %
                plcmac.PRIORITY_3_CHANCE = 0;        // %

                plcmac.CSMA_CA_MAX_ADDITIONAL_WAIT_TIME = 1280;   // us - 1000x BPLC value
                plcmac.CHANNEL_UPDATE_RATIO = 5;                  // s
                plcmac.CIFS = 35840;  							  // us - 1000x BPLC value
                plcmac.RIFS = 26000;                              // us - 1000x BPLC value
                plcmac.PRIORITY_RESOLUTION_PERIOD = 71680;        // us - 1000x BPLC value
 
                plcencap.typeOfModem = 0;             // PLC
                plcencap.PRIORITY_1_CHANCE = 0;       // %
                plcencap.PRIORITY_2_CHANCE = 100;     // %
                plcencap.PRIORITY_3_CHANCE = 0;       // % 

                plcmac.MAX_PLC_DATA = 255; 		      // Byte							
                plcmac.MAX_PLC_FRAME = 270;           // Byte  						
                plcmac.MIN_PLC_FRAME = 0;             // Byte																									
                plcmac.PREAMBLE_BYTES = 0;  		  // Byte
                plcmac.SFD_BYTES = 0;				  // Byte
                plcmac.PLC_MAC_FRAME_BYTES = 25;      // Byte  
                plcmac.PLC_LLC_HEADER_LENGTH = 0;	  // Byte
                plcencap.MAX_PLC_DATA = 255; 		  // Byte						
                plcencap.MAX_PLC_FRAME = 270;         // Byte          						
                plcencap.MIN_PLC_FRAME = 0;           // Byte      																									
                plcencap.PREAMBLE_BYTES = 0;          // Byte
                plcencap.SFD_BYTES = 0;               // Byte
                plcencap.PLC_MAC_FRAME_BYTES = 25;    // Byte
                plcencap.PLC_LLC_HEADER_LENGTH = 0;   // Byte

                @display("p=329,350,row,90;q=txQueue");
        }
    connections allowunconnected:
        for i=0..numTcpApps-1 {
            tcpApp[i].tcpOut --> tcp.appIn++;
            tcpApp[i].tcpIn <-- tcp.appOut++;
        }

        tcp.ipOut --> networkLayer.tcpIn;
        tcp.ipIn <-- networkLayer.tcpOut;

        for i=0..numUdpApps-1 {
            udpApp[i].udpOut --> udp.appIn++;
            udpApp[i].udpIn <-- udp.appOut++;
        }

        udp.ipOut --> networkLayer.udpIn;
        udp.ipIn <-- networkLayer.udpOut;

        networkLayer.pingOut --> pingApp.pingIn;
        networkLayer.pingIn <-- pingApp.pingOut;

        // connections to network outside
        for i=0..sizeof(pppg)-1 {
            pppg[i] <--> ppp[i].phys;
            ppp[i].netwOut --> networkLayer.ifIn[i];
            ppp[i].netwIn <-- networkLayer.ifOut[i];
        }

        for i=0..sizeof(ethg)-1 {
            ethg[i] <--> cenelec_a_plc[i].phys;
            cenelec_a_plc[i].netwOut --> networkLayer.ifIn[sizeof(pppg)+i];
            cenelec_a_plc[i].netwIn <-- networkLayer.ifOut[sizeof(pppg)+i];
        }
}
