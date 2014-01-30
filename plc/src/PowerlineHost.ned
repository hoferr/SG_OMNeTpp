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

import inet.nodes.inet.StandardHost;


module PowerlineHost extends StandardHost
{
    gates:
		inout plcg[];
    submodules:
        plc[sizeof(plcg)]: Internal_PLC_Modem {
            parameters:
                @display("p=308,406,row,90;q=txQueue");
        }
    connections allowunconnected:
        for i=0..sizeof(plcg)-1 {
            plcg[i] <--> plc[i].phys;
            plc[i].upperLayerOut --> networkLayer.ifIn++;
            plc[i].upperLayerIn <-- networkLayer.ifOut++;
        }
}
