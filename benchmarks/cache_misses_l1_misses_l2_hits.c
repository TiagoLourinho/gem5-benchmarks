#define INT_SIZE 4           // bytes
#define L1_SIZE 64 * 1024    // bytes
#define CACHE_LINE 64        // bytes
#define ITER 1000000         // N

int main()
{
    int A[L1_SIZE / INT_SIZE], B[L1_SIZE / INT_SIZE];

    for (register int j = 0; j < ITER; j += CACHE_LINE / INT_SIZE)
    {
        B[j % (L1_SIZE / INT_SIZE)] = A[j % (L1_SIZE / INT_SIZE)];
    }

    return 0;
}
