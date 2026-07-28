#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int guess = 0;
    int attempts = 0;
    int min = 1;
    int max = 100;
    
    srand(time(NULL)); // Seed the random number generator

    int answer = (rand() % (max - min + 1)) + min; // Generate a random number between min and max
    do
    {
        printf("***WELCOME TO THE GUESSING GAME***\n");
        printf("Guess a number between %d - %d: ", min, max);
        scanf("%d", &guess);
        attempts++;
        if (guess < answer){
            printf("Too low! Try again.\n");
        }
        else if (guess > answer){
            printf("Too high! Try again.\n");
        }
        else{
            printf("Correct!\n");
        }
    } while(guess != answer);
     printf("Congratulations! You guessed the number %d in %d attempts.\n", answer, attempts);

    return 0;
    
}