// Write a C program to find the frequency of each vowel in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void findVowelFrequency(char *str) {
    int vowels[5] = {0}; 
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char c = tolower(str[i]); 
        switch (c) {
            case 'a':
                vowels[0]++;
                break;
            case 'e':
                vowels[1]++;
                break;
            case 'i':
                vowels[2]++;
                break;
            case 'o':
                vowels[3]++;
                break;
            case 'u':
                vowels[4]++;
                break;
            default:
                break;
        }
    }

    printf("Vowel frequencies in the string:\n");
    printf("A/a: %d\n", vowels[0]);
    printf("E/e: %d\n", vowels[1]);
    printf("I/i: %d\n", vowels[2]);
    printf("O/o: %d\n", vowels[3]);
    printf("U/u: %d\n", vowels[4]);
}

int main() {
    char str[] = "Hello, World! This is a sample string.";
    
    findVowelFrequency(str);

    return 0;
}
