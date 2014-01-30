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

package plc.simulations.Generic_Simulations;

import plc.src.DataCollector;
import inet.world.ChannelInstaller;
import inet.nodes.inet.StandardHost;
import inet.networklayer.autorouting.NetworkConfigurator;
import plc.Generic_Technologies.Generic_InHouse_BPLC_CCo;
import plc.Generic_Technologies.Generic_InHouse_BPLC;


network Generic_InHouse_BPLC_No1
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
        generic_InHouse_BPLC_Adapter1: Generic_InHouse_BPLC_CCo {
            @display("p=183,175");
        }
        generic_InHouse_BPLC_Adapter2: Generic_InHouse_BPLC {
            @display("p=71,116");
        }
        generic_InHouse_BPLC_Adapter6: Generic_InHouse_BPLC {
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
        generic_InHouse_BPLC_Adapter3: Generic_InHouse_BPLC_CCo {
            @display("p=413,175");
        }
        generic_InHouse_BPLC_Adapter4: Generic_InHouse_BPLC {
            @display("p=301,116");
        }
        generic_InHouse_BPLC_Adapter5: Generic_InHouse_BPLC {
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
        generic_InHouse_BPLC_Adapter7: Generic_InHouse_BPLC_CCo {
            @display("p=640,175");
        }
        generic_InHouse_BPLC_Adapter8: Generic_InHouse_BPLC {
            @display("p=528,116");
        }
        generic_InHouse_BPLC_Adapter9: Generic_InHouse_BPLC {
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
        generic_InHouse_BPLC_Adapter10: Generic_InHouse_BPLC_CCo {
            @display("p=183,366");
        }
        generic_InHouse_BPLC_Adapter11: Generic_InHouse_BPLC {
            @display("p=71,307");
        }
        generic_InHouse_BPLC_Adapter12: Generic_InHouse_BPLC {
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
        generic_InHouse_BPLC_Adapter13: Generic_InHouse_BPLC_CCo {
            @display("p=413,366");
        }
        generic_InHouse_BPLC_Adapter14: Generic_InHouse_BPLC {
            @display("p=301,307");
        }
        generic_InHouse_BPLC_Adapter15: Generic_InHouse_BPLC {
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
        generic_InHouse_BPLC_Adapter16: Generic_InHouse_BPLC_CCo {
            @display("p=640,366");
        }
        generic_InHouse_BPLC_Adapter17: Generic_InHouse_BPLC {
            @display("p=528,307");
        }
        generic_InHouse_BPLC_Adapter18: Generic_InHouse_BPLC {
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
        generic_InHouse_BPLC_Adapter19: Generic_InHouse_BPLC_CCo {
            @display("p=861,175");
        }
        generic_InHouse_BPLC_Adapter20: Generic_InHouse_BPLC {
            @display("p=749,116");
        }
        generic_InHouse_BPLC_Adapter21: Generic_InHouse_BPLC {
            @display("p=861,116");
        }
        generic_InHouse_BPLC_Adapter22: Generic_InHouse_BPLC_CCo {
            @display("p=861,366");
        }
        generic_InHouse_BPLC_Adapter23: Generic_InHouse_BPLC {
            @display("p=749,307");
        }
        generic_InHouse_BPLC_Adapter24: Generic_InHouse_BPLC {
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
        Waschmaschine1.ethg++ <--> ChannelA <--> generic_InHouse_BPLC_Adapter2.MAC_side;
        Geschirrspueler1.ethg++ <--> ChannelB <--> generic_InHouse_BPLC_Adapter6.MAC_side;
        IKTGateway2_1.ethg++ <--> ChannelC <--> generic_InHouse_BPLC_Adapter1.MAC_side;
        generic_InHouse_BPLC_Adapter2.PLC_side <--> ChannelA <--> generic_InHouse_BPLC_Adapter1.PLC_side++;
        generic_InHouse_BPLC_Adapter6.PLC_side <--> ChannelB <--> generic_InHouse_BPLC_Adapter1.PLC_side++;
        generic_InHouse_BPLC_Adapter4.PLC_side <--> ChannelC <--> generic_InHouse_BPLC_Adapter3.PLC_side++;
        Waschmaschine2.ethg++ <--> ChannelA <--> generic_InHouse_BPLC_Adapter4.MAC_side;
        IKTGateway2_2.ethg++ <--> ChannelB <--> generic_InHouse_BPLC_Adapter3.MAC_side;
        generic_InHouse_BPLC_Adapter5.PLC_side <--> ChannelC <--> generic_InHouse_BPLC_Adapter3.PLC_side++;
        Geschirrspueler2.ethg++ <--> ChannelA <--> generic_InHouse_BPLC_Adapter5.MAC_side;
        generic_InHouse_BPLC_Adapter8.PLC_side <--> ChannelB <--> generic_InHouse_BPLC_Adapter7.PLC_side++;
        Waschmaschine3.ethg++ <--> ChannelC <--> generic_InHouse_BPLC_Adapter8.MAC_side;
        IKTGateway2_3.ethg++ <--> ChannelA <--> generic_InHouse_BPLC_Adapter7.MAC_side;
        generic_InHouse_BPLC_Adapter9.PLC_side <--> ChannelB <--> generic_InHouse_BPLC_Adapter7.PLC_side++;
        Geschirrspueler3.ethg++ <--> ChannelC <--> generic_InHouse_BPLC_Adapter9.MAC_side;
        generic_InHouse_BPLC_Adapter11.PLC_side <--> ChannelA <--> generic_InHouse_BPLC_Adapter10.PLC_side++;
        Waschmaschine4.ethg++ <--> ChannelB <--> generic_InHouse_BPLC_Adapter11.MAC_side;
        IKTGateway2_4.ethg++ <--> ChannelC <--> generic_InHouse_BPLC_Adapter10.MAC_side;
        generic_InHouse_BPLC_Adapter12.PLC_side <--> ChannelA <--> generic_InHouse_BPLC_Adapter10.PLC_side++;
        Geschirrspueler4.ethg++ <--> ChannelB <--> generic_InHouse_BPLC_Adapter12.MAC_side;
        generic_InHouse_BPLC_Adapter14.PLC_side <--> ChannelC <--> generic_InHouse_BPLC_Adapter13.PLC_side++;
        Waschmaschine5.ethg++ <--> ChannelA <--> generic_InHouse_BPLC_Adapter14.MAC_side;
        IKTGateway2_5.ethg++ <--> ChannelB <--> generic_InHouse_BPLC_Adapter13.MAC_side;
        generic_InHouse_BPLC_Adapter15.PLC_side <--> ChannelC <--> generic_InHouse_BPLC_Adapter13.PLC_side++;
        Geschirrspueler5.ethg++ <--> ChannelA <--> generic_InHouse_BPLC_Adapter15.MAC_side;
        generic_InHouse_BPLC_Adapter17.PLC_side <--> ChannelB <--> generic_InHouse_BPLC_Adapter16.PLC_side++;
        Waschmaschine6.ethg++ <--> ChannelC <--> generic_InHouse_BPLC_Adapter17.MAC_side;
        IKTGateway2_6.ethg++ <--> ChannelA <--> generic_InHouse_BPLC_Adapter16.MAC_side;
        generic_InHouse_BPLC_Adapter18.PLC_side <--> ChannelB <--> generic_InHouse_BPLC_Adapter16.PLC_side++;
        Geschirrspueler6.ethg++ <--> ChannelC <--> generic_InHouse_BPLC_Adapter18.MAC_side;
        Waschmaschine8.ethg++ <--> ChannelA <--> generic_InHouse_BPLC_Adapter23.MAC_side;
        IKTGateway2_8.ethg++ <--> ChannelB <--> generic_InHouse_BPLC_Adapter22.MAC_side;
        generic_InHouse_BPLC_Adapter23.PLC_side <--> ChannelC <--> generic_InHouse_BPLC_Adapter22.PLC_side++;
        Geschirrspueler8.ethg++ <--> ChannelA <--> generic_InHouse_BPLC_Adapter24.MAC_side;
        IKTGateway2_7.ethg++ <--> ChannelB <--> generic_InHouse_BPLC_Adapter19.MAC_side;
        generic_InHouse_BPLC_Adapter24.PLC_side <--> ChannelC <--> generic_InHouse_BPLC_Adapter22.PLC_side++;
        Waschmaschine7.ethg++ <--> ChannelA <--> generic_InHouse_BPLC_Adapter20.MAC_side;
        generic_InHouse_BPLC_Adapter20.PLC_side <--> ChannelB <--> generic_InHouse_BPLC_Adapter19.PLC_side++;
        Geschirrspueler7.ethg++ <--> ChannelC <--> generic_InHouse_BPLC_Adapter21.MAC_side;
        generic_InHouse_BPLC_Adapter21.PLC_side <--> ChannelA <--> generic_InHouse_BPLC_Adapter19.PLC_side++;
}
