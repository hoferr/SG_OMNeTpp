package libpowerlinechannel.simulations;

import libpowerlinechannel.SimpleSource;
import libpowerlinechannel.SimpleSink;
import dLAN200_Channel;
import Siemens_Access_BPLC_Channel;
import Slow_Siemens_Access_BPLC_Channel;
import PRIME_Channel;
import Microlink_Channel;
import HomePlugAV1o1_Channel;
import Ghn_InHouse_Channel;
import Ghn_AMI_Channel;
import G3_Channel;
import FCC_Band_Channel;
import DS2_Channel;
import CENELEC_A_Channel;
import CENELEC_ABC_Channel;


network TestingTheChannel
{
    @display("bgb=907,616");
    submodules:
        simpleSink1: SimpleSink {
            @display("p=386,47");
        }
        simpleSource1: SimpleSource {
            @display("p=61,47");
            typeOfSource = 0;
        }
        simpleSink2: SimpleSink {
            @display("p=386,110");
        }
        simpleSource2: SimpleSource {
            @display("p=61,110");
            typeOfSource = 0;
        }
        simpleSink3: SimpleSink {
            @display("p=386,175");
        }
        simpleSource3: SimpleSource {
            @display("p=61,175");
            typeOfSource = 0;
        }
        simpleSink4: SimpleSink {
            @display("p=386,239");
        }
        simpleSource4: SimpleSource {
            @display("p=61,239");
            typeOfSource = 0;
        }
        simpleSink5: SimpleSink {
            @display("p=386,303");
        }
        simpleSource5: SimpleSource {
            @display("p=61,303");
            typeOfSource = 0;
        }
        simpleSink6: SimpleSink {
            @display("p=819,47");
        }
        simpleSource6: SimpleSource {
            @display("p=494,47");
        }
        simpleSink7: SimpleSink {
            @display("p=819,110");
        }
        simpleSource7: SimpleSource {
            @display("p=494,110");
        }
        simpleSink8: SimpleSink {
            @display("p=819,175");
        }
        simpleSource8: SimpleSource {
            @display("p=494,175");
        }
        simpleSink9: SimpleSink {
            @display("p=819,239");
        }
        simpleSource9: SimpleSource {
            @display("p=494,239");
        }
        simpleSink10: SimpleSink {
            @display("p=819,303");
        }
        simpleSource10: SimpleSource {
            @display("p=494,303");
        }
        simpleSink11: SimpleSink {
            @display("p=819,411");
        }
        simpleSource11: SimpleSource {
            @display("p=61,411");
        }
        simpleSink12: SimpleSink {
            @display("p=819,473");
        }
        simpleSource12: SimpleSource {
            @display("p=61,473");
        }
        simpleSource13: SimpleSource {
            @display("p=61,540");
        }
        simpleSink13: SimpleSink {
            @display("p=819,540");
        }
    connections:
        simpleSource1.out --> PRIME_Channel --> simpleSink1.in;
        simpleSource2.out --> CENELEC_A_Channel --> simpleSink2.in;
        simpleSource3.out --> G3_Channel --> simpleSink3.in;
        simpleSource4.out --> CENELEC_ABC_Channel --> simpleSink4.in;
        simpleSource5.out --> FCC_Band_Channel --> simpleSink5.in;
        simpleSource6.out --> dLAN200_Channel --> simpleSink6.in;
        simpleSource7.out --> DS2_Channel --> simpleSink7.in;
        simpleSource8.out --> HomePlugAV1o1_Channel --> simpleSink8.in;
        simpleSource9.out --> Microlink_Channel --> simpleSink9.in;
        simpleSource10.out --> Ghn_InHouse_Channel --> simpleSink10.in;
        simpleSource11.out --> Ghn_AMI_Channel --> simpleSink11.in;
        simpleSource12.out --> Siemens_Access_BPLC_Channel --> simpleSink12.in;
        simpleSource13.out --> Slow_Siemens_Access_BPLC_Channel --> simpleSink13.in;
}
