// As name suggest , this program checks wether a given number is prime or not
// The logic i went with if number has more then 2 divisor then its not prime if 2 then prime.

#include <stdbool.h>
#include <stdio.h>

int main() {

    int num = 0;
    bool isPrime = true;
    printf("--CHECK WETHER NUMBER IS PRIME OR NOT---\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is prime\n", num);
    else
        printf("%d is NOT prime\n", num);

    return 0;
}
