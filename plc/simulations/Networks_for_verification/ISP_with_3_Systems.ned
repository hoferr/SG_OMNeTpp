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

import plc.Market_Technologies.Access_BPLC.Siemens_Access_BPLC;
import plc.Market_Technologies.Access_BPLC.Siemens_Access_BPLC_CCo;
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


network ISP_with_3_Systems
{
    @display("i=block/network;bgb=676,549");
    types:
        channel ChannelA extends ned.DelayChannel
        {
            delay = 50ns; // 10m distance
        }
        channel ChannelB extends ned.DelayChannel
        {
            delay = 500ns; // 100m distance
        }
    submodules:
        HPAV_Adapter2: HomePlugAV1o1 {
            @display("p=217,166");
        }
        HPAV_Adapter3: HomePlugAV1o1 {
            @display("p=79,166");
        }
        HPAV_Adapter1: HomePlugAV1o1_CCo {
            @display("p=217,265");
        }
        Waschmaschine: StandardHost {
            @display("p=79,55;i=block/source");
        }
        Geschirrspueler: StandardHost {
            @display("p=217,55;i=block/sink");
        }
        IKTGateway2_Port1: StandardHost {
            @display("p=217,360;i=device/accesspoint");
        }
        networkConfigurator: NetworkConfigurator {
            @display("p=559,486");
        }
        channelInstaller: ChannelInstaller {
            channelClass = "ThruputMeteringChannel";
            channelAttrs = "format=#N";
            @display("p=79,486");
        }
        dataCollector: DataCollector {
            @display("p=345,486");
        }
        Kunden_PC: StandardHost {
            @display("p=559,55;i=device/laptop");
        }
        dLAN200_Adapter1: dLAN200_CCo {
            @display("p=383,166");
        }
        dLAN200_Adapter2: dLAN200 {
            @display("p=383,54");
        }
        Kunden_DSL_Router: StandardHost {
            @display("p=559,167;i=abstract/accesspoint");
        }
        IKTGateway2_Port2: StandardHost {
            @display("p=383,360;i=device/accesspoint");
        }
        siemens_Access_BPLC_1: Siemens_Access_BPLC_CCo {
            @display("p=383,265");
        }
        siemens_Access_BPLC_2: Siemens_Access_BPLC {
            @display("p=559,265");
        }
        BPLAM_Server: StandardHost {
            @display("p=559,356;i=device/router");
        }
    connections allowunconnected:
        Waschmaschine.ethg++ <--> HPAV_Adapter3.MAC_side;
        Geschirrspueler.ethg++ <--> HPAV_Adapter2.MAC_side;
        IKTGateway2_Port1.ethg++ <--> HPAV_Adapter1.MAC_side;
        HPAV_Adapter3.PLC_side <--> ChannelA <--> HPAV_Adapter1.PLC_side++;
        HPAV_Adapter2.PLC_side <--> ChannelA <--> HPAV_Adapter1.PLC_side++;
        Kunden_PC.ethg++ <--> dLAN200_Adapter2.MAC_side;
        dLAN200_Adapter2.PLC_side <--> ChannelA <--> dLAN200_Adapter1.PLC_side++;
        dLAN200_Adapter1.PLC_side++ <--> ChannelA <-->  HPAV_Adapter1.PLC_side++;
        Kunden_DSL_Router.ethg++ <--> dLAN200_Adapter1.MAC_side;
        dLAN200_Adapter1.PLC_side++ <--> ChannelA <-->  siemens_Access_BPLC_1.PLC_side++;
        HPAV_Adapter1.PLC_side++ <--> ChannelA <-->  siemens_Access_BPLC_1.PLC_side++;
        siemens_Access_BPLC_1.MAC_side <--> IKTGateway2_Port2.ethg++;
        siemens_Access_BPLC_1.PLC_side++ <--> ChannelB <--> siemens_Access_BPLC_2.PLC_side;
        siemens_Access_BPLC_2.MAC_side <--> BPLAM_Server.ethg++;
}
