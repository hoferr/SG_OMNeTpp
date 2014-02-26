//
// Copyright (C) 2012 Computer Networks and Communication Systems Group, BTU Cottbus
//               @ Jonas Hartwig and Michael Kirsche
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

//import inet.examples.wpan.sixlowpan.HostIPv6over802154;
import inet.examples.wpan.sixlowpan.Router802154;
import inet.examples.wpan.sixlowpan.RouterIPv6over802154;
import inet.linklayer.ethernet.EtherBus;
import inet.networklayer.autorouting.ipv4.IPv4NetworkConfigurator;
import inet.nodes.ethernet.Eth100M;
import inet.nodes.ethernet.EtherHost2;
import inet.nodes.ipv6.StandardHost6;
import inet.networklayer.autorouting.ipv6.FlatNetworkConfigurator6;
import ned.DatarateChannel;
import inet.util.ThruputMeteringChannel;

//import inet.experimental.nodes.adhoc.MobileManetRoutingMesh;
//import inet.experimental.nodes.adhoc.BasicMobileManetMesh;
import inet.world.radio.ChannelControl;

network SG_LRWPAN_002
{
    parameters:
        int numDCs = default(2);		// Number of DCs
        int numGWs = default(2);		// Number of gateways
        int numNodes = default(18);		// Number of nodes
        //        @display("bgb=1000,1000");
        @display("bgb=3000,1000,white");	// To use in documentation
    types:
        channel C extends ThruputMeteringChannel
        {
            delay = 01us;
            datarate = 100Mbps;
        }
    submodules:
        channelControl: ChannelControl {
            parameters:
                @display("p=60,50;i=misc/sun");
        }
        configurator: FlatNetworkConfigurator6 {
            parameters:
                @display("p=60,229");
        }
        backend: StandardHost6 {
            IPForward = true;
            @display("p=1500,50;i=device/server");
        }
        etherBus: EtherBus {
            @display("p=1500,107");
        }
        dc[numDCs]: NodeW {
            parameters:
                IPForward = true;
                @display("p=200,40;i=device/accesspoint,orange");
        }
        gw[numGWs]: NodeW {
            parameters:
                IPForward = true;
                @display("p=295,40;i=device/accesspoint,red");
        }
        node[numNodes]: NodeW {
            parameters:
                IPForward = true;
                @display("p=200,120;i=device/accesspoint,white");
        }
    connections allowunconnected:
        backend.ethg++ <--> C <--> etherBus.ethg++;

        for i=0..numGWs-1 {
            etherBus.ethg++ <--> C <--> gw[i].ethg++;
        }

}
