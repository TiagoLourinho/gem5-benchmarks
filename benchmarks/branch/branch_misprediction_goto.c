int main()
{
    unsigned int rand = 11;
    int x;
    void *label_group_0[10], *label_group_1[10];

    label_group_0[0] = &&l_0_0;
    label_group_0[1] = &&l_0_1;
    label_group_0[2] = &&l_0_2;
    label_group_0[3] = &&l_0_3;
    label_group_0[4] = &&l_0_4;
    label_group_0[5] = &&l_0_5;
    label_group_0[6] = &&l_0_6;
    label_group_0[7] = &&l_0_7;
    label_group_0[8] = &&l_0_8;
    label_group_0[9] = &&l_0_9;

    label_group_1[0] = &&l_1_0;
    label_group_1[1] = &&l_1_1;
    label_group_1[2] = &&l_1_2;
    label_group_1[3] = &&l_1_3;
    label_group_1[4] = &&l_1_4;
    label_group_1[5] = &&l_1_5;
    label_group_1[6] = &&l_1_6;
    label_group_1[7] = &&l_1_7;
    label_group_1[8] = &&l_1_8;
    label_group_1[9] = &&l_1_9;

    for (int i = 0; i < 100000; i++)
    { //////////// BASIC BLOCK START ///////////

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_0[rand % 10];

    l_0_0:
        x = 0;
    l_0_1:
        x = 1;
    l_0_2:
        x = 2;
    l_0_3:
        x = 3;
    l_0_4:
        x = 4;
    l_0_5:
        x = 5;
    l_0_6:
        x = 6;
    l_0_7:
        x = 7;
    l_0_8:
        x = 8;
    l_0_9:
        x = 9;
        //////////////////////////////////////////

        //////////// BASIC BLOCK START ///////////

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_1[rand % 10];

    l_1_0:
        x = 0;
    l_1_1:
        x = 1;
    l_1_2:
        x = 2;
    l_1_3:
        x = 3;
    l_1_4:
        x = 4;
    l_1_5:
        x = 5;
    l_1_6:
        x = 6;
    l_1_7:
        x = 7;
    l_1_8:
        x = 8;
    l_1_9:
        x = 9;
        //////////////////////////////////////////
    }
}