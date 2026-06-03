#include <stdio.h>

// Recursive function to calculate the nth Fibonacci number
int getFibonacci(int n) {
    // Base Case: return 0 for the 0th term and 1 for the 1st term
    if (n <= 1) {
        return n;
    }
    // Recursive Case: F(n) = F(n-1) + F(n-2)
    return getFibonacci(n - 1) + getFibonacci(n - 2);
}

int main() {
    int terms;

    // Prompt the user for the number of elements
    printf("Enter the number of terms: ");
    if (scanf("%d", &terms) != 1 || terms <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    printf("Fibonacci Series: ");
    // Loop to print each term using the recursive function
    for (int i = 0; i < terms; i++) {
        printf("%d ", getFibonacci(i));
    }
    printf("\n");

    return 0;
}
