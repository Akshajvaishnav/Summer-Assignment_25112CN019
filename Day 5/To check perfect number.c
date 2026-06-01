#include <stdio.h>

int main() {
    int num, sum = 0;

    // User inputs the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Negative numbers, 0, and 1 cannot be perfect numbers
    if (num <= 1) {
        printf("%d is NOT a perfect number.\n", num);
        return 0;
    }

    // Find and add up all proper divisors
    // A divisor cannot be greater than num / 2
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Compare the sum of divisors with the original number
    if (sum == num) {
        printf("%d is a PERFECT number.\n", num);
    } else {
        printf("%d is NOT a perfect number.\n", num);
    }

    return 0;
}
