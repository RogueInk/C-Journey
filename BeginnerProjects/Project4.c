/*
This is a simple calculator program that performs basic arithmetic operations.
It takes two numbers and an operation as input from the user and performs the operation.
*/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int main() {
    // Declaring variables
    char operation = '\0';
    float num1 = 0.0;
    float num2 = 0.0;
    double result = 0.0;

    // Getting user input
    printf("SIMPLE CALCULATOR\n");
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the operation to perform (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Performing the operation based on user input
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
            }
            break;
        default:
            printf("Error: Invalid operation. Please use +, -, *, or /. and numbers must be valid integer\n");
    }
    printf("The result is: %.2f\n", result);

    return 0;
}