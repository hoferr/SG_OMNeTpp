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
import Market_Technologies.InHouse_BPLC.HomePlugAV1o1_CCo;
import Market_Technologies.InHouse_BPLC.HomePlugAV1o1;
import Market_Technologies.Access_PLC.CENELEC_A_Host_CCo;
import Market_Technologies.Access_PLC.CENELEC_A_Host;


network CENELEC_A_with_HomePlugAV1o1
{
    @display("i=block/network;bgb=843,549");
    submodules:
        HPAV_Adapter1: HomePlugAV1o1_CCo {
            @display("p=193,265");
        }
        HPAV_Adapter2: HomePlugAV1o1 {
            @display("p=56,166");
        }
        HPAV_Adapter3: HomePlugAV1o1 {
            @display("p=476,166");
        }
        HPAV_Adapter4: HomePlugAV1o1 {
            @display("p=338,166");
        }
        Zaehler_mit_CENELEC_A_MUC_1: CENELEC_A_Host {
            @display("p=124,376;i=device/hub");
        }
        CENELEC_A_DC_1: CENELEC_A_Host_CCo {
            @display("p=340,376;i=device/router");
        }
        Zaehler_mit_CENELEC_A_MUC_2: CENELEC_A_Host {
            @display("p=545,376;i=device/hub");
        }
        HPAV_Adapter5: HomePlugAV1o1_CCo {
            @display("p=476,265");
        }
        HPAV_Adapter6: HomePlugAV1o1 {
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
        Waschmaschine1.ethg++ <--> HPAV_Adapter2.MAC_side;
        Geschirrspueler1.ethg++ <--> HPAV_Adapter6.MAC_side;
        IKTGateway2_1.ethg++ <--> HPAV_Adapter1.MAC_side;
        Waschmaschine2.ethg++ <--> HPAV_Adapter4.MAC_side;
        Geschirrspueler2.ethg++ <--> HPAV_Adapter3.MAC_side;
        IKTGateway2_2.ethg++ <--> HPAV_Adapter5.MAC_side;
        HPAV_Adapter4.PLC_side <--> HPAV_Adapter5.PLC_side++;
        HPAV_Adapter3.PLC_side <--> HPAV_Adapter5.PLC_side++;
        HPAV_Adapter2.PLC_side <--> HPAV_Adapter1.PLC_side++;
        HPAV_Adapter6.PLC_side <--> HPAV_Adapter1.PLC_side++;
        Kunden_PC.ethg++ <--> dLAN200_Adapter2.MAC_side;
        dLAN200_Adapter2.PLC_side <--> dLAN200_Adapter1.PLC_side++;
        dLAN200_Adapter1.PLC_side++ <--> HPAV_Adapter5.PLC_side++;
        Kunden_DSL_Router.ethg++ <--> dLAN200_Adapter1.MAC_side;
        Zaehler_mit_CENELEC_A_MUC_2.ethg++ <--> CENELEC_A_DC_1.ethg++;
        Zaehler_mit_CENELEC_A_MUC_1.ethg++ <--> CENELEC_A_DC_1.ethg++;
        HPAV_Adapter1.PLC_side++ <--> CENELEC_A_DC_1.ethg++;
        HPAV_Adapter5.PLC_side++ <--> CENELEC_A_DC_1.ethg++;
}
