#define INT_SIZE 4            // bytes
#define L2_SIZE 256 * 1024    // bytes
#define ARRAY_SIZE 256 * 1024 // bytes
#define CACHE_LINE 64         // bytes
#define ITER 1000000          // N

int main()
{
    int A[ARRAY_SIZE / INT_SIZE], B[ARRAY_SIZE / INT_SIZE], k = 0, v = 0, w = 0;

    for (register int j = 0; j < ITER; j += CACHE_LINE / INT_SIZE)
    {
        B[j % (ARRAY_SIZE / INT_SIZE)] = A[j % (ARRAY_SIZE / INT_SIZE)];

        // Repeat the same "basic block" to produce hits in the L1 data cache

        k = k + 1;
        k = w - 1;
        k = k * w;
        w = v + 1;
        v = w + k;
        v++;
        w--;
        k = 1;
        v = 1;
        w = 1;
        k = k * v * w;
        w = (v - 2) % 2;

        k = k + 1;
        k = w - 1;
        k = k * w;
        w = v + 1;
        v = w + k;
        v++;
        w--;
        k = 1;
        v = 1;
        w = 1;
        k = k * v * w;
        w = (v - 2) % 2;

        k = k + 1;
        k = w - 1;
        k = k * w;
        w = v + 1;
        v = w + k;
        v++;
        w--;
        k = 1;
        v = 1;
        w = 1;
        k = k * v * w;
        w = (v - 2) % 2;

        k = k + 1;
        k = w - 1;
        k = k * w;
        w = v + 1;
        v = w + k;
        v++;
        w--;
        k = 1;
        v = 1;
        w = 1;
        k = k * v * w;
        w = (v - 2) % 2;
    }

    return 0;
}
