/* Write a C program using a user-defined string function strLength() to find the length of a string without using <string.h>. */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int strLength(char str[]) {
    int count = 0;
 
    while (str[count] != '\0') {
        count++;
    }
    return count;
}

int main() {
    char myString[100];
    printf("Enter a string: ");
    scanf("%s", myString); 
    
    int len = strLength(myString);
    printf("Length of string: %d", len);
    return 0;
}
