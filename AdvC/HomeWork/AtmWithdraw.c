//Write a C program to simulate an ATM withdrawal process. Display an appropriate message indicating whether the transaction is successful or not.
#include <stdio.h>

int main() {
    float balance = 10000.00;
    printf("Current Balance: %.2f\n", balance);
    float withdraw_amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &withdraw_amount);

    if (withdraw_amount > 0) 
    {
        if (withdraw_amount <= balance)
        {
            balance -= withdraw_amount;
            printf("Transaction Successful! Please collect your cash.\n");
            printf("Remaining Balance: %.2f\n", balance);
        } 
        else 
        {
            printf("Insufficient funds in your account.\n");
        }
    } 
    else 
    {
        printf("Invalid amount. Please enter a positive value.\n");
    }

    return 0;
}
