/*. Write a C program using a function with no arguments and no return value to display your name and roll number.*/

#include <stdio.h>
#include <conio.h>

void displayInfo() {   // void = no argue
    printf("Name: John Doe\n");
    printf("Roll Number: 12345\n");
}

int main() {
    displayInfo(); // Just calling the function
    return 0;
}

