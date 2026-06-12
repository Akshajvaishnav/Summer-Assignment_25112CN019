#include <stdio.h>
int countSetBits(unsigned int num)
{
    int count = 0;
    while (num) {
        count += num & 1; 
        num >>= 1;
    }
    return count;
}
int main()
{
    unsigned int num = 103; 
    int result = countSetBits(num);
    printf("Number of set bits: %d\n", result);

    return 0;
}
