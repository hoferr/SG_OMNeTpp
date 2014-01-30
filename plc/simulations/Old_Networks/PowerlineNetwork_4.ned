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
import plc.src.Plc2Eth_Adapter_CCo;
import plc.src.Plc2Eth_Adapter;
import plc.src.DataCollector;
//import inet.world.ChannelInstaller;
import inet.nodes.inet.StandardHost;
import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import inet.linklayer.ethernet.EtherBus;


network PowerlineNetwork_4
{
    @display("bgb=597,375;i=block/network;bgi=background/streetmap");
    submodules:
        plc2Eth_Adapter: Plc2Eth_Adapter {
            @display("p=367,209");
        }
        srv: StandardHost {
            @display("p=444,39");
        }
        cli: StandardHost {
            @display("p=159,39");
        }
        configurator: FlatNetworkConfigurator {
            @display("p=299,39");
        }
        etherBus: EtherBus {
            @display("p=98,116");
        }
        etherBus1: EtherBus {
            @display("p=501,116");
        }
        plc2Eth_Adapter_CCo: Plc2Eth_Adapter_CCo {
            @display("p=229,209");
            gates:
                PLC_side[3];
        }
//        channelInstaller: ChannelInstaller {
//            @display("p=299,91");
//            channelClass = "ThruputMeteringChannel";
//            channelAttrs = "format=#N";
//        }
        srvPLC: PowerlineHost {
            @display("p=120,306");
        }
        cliPLC: PowerlineHost {
            @display("p=198,306");
        }
        dataCollector: DataCollector {
            @display("p=443,306");
        }
    connections allowunconnected:
        cli.ethg++ <--> etherBus.ethg++;
        plc2Eth_Adapter.MAC_side <--> etherBus1.ethg++;
        etherBus1.ethg++ <--> srv.ethg++;
        etherBus.ethg++ <--> plc2Eth_Adapter_CCo.MAC_side;
        plc2Eth_Adapter_CCo.PLC_side[0] <--> plc2Eth_Adapter.PLC_side;
        srvPLC.ethg++ <--> plc2Eth_Adapter_CCo.PLC_side[1];
        cliPLC.ethg++ <--> plc2Eth_Adapter_CCo.PLC_side[2];
}

