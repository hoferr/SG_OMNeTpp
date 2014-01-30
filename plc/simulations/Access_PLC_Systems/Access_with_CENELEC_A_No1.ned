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

package plc.simulations.Access_PLC_Systems;

import inet.networklayer.autorouting.ipv4.FlatNetworkConfigurator;
import plc.src.DataCollector;
import inet.util.ThruputMeteringChannel;
import Market_Technologies.Access_PLC.CENELEC_A_Host_CCo;
import Market_Technologies.Access_PLC.CENELEC_A_Host;


network Access_with_CENELEC_A_No1
{
    @display("i=block/network;bgb=793,657");
    types:
        channel ChannelA extends ned.DelayChannel
        {
            delay = 50ns; // 10m cable between households
        }
    submodules:
        cenelec_A_CCo: CENELEC_A_Host_CCo {
            @display("p=725,541;i=device/router");
        }
        cenelec_An_Host5: CENELEC_A_Host {
            @display("p=359,142;i=device/hub");
        }
        cenelec_An_Host1: CENELEC_A_Host {
            @display("p=51,142;i=device/hub");
        }
        cenelec_An_Host2: CENELEC_A_Host {
            @display("p=130,142;i=device/hub");
        }
        cenelec_An_Host3: CENELEC_A_Host {
            @display("p=208,142;i=device/hub");
        }
        cenelec_An_Host4: CENELEC_A_Host {
            @display("p=284,142;i=device/hub");
        }
        dataCollector: DataCollector {
            @display("p=399,600");
        }
        cenelec_An_Host6: CENELEC_A_Host {
            @display("p=434,142;i=device/hub");
        }
        cenelec_An_Host7: CENELEC_A_Host {
            @display("p=506,142;i=device/hub");
        }
        cenelec_An_Host8: CENELEC_A_Host {
            @display("p=578,142;i=device/hub");
        }
        cenelec_An_Host10: CENELEC_A_Host {
            @display("p=725,142;i=device/hub");
        }
        cenelec_An_Host9: CENELEC_A_Host {
            @display("p=650,142;i=device/hub");
        }
        cenelec_An_Host11: CENELEC_A_Host {
            @display("p=51,209;i=device/hub");
        }
        cenelec_An_Host12: CENELEC_A_Host {
            @display("p=130,209;i=device/hub");
        }
        cenelec_An_Host13: CENELEC_A_Host {
            @display("p=208,209;i=device/hub;i=device/hub");
        }
        cenelec_An_Host14: CENELEC_A_Host {
            @display("p=284,209;i=device/hub");
        }
        cenelec_An_Host15: CENELEC_A_Host {
            @display("p=359,209;i=device/hub");
        }
        cenelec_An_Host16: CENELEC_A_Host {
            @display("p=434,209;i=device/hub");
        }
        cenelec_An_Host17: CENELEC_A_Host {
            @display("p=506,209;i=device/hub");
        }
        cenelec_An_Host18: CENELEC_A_Host {
            @display("p=578,209;i=device/hub");
        }
        cenelec_An_Host19: CENELEC_A_Host {
            @display("p=650,209;i=device/hub");
        }
        cenelec_An_Host20: CENELEC_A_Host {
            @display("p=725,209;i=device/hub");
        }
        cenelec_An_Host21: CENELEC_A_Host {
            @display("p=51,284;i=device/hub");
        }
        cenelec_An_Host22: CENELEC_A_Host {
            @display("p=130,284;i=device/hub");
        }
        cenelec_An_Host23: CENELEC_A_Host {
            @display("p=208,284;i=device/hub");
        }
        cenelec_An_Host24: CENELEC_A_Host {
            @display("p=284,284;i=device/hub");
        }
        cenelec_An_Host25: CENELEC_A_Host {
            @display("p=359,284;i=device/hub");
        }
        cenelec_An_Host26: CENELEC_A_Host {
            @display("p=434,284;i=device/hub");
        }
        cenelec_An_Host27: CENELEC_A_Host {
            @display("p=506,284;i=device/hub");
        }
        cenelec_An_Host28: CENELEC_A_Host {
            @display("p=578,284;i=device/hub");
        }
        cenelec_An_Host29: CENELEC_A_Host {
            @display("p=650,284;i=device/hub");
        }
        cenelec_An_Host30: CENELEC_A_Host {
            @display("p=725,284;i=device/hub");
        }
        cenelec_An_Host31: CENELEC_A_Host {
            @display("p=51,351;i=device/hub");
        }
        cenelec_An_Host32: CENELEC_A_Host {
            @display("p=130,351;i=device/hub");
        }
        cenelec_An_Host33: CENELEC_A_Host {
            @display("p=208,351;i=device/hub");
        }
        cenelec_An_Host34: CENELEC_A_Host {
            @display("p=284,351;i=device/hub");
        }
        cenelec_An_Host35: CENELEC_A_Host {
            @display("p=359,351;i=device/hub");
        }
        cenelec_An_Host36: CENELEC_A_Host {
            @display("p=434,351;i=device/hub");
        }
        cenelec_An_Host37: CENELEC_A_Host {
            @display("p=506,351;i=device/hub");
        }
        cenelec_An_Host38: CENELEC_A_Host {
            @display("p=578,351;i=device/hub");
        }
        cenelec_An_Host39: CENELEC_A_Host {
            @display("p=650,351;i=device/hub");
        }
        cenelec_An_Host40: CENELEC_A_Host {
            @display("p=725,351;i=device/hub");
        }
        cenelec_An_Host41: CENELEC_A_Host {
            @display("p=51,425;i=device/hub");
        }
        cenelec_An_Host42: CENELEC_A_Host {
            @display("p=130,425;i=device/hub");
        }
        cenelec_An_Host43: CENELEC_A_Host {
            @display("p=208,425;i=device/hub");
        }
        cenelec_An_Host44: CENELEC_A_Host {
            @display("p=284,425;i=device/hub");
        }
        cenelec_An_Host45: CENELEC_A_Host {
            @display("p=359,425;i=device/hub");
        }
        cenelec_An_Host46: CENELEC_A_Host {
            @display("p=434,425;i=device/hub");
        }
        cenelec_An_Host47: CENELEC_A_Host {
            @display("p=506,425;i=device/hub");
        }
        cenelec_An_Host48: CENELEC_A_Host {
            @display("p=578,425;i=device/hub");
        }
        cenelec_An_Host49: CENELEC_A_Host {
            @display("p=650,425;i=device/hub");
        }
        cenelec_An_Host50: CENELEC_A_Host {
            @display("p=725,425;i=device/hub");
        }
        flatNetworkConfigurator: FlatNetworkConfigurator {
            @display("p=601,589");
        }
    connections allowunconnected:
        cenelec_An_Host5.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host1.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host2.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host3.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host4.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host6.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host8.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host7.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host9.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host10.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;

        cenelec_An_Host15.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host11.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host12.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host13.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host14.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host16.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host18.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host17.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host19.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host20.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;

        cenelec_An_Host25.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host21.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host22.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host23.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host24.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host26.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host28.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host27.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host29.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host30.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;

        cenelec_An_Host35.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host31.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host32.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host33.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host34.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host36.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host38.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host37.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host39.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host40.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;

        cenelec_An_Host45.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host41.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host42.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host43.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host44.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host46.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host48.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host47.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host49.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;
        cenelec_An_Host50.ethg++ <--> ChannelA <--> cenelec_A_CCo.ethg++;

}
