#include <stdio.h>

int main() {
    // Open (or create) output.txt in write mode ("w")
    // Note: You can also use an absolute file path like "C:\\Users\\Desktop\\output.txt"
    FILE *pFile = fopen("output.txt", "w");

    // Check if the file failed to open
    if (pFile == NULL) {
        printf("error opening file\n");
        return 1; // Exit code 1 indicates an error
    }

    // The text to write to the file
    char text[] = "booty booty booty\nrocking everywhere";

    // Write the string to the file
    fprintf(pFile, "%s", text);
    
    printf("file was written successfully\n");

    // Always close the file when you are done!
    fclose(pFile);

    return 0;
}

// READ FILES

// #include <stdio.h>

// int main() {
//     // Open the file in read mode ("r")
//     // You can also use an absolute file path if the file isn't in your project folder
//     FILE *pFile = fopen("input.txt", "r");

//     // Safety check: Did the file open successfully?
//     if (pFile == NULL) {
//         printf("could not open file\n");
//         return 1; // Exit the program with an error code
//     }

//     // Create a buffer to temporarily store the text we read
//     // Initialized to {0} to clear out any garbage values
//     char buffer[1024] = {0}; 

//     // Read the file line by line until there is no more text (returns NULL)
//     while (fgets(buffer, sizeof(buffer), pFile) != NULL) {
//         // Print the contents of the buffer
//         printf("%s", buffer);
//     }

//     // Close the file when finished
//     fclose(pFile);

//     return 0;
// }