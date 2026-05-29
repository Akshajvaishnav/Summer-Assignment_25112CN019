#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Make the number positive if it's negative
    if (num < 0) {
        num = -num;
    }

    while (num != 0) {
        remainder = num % 10;   // Get the last digit
        sum = sum + remainder;  // Add it to the sum
        num = num / 10;         // Remove the last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
