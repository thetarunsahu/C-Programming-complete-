/*Write a C program to demonstrate scope and lifetime of variables using global and local variables in functions. */


#include <stdio.h>
#include <conio.h>

int globalVar = 100; 

void demoFunction() {
    int localVar = 10; 
    printf("Inside Function - Local: %d, Global: %d\n", localVar, globalVar);
}

int main() {
    // printf("%d", localVar); // optional ....!!
    printf("Inside Main - Global: %d\n", globalVar);
    demoFunction();
    return 0;
}