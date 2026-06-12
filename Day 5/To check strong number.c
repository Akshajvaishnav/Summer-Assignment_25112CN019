#include <stdio.h>
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
    printf("Enter a number to check: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    originalNum = num;
    while (num > 0) {
        lastDigit = num % 10;                 
        totalSum += calculateFactorial(lastDigit);
        num /= 10;                           
    }
    if (totalSum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}
