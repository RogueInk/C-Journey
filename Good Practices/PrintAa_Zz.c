#include <stdio.h>

int main()
{
    // Declare the variables
    char i;

    // Display the alphabets
    printf("The Alphabets from A to Z are: \n");

    // Traverse each character
    // with the help of for loop
    for (i = 'A'; i <= 'Z'; i++) {

        // Print the alphabet
        printf("%c ", i);
    }

    printf("\nThe Alphabets from a to z are: \n");

    // Traverse each character
    // with the help of for loop
    for (i = 'a'; i <= 'z'; i++) {

        // Print the alphabet
        printf("%c ", i);
    }

    return 0;
}