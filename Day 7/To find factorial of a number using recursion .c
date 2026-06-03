#include <stdio.h>

// Function declaration
unsigned long long factorial(int n);

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Error handling for negative integers
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d = %llu\n", num, factorial(num));
    }

    return 0;
}

// Recursive function to find factorial
unsigned long long factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n! = n * (n - 1)!
    return n * factorial(n - 1);
}
