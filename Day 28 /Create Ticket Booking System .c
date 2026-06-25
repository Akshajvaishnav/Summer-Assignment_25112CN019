#include <stdio.h>

int main() {
    char name[50];
    int tickets;
    float price = 200, total;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Number of Tickets: ");
    scanf("%d", &tickets);

    total = tickets * price;

    printf("\n--- Ticket Details ---\n");
    printf("Customer : %s\n", name);
    printf("Tickets  : %d\n", tickets);
    printf("Total Amount : %.2f\n", total);

    return 0;
}
