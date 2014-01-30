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
import inet.nodes.ethernet.Eth100G;
import inet.nodes.ethernet.Eth100M;
import inet.nodes.ethernet.EtherHost2;
import inet.networklayer.autorouting.ipv6.FlatNetworkConfigurator6;
import inet.networklayer.autorouting.ipv4.IPv4NetworkConfigurator;
import inet.nodes.inet.StandardHost;
import inet.nodes.internetcloud.InternetCloud;
import inet.nodes.ipv6.NodeBase6;
import inet.nodes.ipv6.StandardHost6;
import ned.DatarateChannel;

import inet.world.radio.ChannelControl;
import ned.DelayChannel;


network SG_DUALIPLAYER_003
{
    parameters:
        @display("bgb=459,257");
    submodules:
        channelControl: ChannelControl {
            parameters:
                @display("p=60,50;i=misc/sun");
        }
        configurator: IPv4NetworkConfigurator {
            parameters:
                @display("p=60,120");
        }
        configurator6: FlatNetworkConfigurator6 {
            parameters:
                @display("p=60,190");
        }
        gw: NodePreGW {
            @display("p=297,61");
        }
//        gw: NodeGW {
//            @display("p=297,61");
//        }
//        gw: NodeEK {
//            @display("p=324,66");
//        }
        be: StandardHost6 {
            @display("p=294,151");
        }
//        be: StandardHost {
//            @display("p=294,151");
//        }
    //        internet: InternetCloud {
    //            @display("p=485,215");
    //        }
    connections:
        gw.ethg++ <--> Eth100M <--> be.ethg++;
}
