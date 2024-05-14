// Write a C program to copy consonants of one string to another and count copied characters.

#include <stdio.h>
#include <string.h>

int isConsonant(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        switch (c) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                return 0; 
            default:
                return 1; 
        }
    }
    return 0; 
}

void copyConsonants(char *source, char *destination, int *count) {
    while (*source) {
        if (isConsonant(*source)) {
            *destination = *source;
            destination++;
            (*count)++;
        }
        source++;
    }
    *destination = '\0'; 
}

int main() {
    char source[] = "Hello World";
    char destination[100];
    int count = 0;

    copyConsonants(source, destination, &count);

    printf("Copied consonants: %s\n", destination);
    printf("Number of copied characters: %d\n", count);

    return 0;
}
