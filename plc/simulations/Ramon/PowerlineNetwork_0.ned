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

package plc.simulations.Ramon;

import inet.linklayer.ethernet.EtherBus;
import inet.nodes.ethernet.Eth100G;
import inet.nodes.ethernet.Eth100M;
import plc.src.PlcNet;
import plc.src.PowerlineHost_CCo;
import plc.src.PowerlineHost;
import plc.src.DataCollector;
import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import inet.networklayer.autorouting.ipv4.IPv4NetworkConfigurator;
import inet.nodes.ethernet.Eth40G;
import inet.nodes.inet.StandardHost;
import ned.DatarateChannel;


network PowerlineNetwork_0
{
    @display("bgb=679,355;i=block/network");
    types:
        channel ChannelA extends ned.DelayChannel
        {
            delay = 5ns;
        }
    submodules:
        dataCollector: DataCollector {
            @display("p=239,50");
        }
        powerlineHost1: PowerlineHost {
            @display("p=76,189");
        }
        powerlineHost2: PowerlineHost {
            @display("p=322,189");
        }
        configurator: IPv4NetworkConfigurator {
            @display("p=107,43");
        }
        plcNet: PlcNet {
            @display("p=185,280");
        }
    //        etherBus: EtherBus {
    //            @display("p=280,311");
    //        }
    connections allowunconnected:
//        powerlineHost1.ethg++ <--> Eth100M <--> etherBus.ethg++;
//        powerlineHost2.ethg++ <--> Eth100M <--> etherBus.ethg++;

        powerlineHost1.plcg++ <--> ChannelA <--> plcNet.plcg++;
        powerlineHost2.plcg++ <--> ChannelA <--> plcNet.plcg++;
}
