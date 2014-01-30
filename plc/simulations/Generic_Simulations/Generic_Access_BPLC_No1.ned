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

import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import inet.util.ThruputMeteringChannel;
import plc.src.DataCollector;
//import inet.world.ChannelInstaller;
import inet.nodes.inet.StandardHost;
import plc.Generic_Technologies.Generic_Access_BPLC_CCo;
import plc.Generic_Technologies.Generic_Access_BPLC;


network Generic_Access_BPLC_No1
{
    @display("i=block/network;bgb=1121,1121");
    types:
        //        channel ChannelA extends ned.DelayChannel
        channel ChannelA extends ThruputMeteringChannel
        {
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
        IKTGateway2_1: StandardHost {
            @display("p=94,50;i=device/accesspoint");
        }
        BPLAM_BPLC_CCo: Generic_Access_BPLC_CCo {
            @display("p=560,842");
        }
        generic_Access_BPLCn: Generic_Access_BPLC {
            @display("p=94,127");
        }
        BPLAM_Server: StandardHost {
            @display("p=560,927;i=device/router");
        }
        IKTGateway2_2: StandardHost {
            @display("p=246,50;i=device/accesspoint");
        }
        generic_Access_BPLCn1: Generic_Access_BPLC {
            @display("p=246,127");
        }
        IKTGateway2_3: StandardHost {
            @display("p=403,50;i=device/accesspoint");
        }
        generic_Access_BPLCn2: Generic_Access_BPLC {
            @display("p=403,127");
        }
        IKTGateway2_4: StandardHost {
            @display("p=560,50;i=device/accesspoint");
        }
        generic_Access_BPLCn3: Generic_Access_BPLC {
            @display("p=560,127");
        }
        IKTGateway2_5: StandardHost {
            @display("p=716,50;i=device/accesspoint");
        }
        generic_Access_BPLCn4: Generic_Access_BPLC {
            @display("p=716,127");
        }
        IKTGateway2_6: StandardHost {
            @display("p=872,50;i=device/accesspoint");
        }
        generic_Access_BPLCn5: Generic_Access_BPLC {
            @display("p=872,127");
        }
        IKTGateway2_7: StandardHost {
            @display("p=1031,50;i=device/accesspoint");
        }
        generic_Access_BPLCn6: Generic_Access_BPLC {
            @display("p=1031,127");
        }
        IKTGateway2_8: StandardHost {
            @display("p=94,196;i=device/accesspoint");
        }
        IKTGateway2_9: StandardHost {
            @display("p=246,196;i=device/accesspoint");
        }
        IKTGateway2_10: StandardHost {
            @display("p=403,196;i=device/accesspoint");
        }
        IKTGateway2_11: StandardHost {
            @display("p=560,196;i=device/accesspoint");
        }
        IKTGateway2_12: StandardHost {
            @display("p=716,196;i=device/accesspoint");
        }
        IKTGateway2_13: StandardHost {
            @display("p=872,196;i=device/accesspoint");
        }
        IKTGateway2_14: StandardHost {
            @display("p=1031,196;i=device/accesspoint");
        }
        generic_Access_BPLCn7: Generic_Access_BPLC {
            @display("p=94,273");
        }
        generic_Access_BPLCn8: Generic_Access_BPLC {
            @display("p=246,273");
        }
        generic_Access_BPLCn9: Generic_Access_BPLC {
            @display("p=403,273");
        }
        generic_Access_BPLCn10: Generic_Access_BPLC {
            @display("p=560,273");
        }
        generic_Access_BPLCn11: Generic_Access_BPLC {
            @display("p=716,273");
        }
        generic_Access_BPLCn12: Generic_Access_BPLC {
            @display("p=872,273");
        }
        generic_Access_BPLCn13: Generic_Access_BPLC {
            @display("p=1031,273");
        }
        IKTGateway2_15: StandardHost {
            @display("p=94,338;i=device/accesspoint");
        }
        IKTGateway2_16: StandardHost {
            @display("p=246,338;i=device/accesspoint");
        }
        IKTGateway2_17: StandardHost {
            @display("p=403,338;i=device/accesspoint");
        }
        IKTGateway2_18: StandardHost {
            @display("p=560,338;i=device/accesspoint");
        }
        IKTGateway2_19: StandardHost {
            @display("p=716,338;i=device/accesspoint");
        }
        IKTGateway2_20: StandardHost {
            @display("p=872,338;i=device/accesspoint");
        }
        IKTGateway2_21: StandardHost {
            @display("p=1031,338;i=device/accesspoint");
        }
        generic_Access_BPLCn14: Generic_Access_BPLC {
            @display("p=94,415");
        }
        generic_Access_BPLCn15: Generic_Access_BPLC {
            @display("p=246,415");
        }
        generic_Access_BPLCn16: Generic_Access_BPLC {
            @display("p=403,415");
        }
        generic_Access_BPLCn17: Generic_Access_BPLC {
            @display("p=560,415");
        }
        generic_Access_BPLCn18: Generic_Access_BPLC {
            @display("p=716,415");
        }
        generic_Access_BPLCn19: Generic_Access_BPLC {
            @display("p=872,415");
        }
        generic_Access_BPLCn20: Generic_Access_BPLC {
            @display("p=1031,415");
        }
        IKTGateway2_22: StandardHost {
            @display("p=94,480;i=device/accesspoint");
        }
        IKTGateway2_23: StandardHost {
            @display("p=246,480;i=device/accesspoint");
        }
        IKTGateway2_24: StandardHost {
            @display("p=403,480;i=device/accesspoint");
        }
        IKTGateway2_25: StandardHost {
            @display("p=560,480;i=device/accesspoint");
        }
        IKTGateway2_26: StandardHost {
            @display("p=716,480;i=device/accesspoint");
        }
        IKTGateway2_27: StandardHost {
            @display("p=872,480;i=device/accesspoint");
        }
        IKTGateway2_28: StandardHost {
            @display("p=1031,480;i=device/accesspoint");
        }
        generic_Access_BPLCn21: Generic_Access_BPLC {
            @display("p=94,557");
        }
        generic_Access_BPLCn22: Generic_Access_BPLC {
            @display("p=246,557");
        }
        generic_Access_BPLCn23: Generic_Access_BPLC {
            @display("p=403,557");
        }
        generic_Access_BPLCn24: Generic_Access_BPLC {
            @display("p=560,557");
        }
        generic_Access_BPLCn25: Generic_Access_BPLC {
            @display("p=716,557");
        }
        generic_Access_BPLCn26: Generic_Access_BPLC {
            @display("p=872,557");
        }
        generic_Access_BPLCn27: Generic_Access_BPLC {
            @display("p=1031,557");
        }
        IKTGateway2_29: StandardHost {
            @display("p=94,622;i=device/accesspoint");
        }
        IKTGateway2_30: StandardHost {
            @display("p=246,622;i=device/accesspoint");
        }
        IKTGateway2_31: StandardHost {
            @display("p=403,622;i=device/accesspoint");
        }
        IKTGateway2_32: StandardHost {
            @display("p=560,622;i=device/accesspoint");
        }
        IKTGateway2_33: StandardHost {
            @display("p=716,622;i=device/accesspoint");
        }
        IKTGateway2_34: StandardHost {
            @display("p=872,622;i=device/accesspoint");
        }
        IKTGateway2_35: StandardHost {
            @display("p=1031,622;i=device/accesspoint");
        }
        generic_Access_BPLCn28: Generic_Access_BPLC {
            @display("p=94,699");
        }
        generic_Access_BPLCn29: Generic_Access_BPLC {
            @display("p=246,699");
        }
        generic_Access_BPLCn30: Generic_Access_BPLC {
            @display("p=403,699");
        }
        generic_Access_BPLCn31: Generic_Access_BPLC {
            @display("p=560,699");
        }
        generic_Access_BPLCn32: Generic_Access_BPLC {
            @display("p=716,699");
        }
        generic_Access_BPLCn33: Generic_Access_BPLC {
            @display("p=872,699");
        }
        generic_Access_BPLCn34: Generic_Access_BPLC {
            @display("p=1031,699");
        }
        flatNetworkConfigurator: FlatNetworkConfigurator {
            @display("p=785,977");
        }
    connections allowunconnected:
        IKTGateway2_1.ethg++ <--> ChannelA <--> generic_Access_BPLCn.MAC_side;
        generic_Access_BPLCn.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        BPLAM_Server.ethg++ <--> ChannelA <--> BPLAM_BPLC_CCo.MAC_side;
        IKTGateway2_2.ethg++ <--> ChannelA <--> generic_Access_BPLCn1.MAC_side;
        IKTGateway2_3.ethg++ <--> ChannelA <--> generic_Access_BPLCn2.MAC_side;
        IKTGateway2_4.ethg++ <--> ChannelA <--> generic_Access_BPLCn3.MAC_side;
        IKTGateway2_5.ethg++ <--> ChannelA <--> generic_Access_BPLCn4.MAC_side;
        generic_Access_BPLCn1.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn2.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn3.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn4.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        IKTGateway2_6.ethg++ <--> ChannelA <--> generic_Access_BPLCn5.MAC_side;
        IKTGateway2_7.ethg++ <--> ChannelA <--> generic_Access_BPLCn6.MAC_side;
        IKTGateway2_8.ethg++ <--> ChannelA <--> generic_Access_BPLCn7.MAC_side;
        IKTGateway2_10.ethg++ <--> ChannelA <--> generic_Access_BPLCn9.MAC_side;
        IKTGateway2_14.ethg++ <--> ChannelA <--> generic_Access_BPLCn13.MAC_side;
        IKTGateway2_13.ethg++ <--> ChannelA <--> generic_Access_BPLCn12.MAC_side;
        IKTGateway2_11.ethg++ <--> ChannelA <--> generic_Access_BPLCn10.MAC_side;
        IKTGateway2_12.ethg++ <--> ChannelA <--> generic_Access_BPLCn11.MAC_side;
        IKTGateway2_9.ethg++ <--> ChannelA <--> generic_Access_BPLCn8.MAC_side;
        generic_Access_BPLCn7.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn8.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn9.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn10.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn11.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn12.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn13.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        IKTGateway2_15.ethg++ <--> ChannelA <--> generic_Access_BPLCn14.MAC_side;
        IKTGateway2_17.ethg++ <--> ChannelA <--> generic_Access_BPLCn16.MAC_side;
        IKTGateway2_21.ethg++ <--> ChannelA <--> generic_Access_BPLCn20.MAC_side;
        IKTGateway2_20.ethg++ <--> ChannelA <--> generic_Access_BPLCn19.MAC_side;
        IKTGateway2_18.ethg++ <--> ChannelA <--> generic_Access_BPLCn17.MAC_side;
        IKTGateway2_19.ethg++ <--> ChannelA <--> generic_Access_BPLCn18.MAC_side;
        IKTGateway2_16.ethg++ <--> ChannelA <--> generic_Access_BPLCn15.MAC_side;
        generic_Access_BPLCn14.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn15.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn16.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn17.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn18.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn19.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn20.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn5.PLC_side <--> BPLAM_BPLC_CCo.PLC_side++;
        BPLAM_BPLC_CCo.PLC_side++ <--> generic_Access_BPLCn6.PLC_side;
        IKTGateway2_22.ethg++ <--> ChannelA <--> generic_Access_BPLCn21.MAC_side;
        IKTGateway2_24.ethg++ <--> ChannelA <--> generic_Access_BPLCn23.MAC_side;
        IKTGateway2_28.ethg++ <--> ChannelA <--> generic_Access_BPLCn27.MAC_side;
        IKTGateway2_27.ethg++ <--> ChannelA <--> generic_Access_BPLCn26.MAC_side;
        IKTGateway2_25.ethg++ <--> ChannelA <--> generic_Access_BPLCn24.MAC_side;
        IKTGateway2_26.ethg++ <--> ChannelA <--> generic_Access_BPLCn25.MAC_side;
        IKTGateway2_23.ethg++ <--> ChannelA <--> generic_Access_BPLCn22.MAC_side;
        IKTGateway2_29.ethg++ <--> ChannelA <--> generic_Access_BPLCn28.MAC_side;
        IKTGateway2_31.ethg++ <--> ChannelA <--> generic_Access_BPLCn30.MAC_side;
        IKTGateway2_35.ethg++ <--> ChannelA <--> generic_Access_BPLCn34.MAC_side;
        IKTGateway2_34.ethg++ <--> ChannelA <--> generic_Access_BPLCn33.MAC_side;
        IKTGateway2_32.ethg++ <--> ChannelA <--> generic_Access_BPLCn31.MAC_side;
        IKTGateway2_33.ethg++ <--> ChannelA <--> generic_Access_BPLCn32.MAC_side;
        IKTGateway2_30.ethg++ <--> ChannelA <--> generic_Access_BPLCn29.MAC_side;
        BPLAM_BPLC_CCo.PLC_side++ <--> generic_Access_BPLCn34.PLC_side;
        generic_Access_BPLCn33.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn32.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn31.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn30.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn29.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn28.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn21.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn22.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn23.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn24.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn25.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn26.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        generic_Access_BPLCn27.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
}
