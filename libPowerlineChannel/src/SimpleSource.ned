package libpowerlinechannel;

simple SimpleSource
{
    @display("i=block/source");
    double intervall = default(5.0);
    int typeOfSource = default(1);
    gates:
        output out;
}
