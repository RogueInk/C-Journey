#include <stdio.h>

int main() {
    int a = 11, b = 2, c = 9;

    // Finding max using compound expressions
    if (a >= b && a >= c)
        printf("%d is the largest number.", a);
    else if (b >= a && b >= c)
        printf("%d is the largest number.", b);
    else
        printf("%d is the largest number.", c);

    return 0;
}