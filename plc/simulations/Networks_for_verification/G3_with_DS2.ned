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

package plc.simulations.Networks_for_verification;

import plc.src.DataCollector;
import inet.world.ChannelInstaller;
import inet.nodes.inet.StandardHost;
import inet.networklayer.autorouting.NetworkConfigurator;
import Market_Technologies.InHouse_BPLC.dLAN200_CCo;
import Market_Technologies.InHouse_BPLC.dLAN200;
import Market_Technologies.InHouse_BPLC.DS2_CCo;
import Market_Technologies.InHouse_BPLC.DS2;
import Market_Technologies.Access_PLC.G3_Host_CCo;
import Market_Technologies.Access_PLC.G3_Host;


network G3_with_DS2
{
    @display("i=block/network;bgb=843,549");
    submodules:
        DS2_Adapter1: DS2_CCo {
            @display("p=193,265");
        }
        DS2_Adapter2: DS2 {
            @display("p=56,166");
        }
        DS2_Adapter3: DS2 {
            @display("p=476,166");
        }
        DS2_Adapter4: DS2 {
            @display("p=338,166");
        }
        Zaehler_mit_G3_MUC_1: G3_Host {
            @display("p=124,376;i=device/hub");
        }
        G3_DC_1: G3_Host_CCo {
            @display("p=340,376;i=device/router");
        }
        Zaehler_mit_G3_MUC_2: G3_Host {
            @display("p=545,376;i=device/hub");
        }
        DS2_Adapter5: DS2_CCo {
            @display("p=476,265");
        }
        DS2_Adapter6: DS2 {
            @display("p=193,166");
        }
        Waschmaschine1: StandardHost {
            @display("p=56,55;i=block/source");
        }
        Geschirrspueler1: StandardHost {
            @display("p=193,55;i=block/sink");
        }
        Waschmaschine2: StandardHost {
            @display("p=338,55;i=block/source");
        }
        Geschirrspueler2: StandardHost {
            @display("p=476,55;i=block/sink");
        }
        IKTGateway2_1: StandardHost {
            @display("p=56,265;i=device/accesspoint");
        }
        IKTGateway2_2: StandardHost {
            @display("p=614,265;i=device/accesspoint");
        }
        networkConfigurator: NetworkConfigurator {
            @display("p=757,486");
        }
        channelInstaller: ChannelInstaller {
            channelClass = "ThruputMeteringChannel";
            channelAttrs = "format=#N";
            @display("p=79,486");
        }
        dataCollector: DataCollector {
            @display("p=428,486");
        }
        Kunden_PC: StandardHost {
            @display("p=757,55;i=device/laptop");
        }
        dLAN200_Adapter1: dLAN200_CCo {
            @display("p=605,166");
        }
        dLAN200_Adapter2: dLAN200 {
            @display("p=605,54");
        }
        Kunden_DSL_Router: StandardHost {
            @display("p=757,167;i=abstract/accesspoint");
        }
    connections allowunconnected:
        Kunden_PC.ethg++ <--> dLAN200_Adapter2.MAC_side;
        dLAN200_Adapter2.PLC_side <--> dLAN200_Adapter1.PLC_side++;
        Kunden_DSL_Router.ethg++ <--> dLAN200_Adapter1.MAC_side;
        Waschmaschine1.ethg++ <--> DS2_Adapter2.MAC_side;
        Geschirrspueler1.ethg++ <--> DS2_Adapter6.MAC_side;
        DS2_Adapter2.PLC_side <--> DS2_Adapter1.PLC_side++;
        DS2_Adapter6.PLC_side <--> DS2_Adapter1.PLC_side++;
        IKTGateway2_1.ethg++ <--> DS2_Adapter1.MAC_side;
        DS2_Adapter1.PLC_side++ <--> G3_DC_1.ethg++;
        DS2_Adapter5.PLC_side++ <--> G3_DC_1.ethg++;
        Waschmaschine2.ethg++ <--> DS2_Adapter4.MAC_side;
        Geschirrspueler2.ethg++ <--> DS2_Adapter3.MAC_side;
        DS2_Adapter4.PLC_side <--> DS2_Adapter5.PLC_side++;
        DS2_Adapter3.PLC_side <--> DS2_Adapter5.PLC_side++;
        IKTGateway2_2.ethg++ <--> DS2_Adapter5.MAC_side;
        dLAN200_Adapter1.PLC_side++ <--> DS2_Adapter5.PLC_side++;
        G3_DC_1.ethg++ <--> Zaehler_mit_G3_MUC_2.ethg++;
        G3_DC_1.ethg++ <--> Zaehler_mit_G3_MUC_1.ethg++;
}
