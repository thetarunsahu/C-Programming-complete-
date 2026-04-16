/* Write a C program to find the largest element in an array using pointers. */

#include <stdio.h>
#include <conio.h>

int main() {
    int arr[5] = {12, 45, 6, 89, 23};
    int *ptr = arr; 
    int max = *ptr;
    
    for(int i = 0; i < 5; i++) {
        
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    printf("Largest element is: %d", max);
    return 0;
}