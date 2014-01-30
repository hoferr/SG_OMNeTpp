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
import Market_Technologies.Access_PLC.FCC_Band_Host_CCo;
import Market_Technologies.Access_PLC.FCC_Band_Host;


network Access_with_FCC_Band_No1
{
    @display("i=block/network;bgb=793,657");
    types:
        channel ChannelA extends ThruputMeteringChannel
        {
            delay = 50ns; // 10m cable between households
        }
    submodules:
        fcc_Band_CCo: FCC_Band_Host_CCo {
            @display("p=725,541;i=device/router");
        }
        fcc_Bandn_Host5: FCC_Band_Host {
            @display("p=359,142;i=device/hub");
        }
        fcc_Bandn_Host1: FCC_Band_Host {
            @display("p=51,142;i=device/hub");
        }
        fcc_Bandn_Host2: FCC_Band_Host {
            @display("p=130,142;i=device/hub");
        }
        fcc_Bandn_Host3: FCC_Band_Host {
            @display("p=208,142;i=device/hub");
        }
        fcc_Bandn_Host4: FCC_Band_Host {
            @display("p=284,142;i=device/hub");
        }
        dataCollector: DataCollector {
            @display("p=399,600");
        }
        fcc_Bandn_Host6: FCC_Band_Host {
            @display("p=434,142;i=device/hub");
        }
        fcc_Bandn_Host7: FCC_Band_Host {
            @display("p=506,142;i=device/hub");
        }
        fcc_Bandn_Host8: FCC_Band_Host {
            @display("p=578,142;i=device/hub");
        }
        fcc_Bandn_Host10: FCC_Band_Host {
            @display("p=725,142;i=device/hub");
        }
        fcc_Bandn_Host9: FCC_Band_Host {
            @display("p=650,142;i=device/hub");
        }
        fcc_Bandn_Host11: FCC_Band_Host {
            @display("p=51,209;i=device/hub");
        }
        fcc_Bandn_Host12: FCC_Band_Host {
            @display("p=130,209;i=device/hub");
        }
        fcc_Bandn_Host13: FCC_Band_Host {
            @display("p=208,209;i=device/hub;i=device/hub");
        }
        fcc_Bandn_Host14: FCC_Band_Host {
            @display("p=284,209;i=device/hub");
        }
        fcc_Bandn_Host15: FCC_Band_Host {
            @display("p=359,209;i=device/hub");
        }
        fcc_Bandn_Host16: FCC_Band_Host {
            @display("p=434,209;i=device/hub");
        }
        fcc_Bandn_Host17: FCC_Band_Host {
            @display("p=506,209;i=device/hub");
        }
        fcc_Bandn_Host18: FCC_Band_Host {
            @display("p=578,209;i=device/hub");
        }
        fcc_Bandn_Host19: FCC_Band_Host {
            @display("p=650,209;i=device/hub");
        }
        fcc_Bandn_Host20: FCC_Band_Host {
            @display("p=725,209;i=device/hub");
        }
        fcc_Bandn_Host21: FCC_Band_Host {
            @display("p=51,284;i=device/hub");
        }
        fcc_Bandn_Host22: FCC_Band_Host {
            @display("p=130,284;i=device/hub");
        }
        fcc_Bandn_Host23: FCC_Band_Host {
            @display("p=208,284;i=device/hub");
        }
        fcc_Bandn_Host24: FCC_Band_Host {
            @display("p=284,284;i=device/hub");
        }
        fcc_Bandn_Host25: FCC_Band_Host {
            @display("p=359,284;i=device/hub");
        }
        fcc_Bandn_Host26: FCC_Band_Host {
            @display("p=434,284;i=device/hub");
        }
        fcc_Bandn_Host27: FCC_Band_Host {
            @display("p=506,284;i=device/hub");
        }
        fcc_Bandn_Host28: FCC_Band_Host {
            @display("p=578,284;i=device/hub");
        }
        fcc_Bandn_Host29: FCC_Band_Host {
            @display("p=650,284;i=device/hub");
        }
        fcc_Bandn_Host30: FCC_Band_Host {
            @display("p=725,284;i=device/hub");
        }
        fcc_Bandn_Host31: FCC_Band_Host {
            @display("p=51,351;i=device/hub");
        }
        fcc_Bandn_Host32: FCC_Band_Host {
            @display("p=130,351;i=device/hub");
        }
        fcc_Bandn_Host33: FCC_Band_Host {
            @display("p=208,351;i=device/hub");
        }
        fcc_Bandn_Host34: FCC_Band_Host {
            @display("p=284,351;i=device/hub");
        }
        fcc_Bandn_Host35: FCC_Band_Host {
            @display("p=359,351;i=device/hub");
        }
        fcc_Bandn_Host36: FCC_Band_Host {
            @display("p=434,351;i=device/hub");
        }
        fcc_Bandn_Host37: FCC_Band_Host {
            @display("p=506,351;i=device/hub");
        }
        fcc_Bandn_Host38: FCC_Band_Host {
            @display("p=578,351;i=device/hub");
        }
        fcc_Bandn_Host39: FCC_Band_Host {
            @display("p=650,351;i=device/hub");
        }
        fcc_Bandn_Host40: FCC_Band_Host {
            @display("p=725,351;i=device/hub");
        }
        fcc_Bandn_Host41: FCC_Band_Host {
            @display("p=51,425;i=device/hub");
        }
        fcc_Bandn_Host42: FCC_Band_Host {
            @display("p=130,425;i=device/hub");
        }
        fcc_Bandn_Host43: FCC_Band_Host {
            @display("p=208,425;i=device/hub");
        }
        fcc_Bandn_Host44: FCC_Band_Host {
            @display("p=284,425;i=device/hub");
        }
        fcc_Bandn_Host45: FCC_Band_Host {
            @display("p=359,425;i=device/hub");
        }
        fcc_Bandn_Host46: FCC_Band_Host {
            @display("p=434,425;i=device/hub");
        }
        fcc_Bandn_Host47: FCC_Band_Host {
            @display("p=506,425;i=device/hub");
        }
        fcc_Bandn_Host48: FCC_Band_Host {
            @display("p=578,425;i=device/hub");
        }
        fcc_Bandn_Host49: FCC_Band_Host {
            @display("p=650,425;i=device/hub");
        }
        fcc_Bandn_Host50: FCC_Band_Host {
            @display("p=725,425;i=device/hub");
        }
        flatNetworkConfigurator: FlatNetworkConfigurator {
            @display("p=661,601");
        }
    connections allowunconnected:
        fcc_Bandn_Host5.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host1.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host2.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host3.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host4.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host6.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host8.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host7.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host9.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host10.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;

        fcc_Bandn_Host15.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host11.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host12.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host13.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host14.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host16.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host18.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host17.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host19.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host20.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;

        fcc_Bandn_Host25.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host21.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host22.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host23.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host24.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host26.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host28.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host27.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host29.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host30.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;

        fcc_Bandn_Host35.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host31.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host32.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host33.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host34.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host36.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host38.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host37.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host39.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host40.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;

        fcc_Bandn_Host45.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host41.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host42.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host43.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host44.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host46.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host48.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host47.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host49.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
        fcc_Bandn_Host50.ethg++ <--> ChannelA <--> fcc_Band_CCo.ethg++;
}
