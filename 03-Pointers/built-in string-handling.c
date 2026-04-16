/*Write a C program that uses built-in string-handling functions (strcpy, strcmp, strlen) to compare two strings entered by the user. */

#include <stdio.h>
#include <conio.h>
#include <string.h> 

int main() {
    char str1[50], str2[50];
    
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    //  Get length
    printf("Length of str1: %lu\n", strlen(str1));
    
    // Compare strings
    if(strcmp(str1, str2) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    
    //  Copy str1 into str2
    strcpy(str2, str1);
    printf("After copy, str2 is: %s", str2);
    
    return 0;
}