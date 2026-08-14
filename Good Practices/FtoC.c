// T(°C) = (T(°F) - 32) × 5/9 

#include <stdio.h>

void FarenToCelc(int f){

    int conv = ((f -32)*5/9);
    printf("Celsius of Fahrenheit %d is %d", f, conv);
}

int main(){
    int f = 0;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%d", &f);
    FarenToCelc(f);

}