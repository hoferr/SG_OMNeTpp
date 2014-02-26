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

channel Ghn_InHouse_Channel_v2
{
    @class(PowerlineChannel_v2);

    int typeOfChannel = 1;

    int BPLCdelay64 = 203;
    int BPLCdelay128 = 199;
    int BPLCdelay256 = 194;
    int BPLCdelay512 = 183;
    int BPLCdelay1024 = 161;
    
    // The next five values are just placeholders - the results from the
    // detailed simulation are very unplausible - suspect is an arithmetical
    // overflow when the transmission speed gets too high. 
    
    int BPLCdelay64_MAX = 150;
    int BPLCdelay128_MAX = 150;
    int BPLCdelay256_MAX = 150;
    int BPLCdelay512_MAX = 150;
    int BPLCdelay1024_MAX = 150;
    
    int BPLCdelay64_ROBO = 532;
    int BPLCdelay128_ROBO = 540;
    int BPLCdelay256_ROBO = 624;
    int BPLCdelay512_ROBO = 792;
    int BPLCdelay1024_ROBO = 1129;

    double myPER = default(0);

    double delay = 0;
    double datarate = 0.0;
    double ber = 0;
    double per = 0;
    bool disabled = false;
    @display("ls=red,,s;t=Ghn_InHouse_Channel,t");
}