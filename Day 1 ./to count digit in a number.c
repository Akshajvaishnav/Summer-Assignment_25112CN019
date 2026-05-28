#include <stdio.h>

int main() {
    long long n;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &n);

    // Handle 0 explicitly
    if (n == 0) {
        count = 1;
    } else {
        // Remove negative sign if number is negative
        if (n < 0) n = -n;

        while (n != 0) {
            n /= 10; // Remove the last digit
            count++;
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}
