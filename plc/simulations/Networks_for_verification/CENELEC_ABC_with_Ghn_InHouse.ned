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

import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import plc.src.DataCollector;
//import inet.world.ChannelInstaller;
import inet.nodes.inet.StandardHost;
import Market_Technologies.InHouse_BPLC.dLAN200_CCo;
import plc.Market_Technologies.InHouse_BPLC.dLAN200;
import Market_Technologies.InHouse_BPLC.Ghn_InHouse_CCo;
import plc.Market_Technologies.InHouse_BPLC.Ghn_InHouse;
import Market_Technologies.Access_PLC.CENELEC_ABC_Host_CCo;
import Market_Technologies.Access_PLC.CENELEC_ABC_Host;


network CENELEC_ABC_with_Ghn_InHouse
{
    @display("i=block/network;bgb=843,549");
    submodules:
        ghn_InHouse1: Ghn_InHouse_CCo {
            @display("p=193,265");
        }
        ghn_InHouse2: Ghn_InHouse {
            @display("p=56,166");
        }
        ghn_InHouse3: Ghn_InHouse {
            @display("p=476,166");
        }
        ghn_InHouse4: Ghn_InHouse {
            @display("p=338,166");
        }
        Zaehler_mit_CENELEC_ABC_MUC_1: CENELEC_ABC_Host {
            @display("p=124,376;i=device/hub");
        }
        CENELEC_ABC_DC_1: CENELEC_ABC_Host_CCo {
            @display("p=340,376;i=device/router");
        }
        Zaehler_mit_CENELEC_ABC_MUC_2: CENELEC_ABC_Host {
            @display("p=545,376;i=device/hub");
        }
        ghn_InHouse5: Ghn_InHouse_CCo {
            @display("p=476,265");
        }
        ghn_InHouse6: Ghn_InHouse {
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
//        channelInstaller: ChannelInstaller {
//            channelClass = "ThruputMeteringChannel";
//            channelAttrs = "format=#N";
//            @display("p=79,486");
//        }
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
        flatNetworkConfigurator: FlatNetworkConfigurator {
            @display("p=674,477");
        }
    connections allowunconnected:
        Waschmaschine1.ethg++ <--> ghn_InHouse2.MAC_side;
        Geschirrspueler1.ethg++ <--> ghn_InHouse6.MAC_side;
        IKTGateway2_1.ethg++ <--> ghn_InHouse1.MAC_side;
        Waschmaschine2.ethg++ <--> ghn_InHouse4.MAC_side;
        Geschirrspueler2.ethg++ <--> ghn_InHouse3.MAC_side;
        IKTGateway2_2.ethg++ <--> ghn_InHouse5.MAC_side;
        ghn_InHouse4.PLC_side <--> ghn_InHouse5.PLC_side++;
        ghn_InHouse3.PLC_side <--> ghn_InHouse5.PLC_side++;
        ghn_InHouse2.PLC_side <--> ghn_InHouse1.PLC_side++;
        ghn_InHouse6.PLC_side <--> ghn_InHouse1.PLC_side++;
        Kunden_PC.ethg++ <--> dLAN200_Adapter2.MAC_side;
        dLAN200_Adapter2.PLC_side <--> dLAN200_Adapter1.PLC_side++;
        dLAN200_Adapter1.PLC_side++ <--> ghn_InHouse5.PLC_side++;
        Kunden_DSL_Router.ethg++ <--> dLAN200_Adapter1.MAC_side;
        Zaehler_mit_CENELEC_ABC_MUC_2.ethg++ <--> CENELEC_ABC_DC_1.ethg++;
        Zaehler_mit_CENELEC_ABC_MUC_1.ethg++ <--> CENELEC_ABC_DC_1.ethg++;
        ghn_InHouse1.PLC_side++ <--> CENELEC_ABC_DC_1.ethg++;
        ghn_InHouse5.PLC_side++ <--> CENELEC_ABC_DC_1.ethg++;
}
