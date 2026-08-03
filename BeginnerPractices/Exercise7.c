#include <stdio.h>

int main() {

    int numbers[] = {122, 22, 33, 44, 55};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for(int i = 0; i < size; i++){

        printf("%d ", numbers[i]);

    }
    return 0;

}