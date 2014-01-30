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
import inet.networklayer.autorouting.ipv4.IPv4NetworkConfigurator;
import inet.nodes.ethernet.EtherHost2;
import inet.nodes.ipv6.StandardHost6;
import inet.networklayer.autorouting.ipv6.FlatNetworkConfigurator6;
import ned.DatarateChannel;

//import inet.experimental.nodes.adhoc.MobileManetRoutingMesh;
//import inet.experimental.nodes.adhoc.BasicMobileManetMesh;
import inet.world.radio.ChannelControl;

network SG_LRWPAN_001
{
    parameters:
        int numNodes;   // Number of nodes (data concentrator not included)
        @display("bgb=800,600");
    types:
    submodules:
        channelControl: ChannelControl {
            parameters:
                @display("p=60,50;i=misc/sun");
        }
        configurator: FlatNetworkConfigurator6 {
            parameters:
                @display("p=60,120");
        }
        dc: NodeK {
            parameters:
                @display("p=200,40;i=device/accesspoint,orange");
        }
        node[numNodes]: NodeK {
            parameters:
                IPForward = true;
                @display("p=200,120;i=device/accesspoint,white");
        }
//        configurator: IPv4NetworkConfigurator {
//            @display("p=53,137");
//        }
    connections:
}
