//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

//
// TODO auto-generated module
//
simple DualLayerCoupler
{
    @display("i=block/dispatch");
    gates:
        input networkLayer4In @labels(IPv4Datagram);
        output networkLayer4Out @labels(IPv4Datagram);
        input networkLayer6In @labels(IPv6Datagram);
        output networkLayer6Out @labels(IPv6Datagram);
        input ifIn[];
        output ifOut[];
}
