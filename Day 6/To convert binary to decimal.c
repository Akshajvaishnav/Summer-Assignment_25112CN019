#include <stdio.h>

int binaryToDecimal(int n) {
    int dec = 0;

  
    int base = 1;
    
  
    while (n) {
        int last_digit = n % 10;
        n = n / 10;

       
        dec += last_digit * base;

     
        base = base * 2;
    }

    return dec;
}

int main() {
    int num = 10101001;
    printf("%d", binaryToDecimal(num));

    return 0;
}
