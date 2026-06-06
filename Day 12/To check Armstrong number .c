#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, digits = 0;
    while (temp) {
        digits++;
        temp /= 10;
    }

    temp = n;
    int sum = 0;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf(isArmstrong(n) ? "Armstrong" : "Not Armstrong");
    return 0;
}
