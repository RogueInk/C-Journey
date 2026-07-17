#include <stdio.h>
#include <string.h>

int main() {

    // Declaring Variables
    char itemname[30] = "";
    float itemprice = 0.0f;
    int quanity = 0;
    char currency_symbol = '$';
    float total_cost = 0.0f;
    // Getting user input
    printf("Which item did the customer buy?: ");
    fgets(itemname, sizeof(itemname), stdin);
    itemname[strlen(itemname) - 1] = '\0'; // Remove the newline character from the input

    printf("What is the price of %s?: ", itemname);
    scanf(" %f", &itemprice);

    printf("How many %s did the customer buy?: ", itemname);
    scanf(" %d", &quanity);

    // Calculating total cost
    total_cost = itemprice * quanity;
    
    // Printing the output
    printf("The total price of %d %s is: %c%.3f\n", quanity, itemname, currency_symbol, total_cost);

    return 0;
}