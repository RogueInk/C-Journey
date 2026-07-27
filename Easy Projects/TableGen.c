// Project Concept used: Nested Loops and While/For Loop for Creating a Multiplication Table Generator.

#include <stdio.h>
#include <stdbool.h>

char choice = '\0';

// Function to check whether a number is even
bool isEven(int num) {
    if (num % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

// Function to print the complete multiplication table
void TablePrint() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}

// Function to print only even numbers in the table
void TablePrint_EvenOnly() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            if (isEven(i * j)) {
                printf("%4d", i * j);
            }
            else {
                printf("   -");
            }
        }
        printf("\n");
    }
}

int main() {

    printf("Welcome to the Multiplication Table Generator!\n");

    while (choice != '3') {

        printf("\n========== MENU ==========\n");
        printf("1. Print the full multiplication table\n");
        printf("2. Print only even numbers in the table\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        if (choice == '1') {
            printf("\nFull Multiplication Table:\n\n");
            TablePrint();
        }
        else if (choice == '2') {
            printf("\nMultiplication Table (Even Numbers Only):\n\n");
            TablePrint_EvenOnly();
        }
        else if (choice == '3') {
            printf("\nThank you for using the program!\n");
        }
        else {
            printf("\nInvalid choice! Please enter 1, 2, or 3.\n");
        }
    }

    return 0;
}
// Formatting and indentation have been improved for better readability.