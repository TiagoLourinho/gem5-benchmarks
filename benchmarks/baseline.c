
int main()
{
    int i1, i2, i3, i4, i5; // FUList0 - 6 (IntAlu) (minus 1 to account for the update of the loop control variable)
    float f1, f2;           // FUList3 - 6 (FloatMisc)

    // Repeat the same "basic block" of code sometimes
    // to reduce the instructions wrongly fetched in the branch (8 contiguous instructions)
    for (int j = 0; j < 1000000; j++)
    {
        i1 = 1;
        i2 = 1;
        i3 = 1;
        i4 = 1;
        i5 = 1;
        f1 = 1.1;
        f2 = 1.1;

        i1 = 1;
        i2 = 1;
        i3 = 1;
        i4 = 1;
        i5 = 1;
        f1 = 1.1;
        f2 = 1.1;

        i1 = 1;
        i2 = 1;
        i3 = 1;
        i4 = 1;
        i5 = 1;
        f1 = 1.1;
        f2 = 1.1;

        i1 = 1;
        i2 = 1;
        i3 = 1;
        i4 = 1;
        i5 = 1;
        f1 = 1.1;
        f2 = 1.1;

        i1 = 1;
        i2 = 1;
        i3 = 1;
        i4 = 1;
        i5 = 1;
        f1 = 1.1;
        f2 = 1.1;

        i1 = 1;
        i2 = 1;
        i3 = 1;
        i4 = 1;
        i5 = 1;
        f1 = 1.1;
        f2 = 1.1;

        i1 = 1;
        i2 = 1;
        i3 = 1;
        i4 = 1;
        i5 = 1;
        f1 = 1.1;
        f2 = 1.1;

        i1 = 1;
        i2 = 1;
        i3 = 1;
        i4 = 1;
        i5 = 1;
        f1 = 1.1;
        f2 = 1.1;
    }

    return 0;
}