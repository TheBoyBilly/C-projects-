#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main() {

    //BANKING PROGRAM

    int choice = 0;
    float balance = 0.0f;

    printf("WELCOME TO THE ATM!");

    do
    {
        printf("\nWhat would you like to do?\n");
        printf("\n1. Check balnace\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
    {
    case 1:
        checkBalance(balance);
        break;
    case 2:
        balance += deposit();
        break;
    case 3:
        balance -= withdraw(balance);
        break;
    case 4:
        printf("Thank you for banking with us!\n");
        break;
    default:
        printf("\nInvalid option!, Select between 1-4\n");
    }

    } while (choice != 4);


    return 0;
}

void checkBalance(float balance){
    printf("Your current balance is $%.2f\n", balance);
}
float deposit(){

    float amount = 0.0f;

    printf("\nHow much would you like deposit: $");
    scanf("%f", &amount);

    if (amount <  0)
    {
        printf("Invalid amount!\n");
        return 0.0f;
    }

    else 
    {
        printf("Sucessfully deposited $%.2f\n", amount);
        return amount;
    }
    
}
float withdraw(float balance){

    float amount = 0.0f;

    printf("\nEnter amount to withdraw: $");
    scanf("%f", &amount);

    if (amount < 0)
    {
        printf("Invalid amount!\n");
        return 0.0f;
    }
    else if (amount > balance)
    {
        printf("Insufficient balance!, Your balance is $%.2F\n", balance);
        return 0.0f;
    }
    else
    {
        printf("You have sucessfully withdrawn $%.2f\n", amount);
        return amount;
    }
}
