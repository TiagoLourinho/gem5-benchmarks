#define INT_SIZE 4           // B
#define L1_SIZE 64 * 1024    // B
#define SIZE_ARRAY 70 * 1024 // B
#define CACHE_LINE 64        // B
#define ITER 100000000       // N

int main()
{
    int A[SIZE_ARRAY / INT_SIZE];
    register int x = 0;

    for (register int j = 0; j < ITER; j += CACHE_LINE / INT_SIZE)
    {
        x = A[j % (SIZE_ARRAY / INT_SIZE)];
    }

    return 0;
}