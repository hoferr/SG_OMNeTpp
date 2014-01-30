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

import plc.src.PowerlineHost_CCo;
import plc.src.PowerlineHost;
import plc.src.Plc2Eth_Adapter_CCo;
import plc.src.Plc2Eth_Adapter;
import plc.src.DataCollector;
import inet.world.ChannelInstaller;
import inet.nodes.inet.StandardHost;
import inet.networklayer.autorouting.NetworkConfigurator;
import inet.linklayer.ethernet.EtherBus;


network PowerlineNetwork_5
{
    @display("i=block/network;bgb=607,528");
    types:
        channel ChannelA extends ned.DelayChannel
        {
            delay = 10ns;
        }
        channel ChannelB extends ned.DelayChannel
        {
            delay = 20ns;
        }
        channel ChannelC extends ned.DelayChannel
        {
            delay = 630ns;
        }
    submodules:
        standardHost: StandardHost {
            @display("p=80,69");
        }
        standardHost1: StandardHost {
            @display("p=294,69");
        }
        standardHost2: StandardHost {
            @display("p=513,72");
        }
        powerlineHost_CCo: PowerlineHost_CCo {
            @display("p=294,461");
        }
        powerlineHost: PowerlineHost {
            @display("p=80,461");
        }
        powerlineHost1: PowerlineHost {
            @display("p=513,461");
        }
        plc2Eth_Adapter: Plc2Eth_Adapter {
            @display("p=80,199");
        }
        plc2Eth_Adapter_CCo: Plc2Eth_Adapter_CCo {
            @display("p=294,199");
        }
        plc2Eth_Adapter1: Plc2Eth_Adapter {
            @display("p=513,199");
        }
        plc2Eth_Adapter2: Plc2Eth_Adapter {
            @display("p=294,265");
        }
        etherBus: EtherBus {
            @display("p=80,139");
        }
        etherBus1: EtherBus {
            @display("p=294,139");
        }
        etherBus2: EtherBus {
            @display("p=513,139");
        }
        etherBus3: EtherBus {
            @display("p=294,324");
        }
        plc2Eth_Adapter3: Plc2Eth_Adapter {
            @display("p=294,388");
        }
        networkConfigurator: NetworkConfigurator {
            @display("p=80,375");
        }
        channelInstaller: ChannelInstaller {
            @display("p=80,278");
            channelClass = "ThruputMeteringChannel";
            channelAttrs = "format=#N";
        }
        dataCollector: DataCollector {
            @display("p=512,325");
        }
    connections allowunconnected:
        standardHost2.ethg++ <--> ChannelA <--> etherBus2.ethg++;
        etherBus2.ethg++ <--> ChannelB <--> plc2Eth_Adapter1.MAC_side;
        plc2Eth_Adapter1.PLC_side <--> ChannelC <--> plc2Eth_Adapter_CCo.PLC_side++;
        plc2Eth_Adapter.PLC_side <--> ChannelA <--> plc2Eth_Adapter_CCo.PLC_side++;
        plc2Eth_Adapter.MAC_side <--> ChannelB <--> etherBus.ethg++;
        etherBus.ethg++ <--> ChannelC <--> standardHost.ethg++;
        etherBus1.ethg++ <--> ChannelA <--> standardHost1.ethg++;
        etherBus1.ethg++ <--> ChannelB <--> plc2Eth_Adapter_CCo.MAC_side;
        plc2Eth_Adapter_CCo.PLC_side++ <--> ChannelC <--> plc2Eth_Adapter2.PLC_side;
        plc2Eth_Adapter2.MAC_side <--> ChannelA <--> etherBus3.ethg++;
        etherBus3.ethg++ <--> ChannelB <--> plc2Eth_Adapter3.MAC_side;
        plc2Eth_Adapter3.PLC_side <--> ChannelC <--> powerlineHost_CCo.ethg++;
        powerlineHost1.ethg++ <--> ChannelA <--> powerlineHost_CCo.ethg++;
        powerlineHost.ethg++ <--> ChannelB <--> powerlineHost_CCo.ethg++;
}
