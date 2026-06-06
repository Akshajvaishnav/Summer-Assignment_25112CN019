#include <stdio.h>

int main() {
    int n, key, count = 0;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    for (int i = 0; i < n; i++)
        if (arr[i] == key)
            count++;

    printf("Frequency = %d", count);

    return 0;
}
