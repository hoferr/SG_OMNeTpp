package libpowerlinechannel_v2;

simple SimpleSource_v2
{
    @display("i=block/source,yellow");
    double intervall = default(5.0);
    int typeOfSource = default(1);
    gates:
        output out;
}
