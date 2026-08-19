#include <stdio.h>

int main() {
    int a;
    printf("Enter any Number: ");
    scanf("%d", &a);
    if (a == 0){
        printf("%d is neither positive nor negative", a);
    }
    else if (a >0) {
        printf("%d is Positive", a);
    }
    else{
        printf("%d is Negative", a);
    }


    return 0;
}