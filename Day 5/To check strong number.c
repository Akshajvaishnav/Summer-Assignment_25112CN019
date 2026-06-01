#include <stdio.h>

// Function to calculate the factorial of a digit
long long calculateFactorial(int digit) {
    long long fact = 1;
    for (int i = 1; i <= digit; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, lastDigit;
    long long totalSum = 0;

    // Request user input
    printf("Enter a number to check: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Store the original number for the final comparison
    originalNum = num;

    // Process each digit of the number
    while (num > 0) {
        lastDigit = num % 10;                 // Extract the last digit
        totalSum += calculateFactorial(lastDigit); // Add its factorial to sum
        num /= 10;                            // Remove the last digit
    }

    // Verify the Strong Number condition
    if (totalSum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}
