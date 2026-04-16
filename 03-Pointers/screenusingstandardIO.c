/*Write a C program to read data from a text file and display it on the screen using standard I/O library functions (fopen, fgetc, fclose).*/

#include <stdio.h>
#include <conio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("output.txt", "r");
    
    if(fp == NULL) {
        printf("File not found!");
        return 1;
    }
    
    printf("File content:\n");

    while( (ch = fgetc(fp)) != EOF ) {
        printf("%c", ch);
    }
    
    fclose(fp);
    return 0;
}
