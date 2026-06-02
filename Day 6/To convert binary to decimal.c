#include <stdio.h>

int binaryToDecimal(int n) {
    int dec = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;
    
    // Extracting each digits of binary number
    // and adding corresponding exponent of 2
    while (n) {
        int last_digit = n % 10;
        n = n / 10;

        // Multiplying the last digit with the base value
        // and adding it to the decimal value
        dec += last_digit * base;

        // Updating the base value by multiplying it by 2
        base = base * 2;
    }

    return dec;
}

int main() {
    int num = 10101001;
    printf("%d", binaryToDecimal(num));

    return 0;
}
