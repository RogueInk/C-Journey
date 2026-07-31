/*Banking program in C to check balance, deposit, and withdraw money. Using concepts of
functions and loops.
*/
#include <stdio.h>
#include <stdlib.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){
    int choice = 0;
    float balance = 0.0f;

    printf("Welcome to the Banking Program!\n");

    do{
        printf("\nChoose an option:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
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
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }while(choice !=4);

    return 0;
}

void checkBalance(float balance){
    printf("Your current balance is: $%.2f\n", balance);
}

float deposit(){
    float amount;
    printf("Enter the amount to deposit: $");
    scanf("%f", &amount);
    return amount;
}
float withdraw(float balance){
    float amount;
    printf("Enter the amount to withdraw: $");
    scanf("%f", &amount);
    if(amount > balance){
        printf("Insufficient funds.\n");
        return 0.0f;
    }
    return amount;
}