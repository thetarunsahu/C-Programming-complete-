/* Write a C program using a function that accepts an array of integers and returns the sum of all elements. */

#include <stdio.h>
#include <conio.h>


int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int total;
    
    total = sumArray(numbers, 5);
    printf("Sum of array elements: %d", total);
    return 0;
}