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

channel Ghn_AMI_Channel_v2
{
    @class(PowerlineChannel_v2);

    int typeOfChannel = 1;

    int BPLCdelay64 = 197;
    int BPLCdelay128 = 193;
    int BPLCdelay256 = 187;
    int BPLCdelay512 = 175;
    int BPLCdelay1024 = 151;
    
    // The next five values are just placeholders - the results from the
    // detailed simulation are very unplausible - suspect is an arithmetical
    // overflow when the transmission speed gets too high. 
    
    int BPLCdelay64_MAX = 150;
    int BPLCdelay128_MAX = 150;
    int BPLCdelay256_MAX = 150;
    int BPLCdelay512_MAX = 150;
    int BPLCdelay1024_MAX = 150;
    
    int BPLCdelay64_ROBO = 528;
    int BPLCdelay128_ROBO = 545;
    int BPLCdelay256_ROBO = 734;
    int BPLCdelay512_ROBO = 1111;
    int BPLCdelay1024_ROBO = 1865;

    double myPER = default(0);

    double delay = 0;
    double datarate = 0.0;
    double ber = 0;
    double per = 0;
    bool disabled = false;
    @display("ls=red,,s;t=Ghn_AMI_Channel,t");
}