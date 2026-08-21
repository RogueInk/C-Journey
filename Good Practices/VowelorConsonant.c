#include <stdio.h>
#include <string.h>

int isVowel(char ch)
{
    // Make the list of vowels
    char vowels[] = "aeiouAEIOU";
    return (strchr(vowels, ch) != NULL);
}

// Driver Code
int main()
{
    if (isVowel('a'))
        printf("a is vowel\n");
    else
        printf("a is consonant\n");
    return 0;
}