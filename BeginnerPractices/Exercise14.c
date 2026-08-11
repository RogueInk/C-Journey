#include <stdio.h>
#include <stdlib.h> // Required for calloc and free

int main() {
    int number = 0;
    
    printf("Enter the number of players: ");
    scanf("%d", &number);

    // Dynamically allocate memory using calloc
    // Argument 1: number of elements. Argument 2: size of each element.
    int *scores = calloc(number, sizeof(int));

    // Check if memory allocation failed
    if (scores == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }

    // Print the array to prove that calloc initializes all values to 0
    for (int i = 0; i < number; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    // Allow the user to overwrite the zeros with actual scores
    for (int i = 0; i < number; i++) {
        printf("Enter score number %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Always free the memory when you are done (return the apartment)
    free(scores);
    
    // Set the pointer to NULL to avoid a dangling pointer (return the key)
    scores = NULL;

    return 0;
}