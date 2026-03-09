//Make the structure to store  bank account information of a customer of ABC bank. Also, make an alias for it.
#include<stdio.h>

typedef struct bankAccount{
    int accountNo;
    char name[50];
    float balance;
} acc;

int main(){

    acc customer1;

    printf("Enter Account Number: ");
    scanf("%d", &customer1.accountNo);

    printf("Enter Name: ");
    scanf("%s", customer1.name);

    printf("Enter Balance: ");
    scanf("%f", &customer1.balance);

    printf("\n--- Account Information ---\n");
    printf("Account No: %d\n", customer1.accountNo);
    printf("Name: %s\n", customer1.name);
    printf("Balance: %.2f\n", customer1.balance);

    return 0;
}