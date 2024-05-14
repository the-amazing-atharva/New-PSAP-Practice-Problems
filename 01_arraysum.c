// Write a C program to calculate the sum of array elements using pointers as an argument.
#include <stdio.h>

int sum_array(int *ptr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += *(ptr + i);
    }
    return sum;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = sum_array(arr, size);

    printf("Sum of array elements: %d\n", sum);

    return 0;
}
