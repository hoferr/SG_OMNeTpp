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

import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import plc.src.DataCollector;

//import inet.world.ChannelInstaller;
//INET-1.99.1 (May 27, 2011)
//--------------------------
//ChannelInstaller module has been removed. Implemented a ThruputMeteringChannel that
//  extends DatarateChannel. It adds thruputDisplayFormat that allows showing different
//  statistics along the source gate of the channel. Specifying "" as display format
//  results the same behavior as DatarateChannel (with no performance penalty).
//  If you want to gather statistics, you do not need this channel. The DatarateChannel
//  already emits signals "channelBusy", "messageSent" and "messageDiscarded"
//  that can be used to calculate different statistics. Use "opp_run -h neddecls"
//  to see what statistics are provided by default. e.g in INI file use
//  **.channel.throughput.result-recording-modes=+last to store all channel's
//  thoughput values as scalars.
// See http://inet.omnetpp.org/doc/INET/doxy/whatsnew.html

import inet.nodes.inet.StandardHost;

//import inet.networklayer.autorouting.NetworkConfigurator;


import plc.Market_Technologies.InHouse_BPLC.HomePlugAV1o1_CCo;
import plc.Market_Technologies.InHouse_BPLC.HomePlugAV1o1;
import inet.util.ThruputMeteringChannel;


network InHouse_with_HomePlugAV1o1_No1
{
    @display("i=block/network;bgb=938,549");
    types:
        channel ChannelA extends ThruputMeteringChannel
        {
            delay = 50ns; // 10m distance
        }
        channel ChannelB extends ThruputMeteringChannel
        {
            delay = 100ns; // 20m distance
        }
        channel ChannelC extends ThruputMeteringChannel
        {
            delay = 150ns; // 30m distance
        }
    submodules:
        HPAV_Adapter1: HomePlugAV1o1_CCo {
            @display("p=183,175");
        }
        HPAV_Adapter2: HomePlugAV1o1 {
            @display("p=71,116");
        }
        HPAV_Adapter6: HomePlugAV1o1 {
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
        //        networkConfigurator: NetworkConfigurator {
        //            @display("p=803,462");
        //        }
        //        channelInstaller: ChannelInstaller {
        //            channelClass = "ThruputMeteringChannel";
        //            channelAttrs = "format=#N";
        //            @display("p=125,462");
        //        }
        dataCollector: DataCollector {
            @display("p=474,462");
        }
        Geschirrspueler2: StandardHost {
            @display("p=413,55;i=block/sink");
        }
        HPAV_Adapter3: HomePlugAV1o1_CCo {
            @display("p=413,175");
        }
        HPAV_Adapter4: HomePlugAV1o1 {
            @display("p=301,116");
        }
        HPAV_Adapter5: HomePlugAV1o1 {
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
        HPAV_Adapter7: HomePlugAV1o1_CCo {
            @display("p=640,175");
        }
        HPAV_Adapter8: HomePlugAV1o1 {
            @display("p=528,116");
        }
        HPAV_Adapter9: HomePlugAV1o1 {
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
        HPAV_Adapter10: HomePlugAV1o1_CCo {
            @display("p=183,366");
        }
        HPAV_Adapter11: HomePlugAV1o1 {
            @display("p=71,307");
        }
        HPAV_Adapter12: HomePlugAV1o1 {
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
        HPAV_Adapter13: HomePlugAV1o1_CCo {
            @display("p=413,366");
        }
        HPAV_Adapter14: HomePlugAV1o1 {
            @display("p=301,307");
        }
        HPAV_Adapter15: HomePlugAV1o1 {
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
        HPAV_Adapter16: HomePlugAV1o1_CCo {
            @display("p=640,366");
        }
        HPAV_Adapter17: HomePlugAV1o1 {
            @display("p=528,307");
        }
        HPAV_Adapter18: HomePlugAV1o1 {
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
        HPAV_Adapter19: HomePlugAV1o1_CCo {
            @display("p=861,175");
        }
        HPAV_Adapter20: HomePlugAV1o1 {
            @display("p=749,116");
        }
        HPAV_Adapter21: HomePlugAV1o1 {
            @display("p=861,116");
        }
        HPAV_Adapter22: HomePlugAV1o1_CCo {
            @display("p=861,366");
        }
        HPAV_Adapter23: HomePlugAV1o1 {
            @display("p=749,307");
        }
        HPAV_Adapter24: HomePlugAV1o1 {
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
        flatNetworkConfigurator: FlatNetworkConfigurator {
            @display("p=630,444");
        }
    connections allowunconnected:
        Waschmaschine1.ethg++ <--> ChannelA <--> HPAV_Adapter2.MAC_side;
        Geschirrspueler1.ethg++ <--> ChannelB <--> HPAV_Adapter6.MAC_side;
        IKTGateway2_1.ethg++ <--> ChannelC <--> HPAV_Adapter1.MAC_side;
        HPAV_Adapter2.PLC_side <--> ChannelA <--> HPAV_Adapter1.PLC_side++;
        HPAV_Adapter6.PLC_side <--> ChannelB <--> HPAV_Adapter1.PLC_side++;
        HPAV_Adapter4.PLC_side <--> ChannelC <--> HPAV_Adapter3.PLC_side++;
        Waschmaschine2.ethg++ <--> ChannelA <--> HPAV_Adapter4.MAC_side;
        IKTGateway2_2.ethg++ <--> ChannelB <--> HPAV_Adapter3.MAC_side;
        HPAV_Adapter5.PLC_side <--> ChannelC <--> HPAV_Adapter3.PLC_side++;
        Geschirrspueler2.ethg++ <--> ChannelA <--> HPAV_Adapter5.MAC_side;
        HPAV_Adapter8.PLC_side <--> ChannelB <--> HPAV_Adapter7.PLC_side++;
        Waschmaschine3.ethg++ <--> ChannelC <--> HPAV_Adapter8.MAC_side;
        IKTGateway2_3.ethg++ <--> ChannelA <--> HPAV_Adapter7.MAC_side;
        HPAV_Adapter9.PLC_side <--> ChannelB <--> HPAV_Adapter7.PLC_side++;
        Geschirrspueler3.ethg++ <--> ChannelC <--> HPAV_Adapter9.MAC_side;
        HPAV_Adapter11.PLC_side <--> ChannelA <--> HPAV_Adapter10.PLC_side++;
        Waschmaschine4.ethg++ <--> ChannelB <--> HPAV_Adapter11.MAC_side;
        IKTGateway2_4.ethg++ <--> ChannelC <--> HPAV_Adapter10.MAC_side;
        HPAV_Adapter12.PLC_side <--> ChannelA <--> HPAV_Adapter10.PLC_side++;
        Geschirrspueler4.ethg++ <--> ChannelB <--> HPAV_Adapter12.MAC_side;
        HPAV_Adapter14.PLC_side <--> ChannelC <--> HPAV_Adapter13.PLC_side++;
        Waschmaschine5.ethg++ <--> ChannelA <--> HPAV_Adapter14.MAC_side;
        IKTGateway2_5.ethg++ <--> ChannelB <--> HPAV_Adapter13.MAC_side;
        HPAV_Adapter15.PLC_side <--> ChannelC <--> HPAV_Adapter13.PLC_side++;
        Geschirrspueler5.ethg++ <--> ChannelA <--> HPAV_Adapter15.MAC_side;
        HPAV_Adapter17.PLC_side <--> ChannelB <--> HPAV_Adapter16.PLC_side++;
        Waschmaschine6.ethg++ <--> ChannelC <--> HPAV_Adapter17.MAC_side;
        IKTGateway2_6.ethg++ <--> ChannelA <--> HPAV_Adapter16.MAC_side;
        HPAV_Adapter18.PLC_side <--> ChannelB <--> HPAV_Adapter16.PLC_side++;
        Geschirrspueler6.ethg++ <--> ChannelC <--> HPAV_Adapter18.MAC_side;
        Waschmaschine8.ethg++ <--> ChannelA <--> HPAV_Adapter23.MAC_side;
        IKTGateway2_8.ethg++ <--> ChannelB <--> HPAV_Adapter22.MAC_side;
        HPAV_Adapter23.PLC_side <--> ChannelC <--> HPAV_Adapter22.PLC_side++;
        Geschirrspueler8.ethg++ <--> ChannelA <--> HPAV_Adapter24.MAC_side;
        IKTGateway2_7.ethg++ <--> ChannelB <--> HPAV_Adapter19.MAC_side;
        HPAV_Adapter24.PLC_side <--> ChannelC <--> HPAV_Adapter22.PLC_side++;
        Waschmaschine7.ethg++ <--> ChannelA <--> HPAV_Adapter20.MAC_side;
        HPAV_Adapter20.PLC_side <--> ChannelB <--> HPAV_Adapter19.PLC_side++;
        Geschirrspueler7.ethg++ <--> ChannelC <--> HPAV_Adapter21.MAC_side;
        HPAV_Adapter21.PLC_side <--> ChannelA <--> HPAV_Adapter19.PLC_side++;
}
