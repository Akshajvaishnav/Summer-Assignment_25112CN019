#include <stdio.h>

int isPalindrome(int n) {
    int temp = n, rev = 0;
    while (temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main() {
    int n;
    scanf("%d", &n);
    printf(isPalindrome(n) ? "Palindrome" : "Not Palindrome");
    return 0;
}
