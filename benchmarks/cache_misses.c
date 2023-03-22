int main()
{

    int A[1000000];
    int B[1000000];
    register int j = 0;

    for (j = 0; j < 1000000 >> 4; j++)
    {
        B[j<<4] = A[j<<4];
    }

    return 0;
}
