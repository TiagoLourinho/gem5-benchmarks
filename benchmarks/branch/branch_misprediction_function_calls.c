
void func1()
{
    static int count = 0;
    count++;
}

void func2()
{
    static int count = 0;
    count++;
}

void func3()
{
    static int count = 0;
    count++;
}

void func4()
{
    static int count = 0;
    count++;
}

void func5()
{
    static int count = 0;
    count++;
}

void func6()
{
    static int count = 0;
    count++;
}

void func7()
{
    static int count = 0;
    count++;
}

void func8()
{
    static int count = 0;
    count++;
}

void func9()
{
    static int count = 0;
    count++;
}

void func10()
{
    static int count = 0;
    count++;
}

int main()
{

    unsigned int rand = 11;
    void (*ptr[10])();

    // Store the functions pointers into the arrays
    ptr[0] = func1;
    ptr[1] = func2;
    ptr[2] = func3;
    ptr[3] = func4;
    ptr[4] = func5;
    ptr[5] = func6;
    ptr[6] = func7;
    ptr[7] = func8;
    ptr[8] = func9;
    ptr[9] = func10;

    // Create an array of function pointers and jump to a random one
    // Repeat the same "basic block" some times to reduce the influence of the loop
    for (int i = 0; i < 100000; i++)
    {
        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        (*ptr[rand % 10])();

        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        (*ptr[rand % 10])();

        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        (*ptr[rand % 10])();

        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        (*ptr[rand % 10])();

        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        (*ptr[rand % 10])();

        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        (*ptr[rand % 10])();

        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        (*ptr[rand % 10])();

        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        (*ptr[rand % 10])();

        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        (*ptr[rand % 10])();

        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        (*ptr[rand % 10])();
    }
}