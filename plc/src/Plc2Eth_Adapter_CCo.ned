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

package plc.src;

module Plc2Eth_Adapter_CCo
{
    string queueType = default("DropTailQueue");
    @display("i=device/modem,#0080FF;bgb=234,115");
    gates:
        inout MAC_side;
        inout PLC_side[];
    submodules:
        plcNet: PlcNet {
            @display("p=173,55");
        }
        plc2Eth_Adapter: Plc2Eth_Adapter {
            @display("p=56,54");
        }
    connections allowunconnected:
        for i=0..sizeof(PLC_side)-1 {
            PLC_side++ <--> plcNet.ethg++;
        }
        plc2Eth_Adapter.PLC_side <--> plcNet.ethg++;
        plc2Eth_Adapter.MAC_side <--> MAC_side;
}
