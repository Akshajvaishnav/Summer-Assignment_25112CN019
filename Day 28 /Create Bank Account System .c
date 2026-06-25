#include <stdio.h>

int main() {
    int accNo;
    char name[50];
    float balance, deposit, withdraw;

    printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Account Holder Name: ");
    scanf("%s", name);

    printf("Enter Initial Balance: ");
    scanf("%f", &balance);

    printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);
    balance += deposit;

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &withdraw);

    if(withdraw <= balance)
        balance -= withdraw;
    else
        printf("Insufficient Balance\n");

    printf("\n--- Account Details ---\n");
    printf("Account No : %d\n", accNo);
    printf("Name       : %s\n", name);
    printf("Balance    : %.2f\n", balance);

    return 0;
}
