#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num <= 1) {
        printf("%d is NOT a perfect number.\n", num);
        return 0;
    }
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    if (sum == num) {
        printf("%d is a PERFECT number.\n", num);
    } else {
        printf("%d is NOT a perfect number.\n", num);
    }
    return 0;
}
