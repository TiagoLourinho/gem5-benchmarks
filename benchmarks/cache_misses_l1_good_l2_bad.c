#define INT_SIZE 4           // bytes
#define L1_SIZE 64 * 1024    // bytes
#define SIZE_ARRAY 70 * 1024 // bytes
#define CACHE_LINE 64        // bytes
#define ITER 1000000         // N

int main()
{
    int A[SIZE_ARRAY / INT_SIZE], B[SIZE_ARRAY / INT_SIZE];

    for (register int j = 0; j < ITER; j += CACHE_LINE / INT_SIZE)
    {
        B[j % (SIZE_ARRAY / INT_SIZE)] = A[j % (SIZE_ARRAY / INT_SIZE)];
    }

    return 0;
}