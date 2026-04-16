/* Write a C program using a function with no arguments but returns a value to read and return the user's age. */

#include <stdio.h>
#include <conio.h>


int getAge() {
    int age;
    printf("Please enter your age: ");
    scanf("%d", &age);
    return age;
}

int main() {
    int myAge;
    myAge = getAge(); // Stored
    printf("Your age is: %d", myAge);
    return 0;
}
