/*Write a C program to copy the contents of one file into another file using file handling functions.*/

#include <stdio.h>
#include <conio.h>

int main() {
    FILE *source, *dest;
    char ch;

    source = fopen("output.txt", "r"); 
    dest = fopen("copy.txt", "w");     

    if (source == NULL) { printf("Source file missing."); return 1; }

  
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully.");
    fclose(source);
    fclose(dest);
    return 0;
}
