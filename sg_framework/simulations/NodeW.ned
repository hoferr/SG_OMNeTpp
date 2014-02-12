// Standard host with LR-WPAN

import inet.applications.IPingApp;
import inet.applications.ISCTPApp;
import inet.applications.ITCPApp;
import inet.applications.IUDPApp;
import inet.transport.ISCTP;
import inet.transport.ITCP;
import inet.transport.IUDP;
import inet.base.NotificationBoard;
import inet.linklayer.IExternalNic;
import inet.linklayer.IWiredNic;
import inet.linklayer.IWirelessNic;
import inet.linklayer.loopback.LoopbackInterface;
import inet.mobility.IMobility;
import inet.networklayer.common.InterfaceTable;
import inet.networklayer.ipv6.RoutingTable6;
import inet.nodes.ipv6.NetworkLayer6;
import inet.wpan.linklayer.ieee802154.Ieee802154csmaNic;
import inet.wpan.Isabel.Base.Display;
//import plc.Market_Technologies.Access_BPLC.Ghn_AMI;


module NodeW
{
    parameters:
        @display("bgb=803,479");
        @node;
        @labels(node,ethernet-node,wireless-node);
        int numExtInterfaces = default(0);
        int numRadios = default(1);
        string mobilityType = default("StationaryMobility");
        xml routingTable6 = default(xml("<routingTable/>"));
        bool IPForward = default(true);
        int numTcpApps = default(0);  // no of TCP apps. Specify the app types in INI file with tcpApp[0..1].typename="TCPEchoApp" syntax
        int numUdpApps = default(0);  // no of UDP apps. Specify the app types in INI file with udpApp[0..1].typename="UDPVideoStreamCli" syntax
        int numSctpApps = default(0); // no of SCTP apps. Specify the app types in INI file with sctpApp[0..1].typename="SCTPServer" syntax
        int numPingApps = default(0);  // no of PING apps. Specify the app types in INI file with pingApp[0..1].typename="PingApp" syntax
        string tcpType = default(firstAvailable("TCP", "TCP_lwIP", "TCP_NSC", "TCP_None"));  // tcp implementation (e.g. ~TCP, ~TCP_lwIP, ~TCP_NSC) or ~TCPSpoof
        string udpType = default(firstAvailable("UDP","UDP_None"));
        string sctpType = default(firstAvailable("SCTP","SCTP_None"));
    gates:
        input radioIn @directIn;
        inout pppg[] @labels(PPPFrame-conn);
        inout ethg[] @labels(EtherFrame-conn);
    //        inout plcg @labels(PLCFrame-conn);
    submodules:
        notificationBoard: NotificationBoard {
            parameters:
                @display("p=53,155;is=s");
        }

        // optional mobility module. Required only if wireless cards are present
        //        mobility: <mobilityType> like IMobility if mobilityType != "" && numRadios > 0 {
        mobility: <mobilityType> like IMobility {
            parameters:
                @display("p=53,111");
        }

        disp: Display {
            parameters:
                @display("p=53,342;i=block/app2");

        }

        // network layer
        networkLayer: NetworkLayer6 {
            parameters:
                @display("p=329,287;q=queue");
        }

        routingTable6: RoutingTable6 {
            parameters:
                @display("p=53,225;is=s");
                isRouter = IPForward;
                routingTable = routingTable6;
        }

        // linklayer
        interfaceTable: InterfaceTable {
            parameters:
                @display("p=53,287;is=s");
        }

        lo0: LoopbackInterface {
            @display("p=78,406");
        }
        //        wlan[numRadios]: <default("Ieee80211Nic")> like IWirelessNic {
        //            parameters:
        //                @display("p=159,406;q=queue");
        //        }
        lrwpan: Ieee802154csmaNic {
            parameters:
                @display("p=397,406;q=queue;i=block/ifcard");
        }
        eth[sizeof(ethg)]: <default("EthernetInterface")> like IWiredNic {
            parameters:
                @display("p=282,406,row,90;q=txQueue");
        }
        ppp[sizeof(pppg)]: <default("PPPInterface")> like IWiredNic {
            parameters:
                @display("p=530,406,row,90;q=txQueue");
        }
        ext[numExtInterfaces]: <default("ExtInterface")> like IExternalNic {
            parameters:
                @display("p=665,406,row,90;q=txQueue;i=block/ifcard");
        }
        tcpApp[numTcpApps]: <> like ITCPApp {
            parameters:
                @display("p=186,54,row,60");
        }
        tcp: <tcpType> like ITCP if numTcpApps>0 {
            parameters:
                @display("p=186,141");
        }
        udpApp[numUdpApps]: <> like IUDPApp {
            parameters:
                @display("p=336,54,row,60");
        }
        udp: <udpType> like IUDP if numUdpApps>0 {
            parameters:
                @display("p=336,141");
        }
        sctpApp[numSctpApps]: <> like ISCTPApp {
            parameters:
                @display("p=501,54,row,60");
        }
        sctp: <sctpType> like ISCTP if numSctpApps>0 {
            @display("p=501,141");
        }
        pingApp[numPingApps]: <default("PingApp")> like IPingApp {
            parameters:
                @display("p=501,230,row,60");
        }
    //        plc: Ghn_AMI {
    //            @display("p=391,401");
    //        }
    connections allowunconnected:
        // connections to network outside
        lo0.upperLayerIn <-- networkLayer.ifOut++;
        lo0.upperLayerOut --> networkLayer.ifIn++;

        radioIn --> lrwpan.radioIn;
        lrwpan.upperLayerOut --> networkLayer.ifIn++;
        lrwpan.upperLayerIn <-- networkLayer.ifOut++;

        for i=0..sizeof(ethg)-1 {
            ethg[i] <--> eth[i].phys;
            eth[i].upperLayerOut --> networkLayer.ifIn++;
            eth[i].upperLayerIn <-- networkLayer.ifOut++;
        }

        for i=0..sizeof(pppg)-1 {
            pppg[i] <--> ppp[i].phys;
            ppp[i].upperLayerOut --> networkLayer.ifIn++;
            ppp[i].upperLayerIn <-- networkLayer.ifOut++;
        }

        for i=0..numExtInterfaces-1 {
            ext[i].upperLayerOut --> networkLayer.ifIn++;
            ext[i].upperLayerIn <-- networkLayer.ifOut++;
        }

        for i=0..numTcpApps-1 {
            tcpApp[i].tcpOut --> tcp.appIn++;
            tcpApp[i].tcpIn <-- tcp.appOut++;
        }

        tcp.ipv6Out --> networkLayer.tcpIn if numTcpApps>0;
        tcp.ipv6In <-- networkLayer.tcpOut if numTcpApps>0;

        for i=0..numUdpApps-1 {
            udpApp[i].udpOut --> udp.appIn++;
            udpApp[i].udpIn <-- udp.appOut++;
        }

        udp.ipv6Out --> networkLayer.udpIn if numUdpApps>0;
        udp.ipv6In <-- networkLayer.udpOut if numUdpApps>0;

        for i=0..numSctpApps-1 {
            sctpApp[i].sctpOut --> sctp.from_appl++;
            sctp.to_appl++ --> sctpApp[i].sctpIn;
        }
        sctp.to_ipv6 --> networkLayer.sctpIn if numSctpApps>0;
        networkLayer.sctpOut --> sctp.from_ipv6 if numSctpApps>0;

        for i=0..numPingApps-1 {
            networkLayer.pingOut++ --> pingApp[i].pingv6In;
            networkLayer.pingIn++ <-- pingApp[i].pingv6Out;
        }
}

