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

package plc.simulations.Laboratory_Test;

import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import plc.src.DataCollector;
import inet.world.ChannelInstaller;
import inet.nodes.inet.StandardHost;
import inet.networklayer.autorouting.NetworkConfigurator;
import inet.linklayer.ethernet.EtherBus;
import Market_Technologies.InHouse_BPLC.dLAN200_CCo;
import Market_Technologies.InHouse_BPLC.dLAN200;
import Market_Technologies.InHouse_BPLC.Microlink_CCo;
import Market_Technologies.InHouse_BPLC.Microlink;


network LaboratorySetup_2
{
    @display("bgb=698,540;i=block/network");
    types:
        channel ChannelA extends ned.DelayChannel
        {
            delay = 10ns; // 2m cable
        }
    submodules:
        standardHost: StandardHost {
            @display("p=142,61");
        }
        standardHost1: StandardHost {
            @display("p=540,61");
        }
        standardHost2: StandardHost {
            @display("p=142,391");
        }
        standardHost3: StandardHost {
            @display("p=540,391");
        }
        etherBus: EtherBus {
            @display("p=142,122");
        }
        etherBus1: EtherBus {
            @display("p=540,122");
        }
        etherBus2: EtherBus {
            @display("p=142,324");
        }
        etherBus3: EtherBus {
            @display("p=540,324");
        }
        networkConfigurator: NetworkConfigurator {
            @display("p=142,477");
        }
        channelInstaller: ChannelInstaller {
            @display("p=540,477");
            channelClass = "ThruputMeteringChannel";
            channelAttrs = "format=#N";
        }
        dataCollector: DataCollector {
            @display("p=341,477");
        }
        dLAN200_CCo: dLAN200_CCo {
            @display("p=420,183");
        }
        dLAN200: dLAN200 {
            @display("p=420,266");
        }
        microlink_CCo: Microlink_CCo {
            @display("p=267,183");
        }
        microlink: Microlink {
            @display("p=267,266");
        }
    connections allowunconnected:
        standardHost.ethg++ <--> etherBus.ethg++;
        standardHost1.ethg++ <--> etherBus1.ethg++;
        standardHost3.ethg++ <--> etherBus3.ethg++;
        standardHost2.ethg++ <--> etherBus2.ethg++;
        etherBus1.ethg++ <--> dLAN200_CCo.MAC_side;
        etherBus.ethg++ <--> microlink_CCo.MAC_side;
        microlink_CCo.PLC_side++ <--> ChannelA <--> microlink.PLC_side;
        microlink_CCo.PLC_side++ <--> ChannelA <--> dLAN200_CCo.PLC_side++;
        dLAN200_CCo.PLC_side++ <--> ChannelA <--> dLAN200.PLC_side;
        microlink.MAC_side <--> etherBus2.ethg++;
        dLAN200.MAC_side <--> etherBus3.ethg++;
}
