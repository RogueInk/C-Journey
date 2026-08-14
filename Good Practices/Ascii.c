// C program to print ASCII Value of Character using
// implicit conversion with format specifier.
#include <stdio.h>

int main() {
    char c = 'w';

    // %d displays the integer value of a character
    // %c displays the actual character
    printf("The ASCII value of %c is %d", c, c);
    return 0;
}

// C program to print ASCII Value of Character using
// typecasting into integer / Explicit
// #include <stdio.h>

// int main() {

//     char ch = 'A';

//     // Find the ASCII value of a character using typecasting
//     int asciiValue = (int)ch;

//     printf("ASCII value of %c is %d\n", ch, asciiValue);
//     return 0;
// }