#include <stdio.h>

int main() {
    int i, j, n = 5;

    for(i = 0; i < n; i++) {

        // Print spaces 
        for(j = 0; j < n - i - 1; j++)
            printf(" ");

        // Print A to current character
        for(j = 0; j <= i; j++)
            printf("%c", 'A' + j);

        // Print current-1 character back to A
        for(j = i - 1; j >= 0; j--)
            printf("%c", 'A' + j);

        printf("\n");
    }

    return 0;
}
