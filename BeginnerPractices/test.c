// Program to take student name , rollno and display.

#include <stdio.h>
#include <string.h>

int main(){
    int roll; // Stores Roll no. in int
    char name[30] = ""; // Stores name in char with size 100
    printf("Enter your Roll no: "); 
    scanf("%d", &roll);
    getchar();  // Removes the leftover '\n'


    printf("Enter your name: ");
    fgets(name, sizeof(name),stdin); // This is used for array of string
    name[strlen(name) - 1] = '\0'; // Here string.h header file used that remove the newline character from the input

    printf("\nStudent %s\n", name);
    printf("%s Roll no. %d", name, roll);

    return 0;
}
