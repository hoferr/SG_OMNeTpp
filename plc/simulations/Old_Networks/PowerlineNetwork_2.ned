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

package plc.simulations.Old_Networks;

import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import plc.src.DataCollector;
import inet.world.ChannelInstaller;
import inet.nodes.inet.StandardHost;
import inet.linklayer.ethernet.EtherBus;
import Market_Technologies.InHouse_BPLC.dLAN200_CCo;
import plc.Market_Technologies.InHouse_BPLC.dLAN200;


network PowerlineNetwork_2
{
    @display("bgb=597,272;i=block/network;bgi=background/streetmap");
    types:
        channel ChannelA extends ned.DelayChannel
        {
            delay = 10ns; // 2m cable
        }
    submodules:
        srv: StandardHost {
            @display("p=548,39");
        }
        cli: StandardHost {
            @display("p=54,39");
        }
        configurator: FlatNetworkConfigurator {
            @display("p=496,204");
        }
        dLAN200_CCo: dLAN200_CCo {
            @display("p=220,71");
        }
        dLAN200: dLAN200 {
            @display("p=377,71");
        }
        dataCollector: DataCollector {
            @display("p=300,139");
        }
        channelInstaller: ChannelInstaller {
            channelClass = "ThruputMeteringChannel";
            channelAttrs = "format=#N";
            @display("p=101,204");
        }
        flatNetworkConfigurator: FlatNetworkConfigurator {
            @display("p=228,225");
        }
    connections allowunconnected:
        dLAN200.PLC_side <--> ChannelA <--> dLAN200_CCo.PLC_side++;
        srv.ethg++ <--> dLAN200.MAC_side;
        cli.ethg++ <--> dLAN200_CCo.MAC_side;
}

