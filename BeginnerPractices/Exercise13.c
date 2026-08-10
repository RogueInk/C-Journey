#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number;

    printf("Enter the number of grades: ");

    if (scanf("%d", &number) != 1 || number <= 0)
    {
        printf("Invalid number of grades.\n");
        return 1;
    }

    // Allocate memory for 'number' characters
    char *grades = malloc(number * sizeof(*grades));

    // Check if memory allocation failed
    if (grades == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input grades
    for (int i = 0; i < number; i++)
    {
        printf("Enter grade number %d: ", i + 1);

        if (scanf(" %c", &grades[i]) != 1)
        {
            printf("Invalid input.\n");
            free(grades);
            return 1;
        }
    }

    // Display grades
    printf("\nGrades: ");

    for (int i = 0; i < number; i++)
    {
        printf("%c ", grades[i]);
    }

    printf("\n");

    // Release dynamically allocated memory
    free(grades);

    // Avoid dangling pointer
    grades = NULL;

    return 0;
}