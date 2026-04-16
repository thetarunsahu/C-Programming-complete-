/*Write a C program to demonstrate the concept of pointer to pointer by printing a variable’s value using multiple levels of indirection. */

#include <stdio.h>
#include <conio.h>

int main() {
    int val = 500;
    int *ptr = &val;      
    int **pptr = &ptr;    
    
    printf("Value using variable: %d\n", val);
    printf("Value using pointer: %d\n", *ptr);
    printf("Value using pointer to pointer: %d\n", **pptr);
    
    return 0;
}
