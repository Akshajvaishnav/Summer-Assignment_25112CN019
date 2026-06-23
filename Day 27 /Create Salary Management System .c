#include <stdio.h>

int main() {
    float basic, hra, da, gross;

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    hra = basic * 0.20;
    da = basic * 0.10;

    gross = basic + hra + da;

    printf("\nBasic Salary = %.2f", basic);
    printf("\nHRA = %.2f", hra);
    printf("\nDA = %.2f", da);
    printf("\nGross Salary = %.2f", gross);

    return 0;
}
