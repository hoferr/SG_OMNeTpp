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
import inet.networklayer.autorouting.NetworkConfigurator;
import plc.Generic_Technologies.Generic_Access_PLC_CCo;
import plc.Generic_Technologies.Generic_Access_PLC;


network Generic_Access_PLC_No1
{
    @display("i=block/network;bgb=793,657");
    types:
        channel ChannelA extends ned.DelayChannel
        {
            delay = 50ns; // 10m cable between households
        }
    submodules:
        generic_Access_PLC_CCo: Generic_Access_PLC_CCo {
            @display("p=725,541;i=device/router");
        }
        generic_Access_PLCn5: Generic_Access_PLC {
            @display("p=359,142;i=device/hub");
        }
        generic_Access_PLCn1: Generic_Access_PLC {
            @display("p=51,142;i=device/hub");
        }
        generic_Access_PLCn2: Generic_Access_PLC {
            @display("p=130,142;i=device/hub");
        }
        generic_Access_PLCn3: Generic_Access_PLC {
            @display("p=208,142;i=device/hub");
        }
        generic_Access_PLCn4: Generic_Access_PLC {
            @display("p=284,142;i=device/hub");
        }
        channelInstaller: ChannelInstaller {
            channelClass = "ThruputMeteringChannel";
            channelAttrs = "format=#N";
            @display("p=264,600");
        }
        dataCollector: DataCollector {
            @display("p=399,600");
        }
        networkConfigurator: NetworkConfigurator {
            @display("p=536,600");
        }
        generic_Access_PLCn6: Generic_Access_PLC {
            @display("p=434,142;i=device/hub");
        }
        generic_Access_PLCn7: Generic_Access_PLC {
            @display("p=506,142;i=device/hub");
        }
        generic_Access_PLCn8: Generic_Access_PLC {
            @display("p=578,142;i=device/hub");
        }
        generic_Access_PLCn10: Generic_Access_PLC {
            @display("p=725,142;i=device/hub");
        }
        generic_Access_PLCn9: Generic_Access_PLC {
            @display("p=650,142;i=device/hub");
        }
        generic_Access_PLCn11: Generic_Access_PLC {
            @display("p=51,209;i=device/hub");
        }
        generic_Access_PLCn12: Generic_Access_PLC {
            @display("p=130,209;i=device/hub");
        }
        generic_Access_PLCn13: Generic_Access_PLC {
            @display("p=208,209;i=device/hub;i=device/hub");
        }
        generic_Access_PLCn14: Generic_Access_PLC {
            @display("p=284,209;i=device/hub");
        }
        generic_Access_PLCn15: Generic_Access_PLC {
            @display("p=359,209;i=device/hub");
        }
        generic_Access_PLCn16: Generic_Access_PLC {
            @display("p=434,209;i=device/hub");
        }
        generic_Access_PLCn17: Generic_Access_PLC {
            @display("p=506,209;i=device/hub");
        }
        generic_Access_PLCn18: Generic_Access_PLC {
            @display("p=578,209;i=device/hub");
        }
        generic_Access_PLCn19: Generic_Access_PLC {
            @display("p=650,209;i=device/hub");
        }
        generic_Access_PLCn20: Generic_Access_PLC {
            @display("p=725,209;i=device/hub");
        }
        generic_Access_PLCn21: Generic_Access_PLC {
            @display("p=51,284;i=device/hub");
        }
        generic_Access_PLCn22: Generic_Access_PLC {
            @display("p=130,284;i=device/hub");
        }
        generic_Access_PLCn23: Generic_Access_PLC {
            @display("p=208,284;i=device/hub");
        }
        generic_Access_PLCn24: Generic_Access_PLC {
            @display("p=284,284;i=device/hub");
        }
        generic_Access_PLCn25: Generic_Access_PLC {
            @display("p=359,284;i=device/hub");
        }
        generic_Access_PLCn26: Generic_Access_PLC {
            @display("p=434,284;i=device/hub");
        }
        generic_Access_PLCn27: Generic_Access_PLC {
            @display("p=506,284;i=device/hub");
        }
        generic_Access_PLCn28: Generic_Access_PLC {
            @display("p=578,284;i=device/hub");
        }
        generic_Access_PLCn29: Generic_Access_PLC {
            @display("p=650,284;i=device/hub");
        }
        generic_Access_PLCn30: Generic_Access_PLC {
            @display("p=725,284;i=device/hub");
        }
        generic_Access_PLCn31: Generic_Access_PLC {
            @display("p=51,351;i=device/hub");
        }
        generic_Access_PLCn32: Generic_Access_PLC {
            @display("p=130,351;i=device/hub");
        }
        generic_Access_PLCn33: Generic_Access_PLC {
            @display("p=208,351;i=device/hub");
        }
        generic_Access_PLCn34: Generic_Access_PLC {
            @display("p=284,351;i=device/hub");
        }
        generic_Access_PLCn35: Generic_Access_PLC {
            @display("p=359,351;i=device/hub");
        }
        generic_Access_PLCn36: Generic_Access_PLC {
            @display("p=434,351;i=device/hub");
        }
        generic_Access_PLCn37: Generic_Access_PLC {
            @display("p=506,351;i=device/hub");
        }
        generic_Access_PLCn38: Generic_Access_PLC {
            @display("p=578,351;i=device/hub");
        }
        generic_Access_PLCn39: Generic_Access_PLC {
            @display("p=650,351;i=device/hub");
        }
        generic_Access_PLCn40: Generic_Access_PLC {
            @display("p=725,351;i=device/hub");
        }
        generic_Access_PLCn41: Generic_Access_PLC {
            @display("p=51,425;i=device/hub");
        }
        generic_Access_PLCn42: Generic_Access_PLC {
            @display("p=130,425;i=device/hub");
        }
        generic_Access_PLCn43: Generic_Access_PLC {
            @display("p=208,425;i=device/hub");
        }
        generic_Access_PLCn44: Generic_Access_PLC {
            @display("p=284,425;i=device/hub");
        }
        generic_Access_PLCn45: Generic_Access_PLC {
            @display("p=359,425;i=device/hub");
        }
        generic_Access_PLCn46: Generic_Access_PLC {
            @display("p=434,425;i=device/hub");
        }
        generic_Access_PLCn47: Generic_Access_PLC {
            @display("p=506,425;i=device/hub");
        }
        generic_Access_PLCn48: Generic_Access_PLC {
            @display("p=578,425;i=device/hub");
        }
        generic_Access_PLCn49: Generic_Access_PLC {
            @display("p=650,425;i=device/hub");
        }
        generic_Access_PLCn50: Generic_Access_PLC {
            @display("p=725,425;i=device/hub");
        }
    connections allowunconnected:
        generic_Access_PLCn5.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn1.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn2.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn3.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn4.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn6.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn8.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn7.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn9.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn10.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;

        generic_Access_PLCn15.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn11.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn12.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn13.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn14.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn16.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn18.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn17.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn19.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn20.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;

        generic_Access_PLCn25.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn21.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn22.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn23.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn24.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn26.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn28.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn27.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn29.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn30.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;

        generic_Access_PLCn35.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn31.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn32.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn33.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn34.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn36.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn38.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn37.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn39.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn40.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;

        generic_Access_PLCn45.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn41.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn42.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn43.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn44.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn46.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn48.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn47.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn49.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
        generic_Access_PLCn50.ethg++ <--> ChannelA <--> generic_Access_PLC_CCo.ethg++;
}
