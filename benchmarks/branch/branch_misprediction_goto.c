int main()
{
    unsigned int rand = 11;
    int x;
    void *label_group_0[5], *label_group_1[5], *label_group_2[5], *label_group_3[5], *label_group_4[5];

    // Store the labels of the goto destinations into the arrays
    label_group_0[0] = &&l_0_0;
    label_group_0[1] = &&l_0_1;
    label_group_0[2] = &&l_0_2;
    label_group_0[3] = &&l_0_3;
    label_group_0[4] = &&l_0_4;

    label_group_1[0] = &&l_1_0;
    label_group_1[1] = &&l_1_1;
    label_group_1[2] = &&l_1_2;
    label_group_1[3] = &&l_1_3;
    label_group_1[4] = &&l_1_4;

    label_group_2[0] = &&l_2_0;
    label_group_2[1] = &&l_2_1;
    label_group_2[2] = &&l_2_2;
    label_group_2[3] = &&l_2_3;
    label_group_2[4] = &&l_2_4;

    label_group_3[0] = &&l_3_0;
    label_group_3[1] = &&l_3_1;
    label_group_3[2] = &&l_3_2;
    label_group_3[3] = &&l_3_3;
    label_group_3[4] = &&l_3_4;

    label_group_4[0] = &&l_4_0;
    label_group_4[1] = &&l_4_1;
    label_group_4[2] = &&l_4_2;
    label_group_4[3] = &&l_4_3;
    label_group_4[4] = &&l_4_4;

    // Generate a random number and jump to one of the labels
    // Repeat the same "basic block" some times to reduce the influence of the loop
    for (int i = 0; i < 100000; i++)
    {

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_0[rand % 5];

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

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_1[rand % 5];

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

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_2[rand % 5];

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

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_3[rand % 5];

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

        rand ^= rand << 13;
        rand ^= rand >> 17;
        rand ^= rand << 5;

        goto *label_group_4[rand % 5];

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
    }
}