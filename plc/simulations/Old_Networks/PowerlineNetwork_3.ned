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

import plc.src.PowerlineHost;
import plc.src.PlcNet;
import plc.src.Plc2Eth_Adapter;
import inet.nodes.inet.StandardHost;
import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import inet.linklayer.ethernet.EtherBus;


network PowerlineNetwork_3
{
    @display("i=block/network;bgb=611,466");
    submodules:
        etherBus: EtherBus {
            @display("p=82,191");
        }
        etherBus1: EtherBus {
            @display("p=533,143");
        }
        powerlineHost: PowerlineHost {
            @display("p=359,383");
        }
        powerlineHost1: PowerlineHost {
            @display("p=194,357");
        }
        powerlineHost2: PowerlineHost {
            @display("p=533,402");
        }
        plcNet: PlcNet {
            @display("p=293,242");
        }
        plcNet1: PlcNet {
            @display("p=455,318");
        }
        standardHost: StandardHost {
            @display("p=82,92");
        }
        standardHost1: StandardHost {
            @display("p=82,302");
        }
        standardHost2: StandardHost {
            @display("p=533,53");
        }
        plc2Eth_Adapter: Plc2Eth_Adapter {
            @display("p=194,136");
        }
        plc2Eth_Adapter1: Plc2Eth_Adapter {
            @display("p=425,136");
        }
        plc2Eth_Adapter2: Plc2Eth_Adapter {
            @display("p=533,223");
        }
        configurator: FlatNetworkConfigurator {
            @display("p=299,39");
        }
    connections:
        standardHost.ethg++ <--> etherBus.ethg++;
        etherBus.ethg++ <--> plc2Eth_Adapter.MAC_side;
        plc2Eth_Adapter.PLC_side <--> plcNet.ethg++;
        powerlineHost.ethg++ <--> plcNet.ethg++;
        powerlineHost1.ethg++ <--> plcNet.ethg++;
        plcNet.ethg++ <--> plc2Eth_Adapter1.PLC_side;
        plc2Eth_Adapter1.MAC_side <--> etherBus1.ethg++;
        standardHost2.ethg++ <--> etherBus1.ethg++;
        plc2Eth_Adapter2.MAC_side <--> etherBus1.ethg++;
        plcNet1.ethg++ <--> plc2Eth_Adapter2.PLC_side;
        plcNet1.ethg++ <--> powerlineHost2.ethg++;
        standardHost1.ethg++ <--> etherBus.ethg++;
}
