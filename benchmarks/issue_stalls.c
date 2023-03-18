#include <stdio.h>

int main()
{
    int x = 1, y = 20, z = 10, k = 3;
    for (int i = 0; i < 1000000; i++)
    {
        y = x + z;
        x = z + z;
        x = k + 2;
    }

    return 0;
}