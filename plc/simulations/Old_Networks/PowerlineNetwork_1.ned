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
import inet.networklayer.autorouting.NetworkConfigurator;


network PowerlineNetwork_1
{
    @display("bgb=360,349;i=block/network;bgi=background/streetmap");
    types:
        channel ChannelA extends ned.DelayChannel
        {
            delay = 25ns;
        }
        channel ChannelB extends ned.DelayChannel
        {
            delay = 50ns;
        }
        channel ChannelC extends ned.DelayChannel
        {
            delay = 75ns;
        }
    submodules:
        cli: PowerlineHost {
            @display("p=139,115");
        }
        srv: PowerlineHost {
            @display("p=217,115");
        }
        plcNet: PlcNet {
            @display("p=178,193");
        }
        configurator: NetworkConfigurator {
            @display("p=178,39");
        }
        cli2: PowerlineHost {
            @display("p=63,115");
        }
        srv2: PowerlineHost {
            @display("p=290,115");
        }
        cli3: PowerlineHost {
            @display("p=63,193");
        }
        srv3: PowerlineHost {
            @display("p=290,193");
        }
        srv4: PowerlineHost {
            @display("p=290,279");
        }
        cli4: PowerlineHost {
            @display("p=63,279");
        }
        cli5: PowerlineHost {
            @display("p=139,279");
        }
        srv5: PowerlineHost {
            @display("p=217,279");
        }
    connections:
        cli.ethg++ <--> ChannelA <--> plcNet.ethg++;
        srv.ethg++ <--> ChannelC <--> plcNet.ethg++;
        cli2.ethg++ <--> ChannelB <--> plcNet.ethg++;
        srv2.ethg++ <--> ChannelA <--> plcNet.ethg++;
        cli3.ethg++ <--> ChannelA <--> plcNet.ethg++;
        srv3.ethg++ <--> ChannelB <--> plcNet.ethg++;
        cli4.ethg++ <--> ChannelA <--> plcNet.ethg++;
        srv4.ethg++ <--> ChannelC <--> plcNet.ethg++;
        cli5.ethg++ <--> ChannelB <--> plcNet.ethg++;
        srv5.ethg++ <--> ChannelA <--> plcNet.ethg++;
}
