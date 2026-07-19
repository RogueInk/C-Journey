#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    // Declaring Variables
    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int times_compounded = 0;
    double total = 0.0;

    // Getting user input
    printf("COMPOUND INTEREST CALCULATOR\n");

    printf("Enter the principal amount(P): ");
    scanf(" %lf", &principal);

    printf("Enter the annual interest rate % (r) (in percentage): ");
    scanf(" %lf", &rate);
    rate = rate / 100; // Convert percentage to decimal

    printf("Enter the number of years (t): ");
    scanf(" %d", &years);

    printf("Enter the number of times interest is compounded per year (n): ");
    scanf(" %d", &times_compounded);

    total = principal * pow((1 + rate / times_compounded), times_compounded * years);

    printf("The total amount after %d years is: %.2f\n", years, total);

    return 0;
}