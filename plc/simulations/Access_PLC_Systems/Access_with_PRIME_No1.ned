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
import Market_Technologies.Access_PLC.PRIME_Host_CCo;
import Market_Technologies.Access_PLC.PRIME_Host;


network Access_with_PRIME_No1
{
    @display("i=block/network;bgb=793,657");
    types:
        channel ChannelA extends ned.DelayChannel
        {
            delay = 50ns; // 10m cable between households
        }
    submodules:
        prime_CCo: PRIME_Host_CCo {
            @display("p=725,541;i=device/router");
        }
        primen_Host5: PRIME_Host {
            @display("p=359,142;i=device/hub");
        }
        primen_Host1: PRIME_Host {
            @display("p=51,142;i=device/hub");
        }
        primen_Host2: PRIME_Host {
            @display("p=130,142;i=device/hub");
        }
        primen_Host3: PRIME_Host {
            @display("p=208,142;i=device/hub");
        }
        primen_Host4: PRIME_Host {
            @display("p=284,142;i=device/hub");
        }
        dataCollector: DataCollector {
            @display("p=399,600");
        }
        primen_Host6: PRIME_Host {
            @display("p=434,142;i=device/hub");
        }
        primen_Host7: PRIME_Host {
            @display("p=506,142;i=device/hub");
        }
        primen_Host8: PRIME_Host {
            @display("p=578,142;i=device/hub");
        }
        primen_Host10: PRIME_Host {
            @display("p=725,142;i=device/hub");
        }
        primen_Host9: PRIME_Host {
            @display("p=650,142;i=device/hub");
        }
        primen_Host11: PRIME_Host {
            @display("p=51,209;i=device/hub");
        }
        primen_Host12: PRIME_Host {
            @display("p=130,209;i=device/hub");
        }
        primen_Host13: PRIME_Host {
            @display("p=208,209;i=device/hub;i=device/hub");
        }
        primen_Host14: PRIME_Host {
            @display("p=284,209;i=device/hub");
        }
        primen_Host15: PRIME_Host {
            @display("p=359,209;i=device/hub");
        }
        primen_Host16: PRIME_Host {
            @display("p=434,209;i=device/hub");
        }
        primen_Host17: PRIME_Host {
            @display("p=506,209;i=device/hub");
        }
        primen_Host18: PRIME_Host {
            @display("p=578,209;i=device/hub");
        }
        primen_Host19: PRIME_Host {
            @display("p=650,209;i=device/hub");
        }
        primen_Host20: PRIME_Host {
            @display("p=725,209;i=device/hub");
        }
        primen_Host21: PRIME_Host {
            @display("p=51,284;i=device/hub");
        }
        primen_Host22: PRIME_Host {
            @display("p=130,284;i=device/hub");
        }
        primen_Host23: PRIME_Host {
            @display("p=208,284;i=device/hub");
        }
        primen_Host24: PRIME_Host {
            @display("p=284,284;i=device/hub");
        }
        primen_Host25: PRIME_Host {
            @display("p=359,284;i=device/hub");
        }
        primen_Host26: PRIME_Host {
            @display("p=434,284;i=device/hub");
        }
        primen_Host27: PRIME_Host {
            @display("p=506,284;i=device/hub");
        }
        primen_Host28: PRIME_Host {
            @display("p=578,284;i=device/hub");
        }
        primen_Host29: PRIME_Host {
            @display("p=650,284;i=device/hub");
        }
        primen_Host30: PRIME_Host {
            @display("p=725,284;i=device/hub");
        }
        primen_Host31: PRIME_Host {
            @display("p=51,351;i=device/hub");
        }
        primen_Host32: PRIME_Host {
            @display("p=130,351;i=device/hub");
        }
        primen_Host33: PRIME_Host {
            @display("p=208,351;i=device/hub");
        }
        primen_Host34: PRIME_Host {
            @display("p=284,351;i=device/hub");
        }
        primen_Host35: PRIME_Host {
            @display("p=359,351;i=device/hub");
        }
        primen_Host36: PRIME_Host {
            @display("p=434,351;i=device/hub");
        }
        primen_Host37: PRIME_Host {
            @display("p=506,351;i=device/hub");
        }
        primen_Host38: PRIME_Host {
            @display("p=578,351;i=device/hub");
        }
        primen_Host39: PRIME_Host {
            @display("p=650,351;i=device/hub");
        }
        primen_Host40: PRIME_Host {
            @display("p=725,351;i=device/hub");
        }
        primen_Host41: PRIME_Host {
            @display("p=51,425;i=device/hub");
        }
        primen_Host42: PRIME_Host {
            @display("p=130,425;i=device/hub");
        }
        primen_Host43: PRIME_Host {
            @display("p=208,425;i=device/hub");
        }
        primen_Host44: PRIME_Host {
            @display("p=284,425;i=device/hub");
        }
        primen_Host45: PRIME_Host {
            @display("p=359,425;i=device/hub");
        }
        primen_Host46: PRIME_Host {
            @display("p=434,425;i=device/hub");
        }
        primen_Host47: PRIME_Host {
            @display("p=506,425;i=device/hub");
        }
        primen_Host48: PRIME_Host {
            @display("p=578,425;i=device/hub");
        }
        primen_Host49: PRIME_Host {
            @display("p=650,425;i=device/hub");
        }
        primen_Host50: PRIME_Host {
            @display("p=725,425;i=device/hub");
        }
        flatNetworkConfigurator: FlatNetworkConfigurator {
            @display("p=505,589");
        }
    connections allowunconnected:
        primen_Host5.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host1.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host2.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host3.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host4.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host6.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host8.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host7.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host9.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host10.ethg++ <--> ChannelA <--> prime_CCo.ethg++;

        primen_Host15.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host11.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host12.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host13.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host14.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host16.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host18.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host17.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host19.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host20.ethg++ <--> ChannelA <--> prime_CCo.ethg++;

        primen_Host25.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host21.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host22.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host23.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host24.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host26.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host28.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host27.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host29.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host30.ethg++ <--> ChannelA <--> prime_CCo.ethg++;

        primen_Host35.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host31.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host32.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host33.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host34.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host36.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host38.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host37.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host39.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host40.ethg++ <--> ChannelA <--> prime_CCo.ethg++;

        primen_Host45.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host41.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host42.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host43.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host44.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host46.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host48.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host47.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host49.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
        primen_Host50.ethg++ <--> ChannelA <--> prime_CCo.ethg++;
}
