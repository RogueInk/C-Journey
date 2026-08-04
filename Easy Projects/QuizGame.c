#include <stdio.h>
#include <ctype.h>

int main() {
    // 2D Array to store the questions
    char questions[][100] = {
        "What is the largest planet in the solar system?",
        "What is the hottest planet?",
        "What planet has the most moons?",
        "Is the Earth flat?"
    };

    // 2D Array to store the options. Each option is separated by a newline character.
    char options[][100] = {
        "A. Jupiter\nB. Saturn\nC. Uranus\nD. Neptune",
        "A. Mercury\nB. Venus\nC. Earth\nD. Mars",
        "A. Earth\nB. Mars\nC. Jupiter\nD. Saturn",
        "A. yes\nB. no\nC. maybe\nD. sometimes"
    };

    // 1D Array containing the corresponding correct answers
    char answer_key[] = {'A', 'B', 'D', 'B'};

    // Calculate the number of questions dynamically
    int question_count = sizeof(questions) / sizeof(questions[0]);
    
    char guess = '\0';
    int score = 0;

    printf("QUIZ GAME\n");

    for (int i = 0; i < question_count; i++) {
        printf("\n*******************\n");
        printf("%s\n", questions[i]);
        printf("*******************\n");
        
        printf("%s\n", options[i]);
        printf("*******************\n");
        
        printf("\nEnter your choice: ");
        scanf(" %c", &guess);
        
        // Convert the user's guess to uppercase in case they type lowercase letters
        guess = toupper(guess); 

        // Check if the guess matches the correct answer in the answer key
        if (guess == answer_key[i]) {
            printf("CORRECT!\n");
            score++;
        } else {
            printf("WRONG!\n");
        }
    }

    // Display the final score
    printf("\n*******************\n");
    printf("Your score is %d out of %d points\n", score, question_count);
    printf("*******************\n");

    return 0;
}