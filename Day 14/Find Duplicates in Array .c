#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Duplicates: ");

    for (int i = 0; i < n; i++) {
        int duplicate = 0;

        for (int k = 0; k < i; k++)
            if (arr[i] == arr[k])
                duplicate = 1;

        if (duplicate) continue;

        int count = 0;
        for (int j = 0; j < n; j++)
            if (arr[i] == arr[j])
                count++;

        if (count > 1)
            printf("%d ", arr[i]);
    }

    return 0;
}
