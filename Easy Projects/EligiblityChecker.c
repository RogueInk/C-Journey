#include <stdio.h>
#include <stdbool.h>

int age_check(int age) {
    if (age >= 16){
        return 0;
    }
    else{
        return 1;
    }
}

void print_eligibility(int age) {
    if (age_check(age)) {
        printf("You are eligible to stay at Epstein Island. \n");
    }
    else {
        printf("You are not eligible to stay at Epstein Island. \n");
    }
}

int main() {
    int age = 0;
    printf("Enter your age: ");
    scanf("%d", &age);
    
    print_eligibility(age);
}