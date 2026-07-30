#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function Prototypes
int getComputerChoice();
int getUserChoice();
void checkWinner(int userChoice, int computerChoice);

int main() {

    // Use current time as seed for random numbers
    srand(time(NULL));

    printf("=== ROCK PAPER SCISSORS ===\n\n");

    int userChoice;
    int computerChoice;

    // Get user and computer choices
    userChoice = getUserChoice();
    computerChoice = getComputerChoice();

    printf("\n");

    // Display user's choice
    switch(userChoice) {
        case 1:
            printf("You chose Rock\n");
            break;

        case 2:
            printf("You chose Paper\n");
            break;

        case 3:
            printf("You chose Scissors\n");
            break;
    }

    // Display computer's choice
    switch(computerChoice) {
        case 1:
            printf("Computer chose Rock\n");
            break;

        case 2:
            printf("Computer chose Paper\n");
            break;

        case 3:
            printf("Computer chose Scissors\n");
            break;
    }

    printf("\n");

    // Decide the winner
    checkWinner(userChoice, computerChoice);

    return 0;
}

// Generate a random choice for the computer
int getComputerChoice() {

    // Random number between 1 and 3
    return (rand() % 3) + 1;
}

// Ask the user to enter a valid choice
int getUserChoice() {

    int choice = 0;

    do {

        printf("Choose an option:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissors\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);

        if(choice < 1 || choice > 3) {
            printf("Invalid choice! Please enter 1, 2, or 3.\n\n");
        }

    } while(choice < 1 || choice > 3);

    return choice;
}

// Check who wins
void checkWinner(int userChoice, int computerChoice) {

    if(userChoice == computerChoice) {

        printf("It's a TIE!\n");

    }
    else if((userChoice == 1 && computerChoice == 3) ||
            (userChoice == 2 && computerChoice == 1) ||
            (userChoice == 3 && computerChoice == 2)) {

        printf("You WIN!\n");

    }
    else {

        printf("You LOSE!\n");

    }
}