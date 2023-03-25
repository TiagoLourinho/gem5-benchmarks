#define ITER 10000

int main()
{
    int x = 1, y = 20, z = 10, k = 3;

    // Generate WAR and WAW hazards and saturate the FU unit that performs IntDiv
    // Repeat the same "basic block" some times to reduce the influence of the loop
    for (int i = 0; i < ITER; i++)
    {
        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;

        y = x / z;
        x = z / y;
        x = k / z;

        x = k / z;
        x = z / y;
        y = x / z;
    }

    return 0;
}
