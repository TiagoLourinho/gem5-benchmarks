int main()
{
    unsigned int rand = 11;
    int x;
    void *label_group_0[10], *label_group_1[10], *label_group_2[10], *label_group_3[10], *label_group_4[10], *label_group_5[10], *label_group_6[10], *label_group_7[10], *label_group_8[10], *label_group_9[10];

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

    label_group_2[0] = &&l_2_0;
    label_group_2[1] = &&l_2_1;
    label_group_2[2] = &&l_2_2;
    label_group_2[3] = &&l_2_3;
    label_group_2[4] = &&l_2_4;
    label_group_2[5] = &&l_2_5;
    label_group_2[6] = &&l_2_6;
    label_group_2[7] = &&l_2_7;
    label_group_2[8] = &&l_2_8;
    label_group_2[9] = &&l_2_9;

    label_group_3[0] = &&l_3_0;
    label_group_3[1] = &&l_3_1;
    label_group_3[2] = &&l_3_2;
    label_group_3[3] = &&l_3_3;
    label_group_3[4] = &&l_3_4;
    label_group_3[5] = &&l_3_5;
    label_group_3[6] = &&l_3_6;
    label_group_3[7] = &&l_3_7;
    label_group_3[8] = &&l_3_8;
    label_group_3[9] = &&l_3_9;

    label_group_4[0] = &&l_4_0;
    label_group_4[1] = &&l_4_1;
    label_group_4[2] = &&l_4_2;
    label_group_4[3] = &&l_4_3;
    label_group_4[4] = &&l_4_4;
    label_group_4[5] = &&l_4_5;
    label_group_4[6] = &&l_4_6;
    label_group_4[7] = &&l_4_7;
    label_group_4[8] = &&l_4_8;
    label_group_4[9] = &&l_4_9;

    label_group_5[0] = &&l_5_0;
    label_group_5[1] = &&l_5_1;
    label_group_5[2] = &&l_5_2;
    label_group_5[3] = &&l_5_3;
    label_group_5[4] = &&l_5_4;
    label_group_5[5] = &&l_5_5;
    label_group_5[6] = &&l_5_6;
    label_group_5[7] = &&l_5_7;
    label_group_5[8] = &&l_5_8;
    label_group_5[9] = &&l_5_9;

    label_group_6[0] = &&l_6_0;
    label_group_6[1] = &&l_6_1;
    label_group_6[2] = &&l_6_2;
    label_group_6[3] = &&l_6_3;
    label_group_6[4] = &&l_6_4;
    label_group_6[5] = &&l_6_5;
    label_group_6[6] = &&l_6_6;
    label_group_6[7] = &&l_6_7;
    label_group_6[8] = &&l_6_8;
    label_group_6[9] = &&l_6_9;

    label_group_7[0] = &&l_7_0;
    label_group_7[1] = &&l_7_1;
    label_group_7[2] = &&l_7_2;
    label_group_7[3] = &&l_7_3;
    label_group_7[4] = &&l_7_4;
    label_group_7[5] = &&l_7_5;
    label_group_7[6] = &&l_7_6;
    label_group_7[7] = &&l_7_7;
    label_group_7[8] = &&l_7_8;
    label_group_7[9] = &&l_7_9;

    label_group_8[0] = &&l_8_0;
    label_group_8[1] = &&l_8_1;
    label_group_8[2] = &&l_8_2;
    label_group_8[3] = &&l_8_3;
    label_group_8[4] = &&l_8_4;
    label_group_8[5] = &&l_8_5;
    label_group_8[6] = &&l_8_6;
    label_group_8[7] = &&l_8_7;
    label_group_8[8] = &&l_8_8;
    label_group_8[9] = &&l_8_9;

    label_group_9[0] = &&l_9_0;
    label_group_9[1] = &&l_9_1;
    label_group_9[2] = &&l_9_2;
    label_group_9[3] = &&l_9_3;
    label_group_9[4] = &&l_9_4;
    label_group_9[5] = &&l_9_5;
    label_group_9[6] = &&l_9_6;
    label_group_9[7] = &&l_9_7;
    label_group_9[8] = &&l_9_8;
    label_group_9[9] = &&l_9_9;

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

        //////////// BASIC BLOCK START ///////////

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_2[rand % 10];

    l_2_0:
        x = 0;
    l_2_1:
        x = 1;
    l_2_2:
        x = 2;
    l_2_3:
        x = 3;
    l_2_4:
        x = 4;
    l_2_5:
        x = 5;
    l_2_6:
        x = 6;
    l_2_7:
        x = 7;
    l_2_8:
        x = 8;
    l_2_9:
        x = 9;
        //////////////////////////////////////////

        //////////// BASIC BLOCK START ///////////

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_3[rand % 10];

    l_3_0:
        x = 0;
    l_3_1:
        x = 1;
    l_3_2:
        x = 2;
    l_3_3:
        x = 3;
    l_3_4:
        x = 4;
    l_3_5:
        x = 5;
    l_3_6:
        x = 6;
    l_3_7:
        x = 7;
    l_3_8:
        x = 8;
    l_3_9:
        x = 9;
        //////////////////////////////////////////

        //////////// BASIC BLOCK START ///////////

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_4[rand % 10];

    l_4_0:
        x = 0;
    l_4_1:
        x = 1;
    l_4_2:
        x = 2;
    l_4_3:
        x = 3;
    l_4_4:
        x = 4;
    l_4_5:
        x = 5;
    l_4_6:
        x = 6;
    l_4_7:
        x = 7;
    l_4_8:
        x = 8;
    l_4_9:
        x = 9;
        //////////////////////////////////////////

        //////////// BASIC BLOCK START ///////////

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_5[rand % 10];

    l_5_0:
        x = 0;
    l_5_1:
        x = 1;
    l_5_2:
        x = 2;
    l_5_3:
        x = 3;
    l_5_4:
        x = 4;
    l_5_5:
        x = 5;
    l_5_6:
        x = 6;
    l_5_7:
        x = 7;
    l_5_8:
        x = 8;
    l_5_9:
        x = 9;
        //////////////////////////////////////////

        //////////// BASIC BLOCK START ///////////

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_6[rand % 10];

    l_6_0:
        x = 0;
    l_6_1:
        x = 1;
    l_6_2:
        x = 2;
    l_6_3:
        x = 3;
    l_6_4:
        x = 4;
    l_6_5:
        x = 5;
    l_6_6:
        x = 6;
    l_6_7:
        x = 7;
    l_6_8:
        x = 8;
    l_6_9:
        x = 9;
        //////////////////////////////////////////

        //////////// BASIC BLOCK START ///////////

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_7[rand % 10];

    l_7_0:
        x = 0;
    l_7_1:
        x = 1;
    l_7_2:
        x = 2;
    l_7_3:
        x = 3;
    l_7_4:
        x = 4;
    l_7_5:
        x = 5;
    l_7_6:
        x = 6;
    l_7_7:
        x = 7;
    l_7_8:
        x = 8;
    l_7_9:
        x = 9;
        //////////////////////////////////////////

        //////////// BASIC BLOCK START ///////////

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_8[rand % 10];

    l_8_0:
        x = 0;
    l_8_1:
        x = 1;
    l_8_2:
        x = 2;
    l_8_3:
        x = 3;
    l_8_4:
        x = 4;
    l_8_5:
        x = 5;
    l_8_6:
        x = 6;
    l_8_7:
        x = 7;
    l_8_8:
        x = 8;
    l_8_9:
        x = 9;
        //////////////////////////////////////////

        //////////// BASIC BLOCK START ///////////

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_9[rand % 10];

    l_9_0:
        x = 0;
    l_9_1:
        x = 1;
    l_9_2:
        x = 2;
    l_9_3:
        x = 3;
    l_9_4:
        x = 4;
    l_9_5:
        x = 5;
    l_9_6:
        x = 6;
    l_9_7:
        x = 7;
    l_9_8:
        x = 8;
    l_9_9:
        x = 9;
        //////////////////////////////////////////
    }
}