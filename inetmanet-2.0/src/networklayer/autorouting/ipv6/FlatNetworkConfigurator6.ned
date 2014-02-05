//
// Copyright (C) 2004 Eric Wu
// Copyright (C) 2004 Andras Varga
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


package inet.networklayer.autorouting.ipv6;

//
// Configures IPv6 addresses and routing tables for a "flat" network,
// "flat" meaning that all hosts and routers will have the same
// network address and will only differ in the host part.
//
// FIXME: add documentation!
//
//  - <route>
//    The route element provides routing table entries for multiple nodes
//    in the network. The selector attributes limit the scope where the route
//    element has effects.
//
//    - @hosts
//      Optional selector attribute that specifies a list of host name patterns.
//      Only routing tables in the specified hosts are affected. The default
//      value "" means all hosts will be affected.
//      e.g. "host* router[0..3]"
//
//    - @destination
//      Optional parameter attribute that specifies the destination address in
//      the route (IPvXAddressResolver syntax). The default value is "*".
//      e.g. "192.168.1.1" or "subnet.client[3]" or "subnet.server(ipv4)" or "*"
//
//    - @netmask
//      Optional parameter attribute that specifies the netmask in the route.
//      The default value is "*".
//      e.g. "255.255.255.0" or "/29" or "*"
//
//    - @gateway
//      Optional parameter attribute that specifies the gateway (next-hop)
//      address in the route (IPvXAddressResolver syntax). When unspecified
//      the interface parameter must be specified. The default value is "*".
//      e.g. "192.168.1.254" or "subnet.router" or "*"
//
//    - @interface
//      Optional parameter attribute that specifies the output interface name
//      in the route. When unspecified the gateway parameter must be specified.
//      This parameter has no default value.
//      e.g. "eth0"
//
//    - @metric
//      Optional parameter attribute that specifies the metric in the route.
//      The default value is 0.
//
// @see ~FlatNetworkConfigurator
//
simple FlatNetworkConfigurator6
{
    parameters:
        @display("i=block/cogwheel");
        @labels(node);
}

