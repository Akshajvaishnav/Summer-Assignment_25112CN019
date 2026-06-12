#include <stdio.h>
int getFibonacci(int n) {
    if (n <= 1) {
        return n;
    }  
    return getFibonacci(n - 1) + getFibonacci(n - 2);
}
int main() {
    int terms;
    printf("Enter the number of terms: ");
    if (scanf("%d", &terms) != 1 || terms <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
        return 1;
    }

    printf("Fibonacci Series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", getFibonacci(i));
    }
    printf("\n");
    return 0;
}
