package litrafficgenerator.simulations;

import litrafficgenerator.Waeschetrockner;
import litrafficgenerator.Geschirrspueler;
import litrafficgenerator.Waschmaschine;
import litrafficgenerator.microKWK;
import litrafficgenerator.IKT_GW2;

network TGenTest
{
    @display("bgb=467,433;bgi=abstract/people2,c;i=misc/house");

    submodules:
        uKWK: microKWK {
            @display("p=71,349");
        }
        ikt_GW2_4: IKT_GW2 {
            @display("p=391,348");
            active = true;
        }
        ikt_GW2_1: IKT_GW2 {
            @display("p=391,67");
        }
        WaschMaschine: Waschmaschine {
            @display("p=72,68");
        }
        GeschirrSpueler: Geschirrspueler {
            @display("p=72,138");
        }
        ikt_GW2_2: IKT_GW2 {
            @display("p=391,137");
        }
        ikt_GW2_3: IKT_GW2 {
            @display("p=391,271");
        }
        WaescheTrockner: Waeschetrockner {
            @display("p=72,272");
        }
    connections allowunconnected:
        ikt_GW2_4.out --> {  datarate = 3000bps; } --> uKWK.in;
        uKWK.out --> {  datarate = 3000bps; } --> ikt_GW2_4.in;
        WaschMaschine.out --> {  datarate = 3000bps; } --> ikt_GW2_1.in;
        ikt_GW2_1.out --> {  datarate = 3000bps; } --> WaschMaschine.in;
        GeschirrSpueler.out --> {  datarate = 3000bps; } --> ikt_GW2_2.in;
        ikt_GW2_2.out --> {  datarate = 3000bps; } --> GeschirrSpueler.in;
        ikt_GW2_3.out --> {  datarate = 3000bps; } --> WaescheTrockner.in;
        WaescheTrockner.out --> {  datarate = 3000bps; } --> ikt_GW2_3.in;
}
