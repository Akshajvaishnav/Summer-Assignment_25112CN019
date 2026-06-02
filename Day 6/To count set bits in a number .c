#include <stdio.h>

int countSetBits(unsigned int num)
{
    int count = 0;
    while (num) {
        count += num & 1; // Add the least significant bit
        num >>= 1; // Right shift the number
    }
    return count;
}

int main()
{
    unsigned int num = 103; // Binary: 01100111

    // Count the number of set bits
    int result = countSetBits(num);

    // Print the result
    printf("Number of set bits: %d\n", result);

    return 0;
}
