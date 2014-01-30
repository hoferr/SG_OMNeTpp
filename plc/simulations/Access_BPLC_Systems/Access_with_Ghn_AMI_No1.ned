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

package plc.simulations.Access_BPLC_Systems;

import plc.src.DataCollector;
//import inet.world.ChannelInstaller;
import inet.nodes.inet.StandardHost;
import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import plc.Market_Technologies.Access_BPLC.Ghn_AMI_CCo;
import plc.Market_Technologies.Access_BPLC.Ghn_AMI;
import inet.util.ThruputMeteringChannel;


network Access_with_Ghn_AMI_No1
{
    @display("i=block/network;bgb=1121,1121");
    types:
        //        channel ChannelA extends ned.DelayChannel
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
        IKTGateway2_1: StandardHost {
            @display("p=94,50;i=device/accesspoint");
        }
        BPLAM_BPLC_CCo: Ghn_AMI_CCo {
            @display("p=560,842");
        }
        ghn_AMIn: Ghn_AMI {
            @display("p=94,127");
        }
        BPLAM_Server: StandardHost {
            @display("p=560,927;i=device/router");
        }
        IKTGateway2_2: StandardHost {
            @display("p=246,50;i=device/accesspoint");
        }
        ghn_AMIn1: Ghn_AMI {
            @display("p=246,127");
        }
        IKTGateway2_3: StandardHost {
            @display("p=403,50;i=device/accesspoint");
        }
        ghn_AMIn2: Ghn_AMI {
            @display("p=403,127");
        }
        IKTGateway2_4: StandardHost {
            @display("p=560,50;i=device/accesspoint");
        }
        ghn_AMIn3: Ghn_AMI {
            @display("p=560,127");
        }
        IKTGateway2_5: StandardHost {
            @display("p=716,50;i=device/accesspoint");
        }
        ghn_AMIn4: Ghn_AMI {
            @display("p=716,127");
        }
        IKTGateway2_6: StandardHost {
            @display("p=872,50;i=device/accesspoint");
        }
        ghn_AMIn5: Ghn_AMI {
            @display("p=872,127");
        }
        IKTGateway2_7: StandardHost {
            @display("p=1031,50;i=device/accesspoint");
        }
        ghn_AMIn6: Ghn_AMI {
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
        ghn_AMIn7: Ghn_AMI {
            @display("p=94,273");
        }
        ghn_AMIn8: Ghn_AMI {
            @display("p=246,273");
        }
        ghn_AMIn9: Ghn_AMI {
            @display("p=403,273");
        }
        ghn_AMIn10: Ghn_AMI {
            @display("p=560,273");
        }
        ghn_AMIn11: Ghn_AMI {
            @display("p=716,273");
        }
        ghn_AMIn12: Ghn_AMI {
            @display("p=872,273");
        }
        ghn_AMIn13: Ghn_AMI {
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
        ghn_AMIn14: Ghn_AMI {
            @display("p=94,415");
        }
        ghn_AMIn15: Ghn_AMI {
            @display("p=246,415");
        }
        ghn_AMIn16: Ghn_AMI {
            @display("p=403,415");
        }
        ghn_AMIn17: Ghn_AMI {
            @display("p=560,415");
        }
        ghn_AMIn18: Ghn_AMI {
            @display("p=716,415");
        }
        ghn_AMIn19: Ghn_AMI {
            @display("p=872,415");
        }
        ghn_AMIn20: Ghn_AMI {
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
        ghn_AMIn21: Ghn_AMI {
            @display("p=94,557");
        }
        ghn_AMIn22: Ghn_AMI {
            @display("p=246,557");
        }
        ghn_AMIn23: Ghn_AMI {
            @display("p=403,557");
        }
        ghn_AMIn24: Ghn_AMI {
            @display("p=560,557");
        }
        ghn_AMIn25: Ghn_AMI {
            @display("p=716,557");
        }
        ghn_AMIn26: Ghn_AMI {
            @display("p=872,557");
        }
        ghn_AMIn27: Ghn_AMI {
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
        ghn_AMIn28: Ghn_AMI {
            @display("p=94,699");
        }
        ghn_AMIn29: Ghn_AMI {
            @display("p=246,699");
        }
        ghn_AMIn30: Ghn_AMI {
            @display("p=403,699");
        }
        ghn_AMIn31: Ghn_AMI {
            @display("p=560,699");
        }
        ghn_AMIn32: Ghn_AMI {
            @display("p=716,699");
        }
        ghn_AMIn33: Ghn_AMI {
            @display("p=872,699");
        }
        ghn_AMIn34: Ghn_AMI {
            @display("p=1031,699");
        }
        flatNetworkConfigurator: FlatNetworkConfigurator {
            @display("p=847,1043");
        }
    connections allowunconnected:
        IKTGateway2_1.ethg++ <--> ChannelA <--> ghn_AMIn.MAC_side;
        ghn_AMIn.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        BPLAM_Server.ethg++ <--> ChannelA <--> BPLAM_BPLC_CCo.MAC_side;
        IKTGateway2_2.ethg++ <--> ChannelA <--> ghn_AMIn1.MAC_side;
        IKTGateway2_3.ethg++ <--> ChannelA <--> ghn_AMIn2.MAC_side;
        IKTGateway2_4.ethg++ <--> ChannelA <--> ghn_AMIn3.MAC_side;
        IKTGateway2_5.ethg++ <--> ChannelA <--> ghn_AMIn4.MAC_side;
        ghn_AMIn1.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn2.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn3.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn4.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        IKTGateway2_6.ethg++ <--> ChannelA <--> ghn_AMIn5.MAC_side;
        IKTGateway2_7.ethg++ <--> ChannelA <--> ghn_AMIn6.MAC_side;
        IKTGateway2_8.ethg++ <--> ChannelA <--> ghn_AMIn7.MAC_side;
        IKTGateway2_10.ethg++ <--> ChannelA <--> ghn_AMIn9.MAC_side;
        IKTGateway2_14.ethg++ <--> ChannelA <--> ghn_AMIn13.MAC_side;
        IKTGateway2_13.ethg++ <--> ChannelA <--> ghn_AMIn12.MAC_side;
        IKTGateway2_11.ethg++ <--> ChannelA <--> ghn_AMIn10.MAC_side;
        IKTGateway2_12.ethg++ <--> ChannelA <--> ghn_AMIn11.MAC_side;
        IKTGateway2_9.ethg++ <--> ChannelA <--> ghn_AMIn8.MAC_side;
        ghn_AMIn7.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn8.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn9.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn10.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn11.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn12.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn13.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        IKTGateway2_15.ethg++ <--> ChannelA <--> ghn_AMIn14.MAC_side;
        IKTGateway2_17.ethg++ <--> ChannelA <--> ghn_AMIn16.MAC_side;
        IKTGateway2_21.ethg++ <--> ChannelA <--> ghn_AMIn20.MAC_side;
        IKTGateway2_20.ethg++ <--> ChannelA <--> ghn_AMIn19.MAC_side;
        IKTGateway2_18.ethg++ <--> ChannelA <--> ghn_AMIn17.MAC_side;
        IKTGateway2_19.ethg++ <--> ChannelA <--> ghn_AMIn18.MAC_side;
        IKTGateway2_16.ethg++ <--> ChannelA <--> ghn_AMIn15.MAC_side;
        ghn_AMIn14.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn15.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn16.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn17.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn18.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn19.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn20.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn5.PLC_side <--> BPLAM_BPLC_CCo.PLC_side++;
        BPLAM_BPLC_CCo.PLC_side++ <--> ghn_AMIn6.PLC_side;
        IKTGateway2_22.ethg++ <--> ChannelA <--> ghn_AMIn21.MAC_side;
        IKTGateway2_24.ethg++ <--> ChannelA <--> ghn_AMIn23.MAC_side;
        IKTGateway2_28.ethg++ <--> ChannelA <--> ghn_AMIn27.MAC_side;
        IKTGateway2_27.ethg++ <--> ChannelA <--> ghn_AMIn26.MAC_side;
        IKTGateway2_25.ethg++ <--> ChannelA <--> ghn_AMIn24.MAC_side;
        IKTGateway2_26.ethg++ <--> ChannelA <--> ghn_AMIn25.MAC_side;
        IKTGateway2_23.ethg++ <--> ChannelA <--> ghn_AMIn22.MAC_side;
        IKTGateway2_29.ethg++ <--> ChannelA <--> ghn_AMIn28.MAC_side;
        IKTGateway2_31.ethg++ <--> ChannelA <--> ghn_AMIn30.MAC_side;
        IKTGateway2_35.ethg++ <--> ChannelA <--> ghn_AMIn34.MAC_side;
        IKTGateway2_34.ethg++ <--> ChannelA <--> ghn_AMIn33.MAC_side;
        IKTGateway2_32.ethg++ <--> ChannelA <--> ghn_AMIn31.MAC_side;
        IKTGateway2_33.ethg++ <--> ChannelA <--> ghn_AMIn32.MAC_side;
        IKTGateway2_30.ethg++ <--> ChannelA <--> ghn_AMIn29.MAC_side;
        BPLAM_BPLC_CCo.PLC_side++ <--> ghn_AMIn34.PLC_side;
        ghn_AMIn33.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn32.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn31.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn30.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn29.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn28.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn21.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn22.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn23.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn24.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn25.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn26.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        ghn_AMIn27.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
}
