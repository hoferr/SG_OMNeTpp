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

package plc.simulations.InHouse_BPLC_Systems;

import plc.src.DataCollector;
import inet.world.ChannelInstaller;
import inet.nodes.inet.StandardHost;
import inet.networklayer.autorouting.NetworkConfigurator;
import Market_Technologies.InHouse_BPLC.Microlink_CCo;
import Market_Technologies.InHouse_BPLC.Microlink;


network InHouse_with_Microlink_No1
{
    @display("i=block/network;bgb=938,549");
    types:
        channel ChannelA extends ned.DelayChannel
        {
            delay = 50ns; // 10m distance
        }
        channel ChannelB extends ned.DelayChannel
        {
            delay = 100ns; // 20m distance
        }
        channel ChannelC extends ned.DelayChannel
        {
            delay = 150ns; // 30m distance
        }
    submodules:
        Microlink_Adapter1: Microlink_CCo {
            @display("p=183,175");
        }
        Microlink_Adapter2: Microlink {
            @display("p=71,116");
        }
        Microlink_Adapter6: Microlink {
            @display("p=183,116");
        }
        Waschmaschine1: StandardHost {
            @display("p=71,55;i=block/source");
        }
        Geschirrspueler1: StandardHost {
            @display("p=183,55;i=block/sink");
        }
        IKTGateway2_1: StandardHost {
            @display("p=71,175;i=device/accesspoint");
        }
        networkConfigurator: NetworkConfigurator {
            @display("p=803,462");
        }
        channelInstaller: ChannelInstaller {
            channelClass = "ThruputMeteringChannel";
            channelAttrs = "format=#N";
            @display("p=125,462");
        }
        dataCollector: DataCollector {
            @display("p=474,462");
        }
        Geschirrspueler2: StandardHost {
            @display("p=413,55;i=block/sink");
        }
        Microlink_Adapter3: Microlink_CCo {
            @display("p=413,175");
        }
        Microlink_Adapter4: Microlink {
            @display("p=301,116");
        }
        Microlink_Adapter5: Microlink {
            @display("p=413,116");
        }
        IKTGateway2_2: StandardHost {
            @display("p=301,175;i=device/accesspoint");
        }
        Waschmaschine2: StandardHost {
            @display("p=301,55;i=block/source");
        }
        Geschirrspueler3: StandardHost {
            @display("p=640,55;i=block/sink");
        }
        Microlink_Adapter7: Microlink_CCo {
            @display("p=640,175");
        }
        Microlink_Adapter8: Microlink {
            @display("p=528,116");
        }
        Microlink_Adapter9: Microlink {
            @display("p=640,116");
        }
        IKTGateway2_3: StandardHost {
            @display("p=528,175;i=device/accesspoint");
        }
        Waschmaschine3: StandardHost {
            @display("p=528,55;i=block/source");
        }
        Geschirrspueler4: StandardHost {
            @display("p=183,246;i=block/sink");
        }
        Microlink_Adapter10: Microlink_CCo {
            @display("p=183,366");
        }
        Microlink_Adapter11: Microlink {
            @display("p=71,307");
        }
        Microlink_Adapter12: Microlink {
            @display("p=183,307");
        }
        IKTGateway2_4: StandardHost {
            @display("p=71,366;i=device/accesspoint");
        }
        Waschmaschine4: StandardHost {
            @display("p=71,246;i=block/source");
        }
        Geschirrspueler5: StandardHost {
            @display("p=413,246;i=block/sink");
        }
        Microlink_Adapter13: Microlink_CCo {
            @display("p=413,366");
        }
        Microlink_Adapter14: Microlink {
            @display("p=301,307");
        }
        Microlink_Adapter15: Microlink {
            @display("p=413,307");
        }
        IKTGateway2_5: StandardHost {
            @display("p=301,366;i=device/accesspoint");
        }
        Waschmaschine5: StandardHost {
            @display("p=301,246;i=block/source");
        }
        Geschirrspueler6: StandardHost {
            @display("p=640,246;i=block/sink");
        }
        Microlink_Adapter16: Microlink_CCo {
            @display("p=640,366");
        }
        Microlink_Adapter17: Microlink {
            @display("p=528,307");
        }
        Microlink_Adapter18: Microlink {
            @display("p=640,307");
        }
        IKTGateway2_6: StandardHost {
            @display("p=528,366;i=device/accesspoint");
        }
        Waschmaschine6: StandardHost {
            @display("p=528,246;i=block/source");
        }
        Geschirrspueler7: StandardHost {
            @display("p=861,55;i=block/sink");
        }
        Geschirrspueler8: StandardHost {
            @display("p=861,246;i=block/sink");
        }
        Microlink_Adapter19: Microlink_CCo {
            @display("p=861,175");
        }
        Microlink_Adapter20: Microlink {
            @display("p=749,116");
        }
        Microlink_Adapter21: Microlink {
            @display("p=861,116");
        }
        Microlink_Adapter22: Microlink_CCo {
            @display("p=861,366");
        }
        Microlink_Adapter23: Microlink {
            @display("p=749,307");
        }
        Microlink_Adapter24: Microlink {
            @display("p=861,307");
        }
        IKTGateway2_7: StandardHost {
            @display("p=749,175;i=device/accesspoint");
        }
        IKTGateway2_8: StandardHost {
            @display("p=749,366;i=device/accesspoint");
        }
        Waschmaschine7: StandardHost {
            @display("p=749,55;i=block/source");
        }
        Waschmaschine8: StandardHost {
            @display("p=749,246;i=block/source");
        }
    connections allowunconnected:
        Waschmaschine1.ethg++ <--> ChannelA <--> Microlink_Adapter2.MAC_side;
        Geschirrspueler1.ethg++ <--> ChannelB <--> Microlink_Adapter6.MAC_side;
        IKTGateway2_1.ethg++ <--> ChannelC <--> Microlink_Adapter1.MAC_side;
        Microlink_Adapter2.PLC_side <--> ChannelA <--> Microlink_Adapter1.PLC_side++;
        Microlink_Adapter6.PLC_side <--> ChannelB <--> Microlink_Adapter1.PLC_side++;
        Microlink_Adapter4.PLC_side <--> ChannelC <--> Microlink_Adapter3.PLC_side++;
        Waschmaschine2.ethg++ <--> ChannelA <--> Microlink_Adapter4.MAC_side;
        IKTGateway2_2.ethg++ <--> ChannelB <--> Microlink_Adapter3.MAC_side;
        Microlink_Adapter5.PLC_side <--> ChannelC <--> Microlink_Adapter3.PLC_side++;
        Geschirrspueler2.ethg++ <--> ChannelA <--> Microlink_Adapter5.MAC_side;
        Microlink_Adapter8.PLC_side <--> ChannelB <--> Microlink_Adapter7.PLC_side++;
        Waschmaschine3.ethg++ <--> ChannelC <--> Microlink_Adapter8.MAC_side;
        IKTGateway2_3.ethg++ <--> ChannelA <--> Microlink_Adapter7.MAC_side;
        Microlink_Adapter9.PLC_side <--> ChannelB <--> Microlink_Adapter7.PLC_side++;
        Geschirrspueler3.ethg++ <--> ChannelC <--> Microlink_Adapter9.MAC_side;
        Microlink_Adapter11.PLC_side <--> ChannelA <--> Microlink_Adapter10.PLC_side++;
        Waschmaschine4.ethg++ <--> ChannelB <--> Microlink_Adapter11.MAC_side;
        IKTGateway2_4.ethg++ <--> ChannelC <--> Microlink_Adapter10.MAC_side;
        Microlink_Adapter12.PLC_side <--> ChannelA <--> Microlink_Adapter10.PLC_side++;
        Geschirrspueler4.ethg++ <--> ChannelB <--> Microlink_Adapter12.MAC_side;
        Microlink_Adapter14.PLC_side <--> ChannelC <--> Microlink_Adapter13.PLC_side++;
        Waschmaschine5.ethg++ <--> ChannelA <--> Microlink_Adapter14.MAC_side;
        IKTGateway2_5.ethg++ <--> ChannelB <--> Microlink_Adapter13.MAC_side;
        Microlink_Adapter15.PLC_side <--> ChannelC <--> Microlink_Adapter13.PLC_side++;
        Geschirrspueler5.ethg++ <--> ChannelA <--> Microlink_Adapter15.MAC_side;
        Microlink_Adapter17.PLC_side <--> ChannelB <--> Microlink_Adapter16.PLC_side++;
        Waschmaschine6.ethg++ <--> ChannelC <--> Microlink_Adapter17.MAC_side;
        IKTGateway2_6.ethg++ <--> ChannelA <--> Microlink_Adapter16.MAC_side;
        Microlink_Adapter18.PLC_side <--> ChannelB <--> Microlink_Adapter16.PLC_side++;
        Geschirrspueler6.ethg++ <--> ChannelC <--> Microlink_Adapter18.MAC_side;
        Waschmaschine8.ethg++ <--> ChannelA <--> Microlink_Adapter23.MAC_side;
        IKTGateway2_8.ethg++ <--> ChannelB <--> Microlink_Adapter22.MAC_side;
        Microlink_Adapter23.PLC_side <--> ChannelC <--> Microlink_Adapter22.PLC_side++;
        Geschirrspueler8.ethg++ <--> ChannelA <--> Microlink_Adapter24.MAC_side;
        IKTGateway2_7.ethg++ <--> ChannelB <--> Microlink_Adapter19.MAC_side;
        Microlink_Adapter24.PLC_side <--> ChannelC <--> Microlink_Adapter22.PLC_side++;
        Waschmaschine7.ethg++ <--> ChannelA <--> Microlink_Adapter20.MAC_side;
        Microlink_Adapter20.PLC_side <--> ChannelB <--> Microlink_Adapter19.PLC_side++;
        Geschirrspueler7.ethg++ <--> ChannelC <--> Microlink_Adapter21.MAC_side;
        Microlink_Adapter21.PLC_side <--> ChannelA <--> Microlink_Adapter19.PLC_side++;
}
