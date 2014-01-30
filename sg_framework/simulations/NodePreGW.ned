//
// Copyright (C) 2013 Michael Kirsche
// Copyright (C) 2008 Feng Chen
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

// Application Layer
import inet.applications.IPingApp;
import inet.applications.ITCPApp;
import inet.applications.IUDPApp;

// Transport Layer
import inet.transport.tcp.TCP;
import inet.transport.IUDP;

// Internet
import inet.networklayer.ipv4.RoutingTable;
import inet.networklayer.ipv6.RoutingTable6;
import inet.nodes.inet.NetworkLayer;
import inet.nodes.ipv6.NetworkLayer6;
import inet.linklayer.IWiredNic;

// 802.15.4 MAC / Link Layer
import inet.wpan.linklayer.ieee802154.Ieee802154csmaNic;

// Additional Modules
import inet.networklayer.common.InterfaceTable;
import inet.base.NotificationBoard;
import inet.mobility.IMobility;
import inet.networklayer.IManetRouting;
import inet.battery.IBattery;
import inet.wpan.Isabel.Base.Display;


//
// IPv6 host with TCP, UDP layers and applications.
//
module NodePreGW
{
    parameters:
        @node();
        int numTcpApps = default(0);
        int numUdpApps = default(0);  // no of UDP apps. Specify the app types in INI file with udpApp[0..1].typename="UDPVideoStreamCli" syntax
        int numPingApps = default(0);  // no of PING apps -> Specify the app types in INI file with pingApp[0..1].typename="PingApp" syntax
        string udpType = default(firstAvailable("UDP","UDP_None"));
        string mobilityType;
        string batteryModel @enum("InetSimpleBattery","BasicBattery","") = default("InetSimpleBattery");
        xml routingTable = default(xml("<routingTable/>"));
        bool IPForward = default(true);
        @display("i=device/accesspoint;bgb=494,448");

    gates:
        input radioIn @directIn;
        inout ethg[] @labels(EtherFrame-conn);
        inout pppg[] @labels(PPPFrame-conn);

    submodules:
        notificationBoard: NotificationBoard {
            parameters:
                @display("p=60,36");
        }
        interfaceTable: InterfaceTable {
            parameters:
                @display("p=60,244");
        }
        routingTable6: RoutingTable6 {
            parameters:
                isRouter = true;
                forwardMulticast = true;
                routingTable = routingTable;
                @display("p=60,305");
        }
        tcpApp[numTcpApps]: <tcpAppType> like ITCPApp {
            parameters:
                @display("p=200,51;i=block/app");
        }
        tcp: TCP {
            parameters:
                @display("p=200,138;i=block/wheelbarrow");
        }
        udpApp[numUdpApps]: <> like IUDPApp {
            parameters:
                @display("p=400,51,row,60");
        }
        udp: <udpType> like IUDP if numUdpApps>0 {
            parameters:
                @display("p=400,138;i=block/transport");
        }
        pingApp[numPingApps]: <default("PingApp")> like IPingApp {
            parameters:
                @display("p=302,51");
        }
        networkLayer6: NetworkLayer6 {
            parameters:
                @display("p=239,214;i=block/fork;q=queue");
            gates:
                ifIn[1];
                ifOut[1];
        }
        networkLayer4: NetworkLayer {
            @display("p=371,214");
        }
        lrwpan: Ieee802154csmaNic {
            parameters:
                @display("p=200,392;q=queue;i=block/ifcard");
        }
        eth[sizeof(ethg)]: <default("EthernetInterface")> like IWiredNic {
            parameters:
                @display("p=283,392,row,90;q=txQueue");
        }
        ppp[sizeof(pppg)]: <default("PPPInterface")> like IWiredNic {
            parameters:
                @display("p=400,392,row,90;q=txQueue");
        }
        mobility: <mobilityType> like IMobility {
            parameters:
                @display("p=135,214;i=block/cogwheel");

        }
        disp: Display {
            parameters:
                @display("p=60,177;i=block/app2");

        }
        battery: <batteryModel> like IBattery if batteryModel != "" {
            parameters:
                @display("p=60,99;i=block/plug");

        }
        dualLayerCoupler: DualLayerCoupler {
            @display("p=302,297");
        }
        routingTable: RoutingTable {
            @display("p=60,369");
        }
    connections allowunconnected:
        for i=0..numTcpApps-1 {
            tcpApp[i].tcpOut --> tcp.appIn++;
            tcpApp[i].tcpIn <-- tcp.appOut++;
        }

        tcp.ipv6Out --> networkLayer6.tcpIn;
        tcp.ipv6In <-- networkLayer6.tcpOut;
        tcp.ipOut --> networkLayer4.tcpIn;
        tcp.ipIn <-- networkLayer4.tcpOut;

        for i=0..numUdpApps-1 {
            udpApp[i].udpOut --> udp.appIn++;
            udpApp[i].udpIn <-- udp.appOut++;
        }

        udp.ipv6Out --> networkLayer6.udpIn if numUdpApps>0;
        udp.ipv6In <-- networkLayer6.udpOut if numUdpApps>0;
        udp.ipOut --> networkLayer4.udpIn if numUdpApps>0;
        udp.ipIn <-- networkLayer4.udpOut if numUdpApps>0;

        for i=0..numPingApps-1 {
            networkLayer6.pingOut++ --> pingApp[i].pingv6In;
            networkLayer6.pingIn++ <-- pingApp[i].pingv6Out;
            networkLayer4.pingOut++ --> pingApp[i].pingIn;
            networkLayer4.pingIn++ <-- pingApp[i].pingOut;
        }

        networkLayer4.ifOut++ --> dualLayerCoupler.networkLayer4In;
        networkLayer4.ifIn++ <-- dualLayerCoupler.networkLayer4Out;
        networkLayer6.ifOut++ --> dualLayerCoupler.networkLayer6In;
        networkLayer6.ifIn++ <-- dualLayerCoupler.networkLayer6Out;

        lrwpan.upperLayerOut --> dualLayerCoupler.ifIn++;
        lrwpan.upperLayerIn <-- dualLayerCoupler.ifOut++;

        radioIn --> lrwpan.radioIn;

        for i=0..sizeof(ethg)-1 {
            ethg[i] <--> eth[i].phys;
            eth[i].upperLayerOut --> dualLayerCoupler.ifIn++;
            eth[i].upperLayerIn <-- dualLayerCoupler.ifOut++;
        }

        for i=0..sizeof(pppg)-1 {
            pppg[i] <--> ppp[i].phys;
            ppp[i].upperLayerOut --> dualLayerCoupler.ifIn++;
            ppp[i].upperLayerIn <-- dualLayerCoupler.ifOut++;
        }
}
