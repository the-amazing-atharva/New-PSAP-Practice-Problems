// Write a C program to count the number of digits in an integer.

#include <stdio.h>

int countDigits(int num) {
    int count = 0;
    
    if (num < 0) {
        num = -num;
    }
    
    while (num != 0) {
        num = num / 10;
        count++;
    }
    
    return count;
}

int main() {
    int number;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    int digitCount = countDigits(number);
    
    printf("Number of digits in %d is: %d\n", number, digitCount);
    
    return 0;
}
