#include <stdio.h>

// Recursive function helper to reverse the digits
int reverse_recursive(int num, int rev) {
    // Base case: when all digits are processed
    if (num == 0) {
        return rev;
    }
    
    // Extract last digit and build the reversed number
    rev = (rev * 10) + (num % 10);
    
    // Recursive call with the remaining digits
    return reverse_recursive(num / 10, rev);
}

int main() {
    int number, result;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Call the recursive function starting with an initial reversed value of 0
    result = reverse_recursive(number, 0);

    printf("The reverse of %d is: %d\n", number, result);

    return 0;
}
