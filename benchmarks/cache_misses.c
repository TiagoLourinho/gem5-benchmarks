int main()
{
    int array[100000], count = 0;
    for (int j = 0; j < 2048; j++)
    {
        for (int i = j; i < 100000; i += 2048)
        {
            array[i] = i;
        }
    }

    for (int j = 0; j < 2048; j++)
    {
        for (int i = j; i < 100000; i += 2048)
        {
            count += array[i];
        }
    }

    return 0;
}