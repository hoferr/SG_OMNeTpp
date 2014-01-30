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
import ned.DatarateChannel;
import plc.src.PowerlineHost_CCo;
import plc.src.PowerlineHost;
import plc.src.DataCollector;


network PowerlineNetwork_0
{
    @display("bgb=313,242;i=block/network");
    types:
        channel ChannelA extends DatarateChannel
        {
            delay = 5ns;
        }
    submodules:
        powerlineHost_CCo: PowerlineHost_CCo {
            @display("p=63,176");
        }
        powerlineHost: PowerlineHost {
            @display("p=240,176");
        }
        dataCollector: DataCollector {
            @display("p=152,42");
        }
        flatNetworkConfigurator: FlatNetworkConfigurator {
            @display("p=55,53");
        }
    connections allowunconnected:
        powerlineHost_CCo.ethg++ <--> ChannelA <--> powerlineHost.ethg++;
}
