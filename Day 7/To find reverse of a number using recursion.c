#include <stdio.h>
int reverse_recursive(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    rev = (rev * 10) + (num % 10);
    return reverse_recursive(num / 10, rev);
}
int main() {
    int number, result;
    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    result = reverse_recursive(number, 0);

    printf("The reverse of %d is: %d\n", number, result);

    return 0;
}
