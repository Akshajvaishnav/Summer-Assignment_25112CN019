#include <stdio.h>

int main() {

    double base, result = 1;
    int exp, i;
    
    printf("Enter a base number: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    for (i=1; i<=exp; i++) {
        result *= base;
    }
    printf("%.2lf^%d = %.2lf", base,exp,result);

    return 0;
}
