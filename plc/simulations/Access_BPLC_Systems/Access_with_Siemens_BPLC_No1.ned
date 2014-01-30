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

import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import plc.src.DataCollector;
import inet.nodes.inet.StandardHost;
import plc.Market_Technologies.Access_BPLC.Siemens_Access_BPLC_CCo;
import plc.Market_Technologies.Access_BPLC.Siemens_Access_BPLC;


network Access_with_Siemens_BPLC_No1
{
    @display("i=block/network;bgb=1121,1121");
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
        IKTGateway2_1: StandardHost {
            @display("p=94,50;i=device/accesspoint");
        }
        dataCollector: DataCollector {
            @display("p=559,1046");
        }
        BPLAM_BPLC_CCo: Siemens_Access_BPLC_CCo {
            @display("p=560,842");
        }
        siemens_Access_BPLC: Siemens_Access_BPLC {
            @display("p=94,127");
        }
        BPLAM_Server: StandardHost {
            @display("p=560,927;i=device/router");
        }
        IKTGateway2_2: StandardHost {
            @display("p=246,50;i=device/accesspoint");
        }
        siemens_Access_BPLC1: Siemens_Access_BPLC {
            @display("p=246,127");
        }
        IKTGateway2_3: StandardHost {
            @display("p=403,50;i=device/accesspoint");
        }
        siemens_Access_BPLC2: Siemens_Access_BPLC {
            @display("p=403,127");
        }
        IKTGateway2_4: StandardHost {
            @display("p=560,50;i=device/accesspoint");
        }
        siemens_Access_BPLC3: Siemens_Access_BPLC {
            @display("p=560,127");
        }
        IKTGateway2_5: StandardHost {
            @display("p=716,50;i=device/accesspoint");
        }
        siemens_Access_BPLC4: Siemens_Access_BPLC {
            @display("p=716,127");
        }
        IKTGateway2_6: StandardHost {
            @display("p=872,50;i=device/accesspoint");
        }
        siemens_Access_BPLC5: Siemens_Access_BPLC {
            @display("p=872,127");
        }
        IKTGateway2_7: StandardHost {
            @display("p=1031,50;i=device/accesspoint");
        }
        siemens_Access_BPLC6: Siemens_Access_BPLC {
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
        siemens_Access_BPLC7: Siemens_Access_BPLC {
            @display("p=94,273");
        }
        siemens_Access_BPLC8: Siemens_Access_BPLC {
            @display("p=246,273");
        }
        siemens_Access_BPLC9: Siemens_Access_BPLC {
            @display("p=403,273");
        }
        siemens_Access_BPLC10: Siemens_Access_BPLC {
            @display("p=560,273");
        }
        siemens_Access_BPLC11: Siemens_Access_BPLC {
            @display("p=716,273");
        }
        siemens_Access_BPLC12: Siemens_Access_BPLC {
            @display("p=872,273");
        }
        siemens_Access_BPLC13: Siemens_Access_BPLC {
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
        siemens_Access_BPLC14: Siemens_Access_BPLC {
            @display("p=94,415");
        }
        siemens_Access_BPLC15: Siemens_Access_BPLC {
            @display("p=246,415");
        }
        siemens_Access_BPLC16: Siemens_Access_BPLC {
            @display("p=403,415");
        }
        siemens_Access_BPLC17: Siemens_Access_BPLC {
            @display("p=560,415");
        }
        siemens_Access_BPLC18: Siemens_Access_BPLC {
            @display("p=716,415");
        }
        siemens_Access_BPLC19: Siemens_Access_BPLC {
            @display("p=872,415");
        }
        siemens_Access_BPLC20: Siemens_Access_BPLC {
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
        siemens_Access_BPLC21: Siemens_Access_BPLC {
            @display("p=94,557");
        }
        siemens_Access_BPLC22: Siemens_Access_BPLC {
            @display("p=246,557");
        }
        siemens_Access_BPLC23: Siemens_Access_BPLC {
            @display("p=403,557");
        }
        siemens_Access_BPLC24: Siemens_Access_BPLC {
            @display("p=560,557");
        }
        siemens_Access_BPLC25: Siemens_Access_BPLC {
            @display("p=716,557");
        }
        siemens_Access_BPLC26: Siemens_Access_BPLC {
            @display("p=872,557");
        }
        siemens_Access_BPLC27: Siemens_Access_BPLC {
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
        siemens_Access_BPLC28: Siemens_Access_BPLC {
            @display("p=94,699");
        }
        siemens_Access_BPLC29: Siemens_Access_BPLC {
            @display("p=246,699");
        }
        siemens_Access_BPLC30: Siemens_Access_BPLC {
            @display("p=403,699");
        }
        siemens_Access_BPLC31: Siemens_Access_BPLC {
            @display("p=560,699");
        }
        siemens_Access_BPLC32: Siemens_Access_BPLC {
            @display("p=716,699");
        }
        siemens_Access_BPLC33: Siemens_Access_BPLC {
            @display("p=872,699");
        }
        siemens_Access_BPLC34: Siemens_Access_BPLC {
            @display("p=1031,699");
        }
        flatNetworkConfigurator: FlatNetworkConfigurator {
            @display("p=818,980");
        }
    connections allowunconnected:
        IKTGateway2_1.ethg++ <--> ChannelA <--> siemens_Access_BPLC.MAC_side;
        siemens_Access_BPLC.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        BPLAM_Server.ethg++ <--> ChannelA <--> BPLAM_BPLC_CCo.MAC_side;
        IKTGateway2_2.ethg++ <--> ChannelA <--> siemens_Access_BPLC1.MAC_side;
        IKTGateway2_3.ethg++ <--> ChannelA <--> siemens_Access_BPLC2.MAC_side;
        IKTGateway2_4.ethg++ <--> ChannelA <--> siemens_Access_BPLC3.MAC_side;
        IKTGateway2_5.ethg++ <--> ChannelA <--> siemens_Access_BPLC4.MAC_side;
        siemens_Access_BPLC1.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC2.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC3.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC4.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        IKTGateway2_6.ethg++ <--> ChannelA <--> siemens_Access_BPLC5.MAC_side;
        IKTGateway2_7.ethg++ <--> ChannelA <--> siemens_Access_BPLC6.MAC_side;
        IKTGateway2_8.ethg++ <--> ChannelA <--> siemens_Access_BPLC7.MAC_side;
        IKTGateway2_10.ethg++ <--> ChannelA <--> siemens_Access_BPLC9.MAC_side;
        IKTGateway2_14.ethg++ <--> ChannelA <--> siemens_Access_BPLC13.MAC_side;
        IKTGateway2_13.ethg++ <--> ChannelA <--> siemens_Access_BPLC12.MAC_side;
        IKTGateway2_11.ethg++ <--> ChannelA <--> siemens_Access_BPLC10.MAC_side;
        IKTGateway2_12.ethg++ <--> ChannelA <--> siemens_Access_BPLC11.MAC_side;
        IKTGateway2_9.ethg++ <--> ChannelA <--> siemens_Access_BPLC8.MAC_side;
        siemens_Access_BPLC7.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC8.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC9.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC10.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC11.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC12.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC13.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        IKTGateway2_15.ethg++ <--> ChannelA <--> siemens_Access_BPLC14.MAC_side;
        IKTGateway2_17.ethg++ <--> ChannelA <--> siemens_Access_BPLC16.MAC_side;
        IKTGateway2_21.ethg++ <--> ChannelA <--> siemens_Access_BPLC20.MAC_side;
        IKTGateway2_20.ethg++ <--> ChannelA <--> siemens_Access_BPLC19.MAC_side;
        IKTGateway2_18.ethg++ <--> ChannelA <--> siemens_Access_BPLC17.MAC_side;
        IKTGateway2_19.ethg++ <--> ChannelA <--> siemens_Access_BPLC18.MAC_side;
        IKTGateway2_16.ethg++ <--> ChannelA <--> siemens_Access_BPLC15.MAC_side;
        siemens_Access_BPLC14.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC15.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC16.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC17.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC18.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC19.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC20.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC5.PLC_side <--> BPLAM_BPLC_CCo.PLC_side++;
        BPLAM_BPLC_CCo.PLC_side++ <--> siemens_Access_BPLC6.PLC_side;
        IKTGateway2_22.ethg++ <--> ChannelA <--> siemens_Access_BPLC21.MAC_side;
        IKTGateway2_24.ethg++ <--> ChannelA <--> siemens_Access_BPLC23.MAC_side;
        IKTGateway2_28.ethg++ <--> ChannelA <--> siemens_Access_BPLC27.MAC_side;
        IKTGateway2_27.ethg++ <--> ChannelA <--> siemens_Access_BPLC26.MAC_side;
        IKTGateway2_25.ethg++ <--> ChannelA <--> siemens_Access_BPLC24.MAC_side;
        IKTGateway2_26.ethg++ <--> ChannelA <--> siemens_Access_BPLC25.MAC_side;
        IKTGateway2_23.ethg++ <--> ChannelA <--> siemens_Access_BPLC22.MAC_side;
        IKTGateway2_29.ethg++ <--> ChannelA <--> siemens_Access_BPLC28.MAC_side;
        IKTGateway2_31.ethg++ <--> ChannelA <--> siemens_Access_BPLC30.MAC_side;
        IKTGateway2_35.ethg++ <--> ChannelA <--> siemens_Access_BPLC34.MAC_side;
        IKTGateway2_34.ethg++ <--> ChannelA <--> siemens_Access_BPLC33.MAC_side;
        IKTGateway2_32.ethg++ <--> ChannelA <--> siemens_Access_BPLC31.MAC_side;
        IKTGateway2_33.ethg++ <--> ChannelA <--> siemens_Access_BPLC32.MAC_side;
        IKTGateway2_30.ethg++ <--> ChannelA <--> siemens_Access_BPLC29.MAC_side;
        BPLAM_BPLC_CCo.PLC_side++ <--> siemens_Access_BPLC34.PLC_side;
        siemens_Access_BPLC33.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC32.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC31.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC30.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC29.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC28.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC21.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC22.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC23.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC24.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC25.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC26.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
        siemens_Access_BPLC27.PLC_side <--> ChannelA <--> BPLAM_BPLC_CCo.PLC_side++;
}
