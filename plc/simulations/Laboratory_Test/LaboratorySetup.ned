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

import plc.src.PlcNet;
import plc.src.Plc2Eth_Adapter;
import plc.src.DataCollector;
import inet.world.ChannelInstaller;
import inet.nodes.inet.StandardHost;
import inet.networklayer.autorouting.NetworkConfigurator;
import inet.linklayer.ethernet.EtherBus;


network LaboratorySetup
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
        Microlink_1: Plc2Eth_Adapter {
            @display("p=142,192");
        }
        dLAN200_1: Plc2Eth_Adapter {
            @display("p=540,192");
        }
        Microlink_2: Plc2Eth_Adapter {
            @display("p=142,257");
        }
        dLAN200_2: Plc2Eth_Adapter {
            @display("p=540,257");
        }
        dLAN200_mngt: PlcNet {
            @display("p=421,225");
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
        Microlink_mngt: PlcNet {
            @display("p=261,225");
        }
    connections allowunconnected:
        standardHost.ethg++ <--> etherBus.ethg++;
        standardHost1.ethg++ <--> etherBus1.ethg++;
        standardHost3.ethg++ <--> etherBus3.ethg++;
        standardHost2.ethg++ <--> etherBus2.ethg++;
        etherBus3.ethg++ <--> dLAN200_2.MAC_side;
        etherBus1.ethg++ <--> dLAN200_1.MAC_side;
        etherBus.ethg++ <--> Microlink_1.MAC_side;
        etherBus2.ethg++ <--> Microlink_2.MAC_side;
        Microlink_2.PLC_side <--> ChannelA <--> Microlink_mngt.ethg++;
        Microlink_1.PLC_side <--> ChannelA <--> Microlink_mngt.ethg++;
        Microlink_mngt.ethg++ <--> ChannelA <--> dLAN200_mngt.ethg++;
        dLAN200_1.PLC_side <--> ChannelA <--> dLAN200_mngt.ethg++;
        dLAN200_2.PLC_side <--> ChannelA <--> dLAN200_mngt.ethg++;
}
