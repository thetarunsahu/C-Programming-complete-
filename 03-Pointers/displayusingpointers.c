/*Write a C program to store and display integers using pointers.*/

#include <stdio.h>
#include <conio.h>

int main() {
    int num = 10;
    int *ptr; 
    
    ptr = &num; 
    
    printf("Value of num: %d\n", num);
    printf("Value using pointer: %d", *ptr); 
    return 0;
}
