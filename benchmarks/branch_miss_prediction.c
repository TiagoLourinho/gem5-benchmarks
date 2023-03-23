int main()
{

    int count = 0, k, rand = 14, bit, i_copy;

    for (int i = 0; i < 100000; i++)
    {

        i_copy = i;

        ////////// Basic Block //////////
        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        k = i_copy % 32;       // Select the bit to choose (int have 32 bits)
        bit = (rand >> k) & 1; // Extract the bit in position k

        i_copy++; // Change for the following basic block

        if (bit)
        {
            count++;
        }
        /////////////////////////////////

        ////////// Basic Block //////////
        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        k = i_copy % 32;       // Select the bit to choose (int have 32 bits)
        bit = (rand >> k) & 1; // Extract the bit in position k

        i_copy++; // Change for the following basic block

        if (bit)
        {
            count++;
        }
        /////////////////////////////////

        ////////// Basic Block //////////
        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        k = i_copy % 32;       // Select the bit to choose (int have 32 bits)
        bit = (rand >> k) & 1; // Extract the bit in position k

        i_copy++; // Change for the following basic block

        if (bit)
        {
            count++;
        }
        /////////////////////////////////

        ////////// Basic Block //////////
        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        k = i_copy % 32;       // Select the bit to choose (int have 32 bits)
        bit = (rand >> k) & 1; // Extract the bit in position k

        i_copy++; // Change for the following basic block

        if (bit)
        {
            count++;
        }
        /////////////////////////////////

        ////////// Basic Block //////////
        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        k = i_copy % 32;       // Select the bit to choose (int have 32 bits)
        bit = (rand >> k) & 1; // Extract the bit in position k

        i_copy++; // Change for the following basic block

        if (bit)
        {
            count++;
        }
        /////////////////////////////////

        ////////// Basic Block //////////
        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        k = i_copy % 32;       // Select the bit to choose (int have 32 bits)
        bit = (rand >> k) & 1; // Extract the bit in position k

        i_copy++; // Change for the following basic block

        if (bit)
        {
            count++;
        }
        /////////////////////////////////

        ////////// Basic Block //////////
        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        k = i_copy % 32;       // Select the bit to choose (int have 32 bits)
        bit = (rand >> k) & 1; // Extract the bit in position k

        i_copy++; // Change for the following basic block

        if (bit)
        {
            count++;
        }
        /////////////////////////////////

        ////////// Basic Block //////////
        rand ^= rand << 13;
        rand ^= rand >> 17; // Generate random number
        rand ^= rand << 5;

        k = i_copy % 32;       // Select the bit to choose (int have 32 bits)
        bit = (rand >> k) & 1; // Extract the bit in position k

        i_copy++; // Change for the following basic block

        if (bit)
        {
            count++;
        }
        /////////////////////////////////
    }
}