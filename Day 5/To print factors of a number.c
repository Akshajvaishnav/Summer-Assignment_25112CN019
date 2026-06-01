#include <stdio.h>

int main() {
    int num;

    // Ask the user to input a positive integer
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    printf("Factors of %d are: ", num);

    // Loop from 1 to the given number to find its factors
    for (int i = 1; i <= num; i++) {
        // If the remainder is 0, then 'i' is a factor
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
