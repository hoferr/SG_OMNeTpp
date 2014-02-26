package libpowerlinechannel_v2.simulations;

import libpowerlinechannel_v2.SimpleSource_v2;
import libpowerlinechannel_v2.SimpleSink_v2;
import dLAN200_Channel_v2;
import Siemens_Access_BPLC_Channel_v2;
import Slow_Siemens_Access_BPLC_Channel_v2;
import PRIME_Channel_v2;
import Microlink_Channel_v2;
import HomePlugAV1o1_Channel_v2;
import Ghn_InHouse_Channel_v2;
import Ghn_AMI_Channel_v2;
import G3_Channel_v2;
import FCC_Band_Channel_v2;
import DS2_Channel_v2;
import CENELEC_A_Channel_v2;
import CENELEC_ABC_Channel_v2;

network TestingTheChannel_v2
{
    @display("bgb=907,609");
    submodules:
        simpleSink1: SimpleSink_v2 {
            @display("p=386,47");
        }
        simpleSource1: SimpleSource_v2 {
            @display("p=61,47");
            typeOfSource = 0;
        }
        simpleSink2: SimpleSink_v2 {
            @display("p=386,110");
        }
        simpleSource2: SimpleSource_v2 {
            @display("p=61,110");
            typeOfSource = 0;
        }
        simpleSink3: SimpleSink_v2 {
            @display("p=386,175");
        }
        simpleSource3: SimpleSource_v2 {
            @display("p=61,175");
            typeOfSource = 0;
        }
        simpleSink4: SimpleSink_v2 {
            @display("p=386,239");
        }
        simpleSource4: SimpleSource_v2 {
            @display("p=61,239");
            typeOfSource = 0;
        }
        simpleSink5: SimpleSink_v2 {
            @display("p=386,303");
        }
        simpleSource5: SimpleSource_v2 {
            @display("p=61,303");
            typeOfSource = 0;
        }
        simpleSink6: SimpleSink_v2 {
            @display("p=819,47");
        }
        simpleSource6: SimpleSource_v2 {
            @display("p=494,47");
        }
        simpleSink7: SimpleSink_v2 {
            @display("p=819,110");
        }
        simpleSource7: SimpleSource_v2 {
            @display("p=494,110");
        }
        simpleSink8: SimpleSink_v2 {
            @display("p=819,175");
        }
        simpleSource8: SimpleSource_v2 {
            @display("p=494,175");
        }
        simpleSink9: SimpleSink_v2 {
            @display("p=819,239");
        }
        simpleSource9: SimpleSource_v2 {
            @display("p=494,239");
        }
        simpleSink10: SimpleSink_v2 {
            @display("p=819,303");
        }
        simpleSource10: SimpleSource_v2 {
            @display("p=494,303");
        }
        simpleSink11: SimpleSink_v2 {
            @display("p=819,411");
        }
        simpleSource11: SimpleSource_v2 {
            @display("p=61,411");
        }
        simpleSink12: SimpleSink_v2 {
            @display("p=819,473");
        }
        simpleSource12: SimpleSource_v2 {
            @display("p=61,473");
        }
        simpleSource13: SimpleSource_v2 {
            @display("p=61,539");
        }
        simpleSink13: SimpleSink_v2 {
            @display("p=819,539");
        }
    connections:
        simpleSource1.out --> PRIME_Channel_v2 --> simpleSink1.in;
        simpleSource2.out --> CENELEC_A_Channel_v2 --> simpleSink2.in;
        simpleSource3.out --> G3_Channel_v2 --> simpleSink3.in;
        simpleSource4.out --> CENELEC_ABC_Channel_v2 --> simpleSink4.in;
        simpleSource5.out --> FCC_Band_Channel_v2 --> simpleSink5.in;
        simpleSource6.out --> dLAN200_Channel_v2 --> simpleSink6.in;
        simpleSource7.out --> DS2_Channel_v2 --> simpleSink7.in;
        simpleSource8.out --> HomePlugAV1o1_Channel_v2 --> simpleSink8.in;
        simpleSource9.out --> Microlink_Channel_v2 --> simpleSink9.in;
        simpleSource10.out --> Ghn_InHouse_Channel_v2 --> simpleSink10.in;
        simpleSource11.out --> Ghn_AMI_Channel_v2 --> simpleSink11.in;
        simpleSource12.out --> Siemens_Access_BPLC_Channel_v2 --> simpleSink12.in;
        simpleSource13.out --> Slow_Siemens_Access_BPLC_Channel_v2 --> simpleSink13.in;
}
