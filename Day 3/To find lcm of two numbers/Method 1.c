#include <stdio.h>

// Function to calculate Greatest Common Divisor (GCD) using Euclidean Algorithm
int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate Least Common Multiple (LCM)
int find_lcm(int a, int b) {
    // To prevent integer overflow, divide by GCD before multiplying
    return (a / find_gcd(a, b)) * b;
}

int main() {
    int num1, num2, lcm;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 <= 0 || num2 <= 0) {
        printf("Please enter valid positive numbers.\n");
        return 1;
    }

    lcm = find_lcm(num1, num2);

    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);

    return 0;
}
