/*Write a C program to count the number of characters, words, and lines in a file.*/

#include <stdio.h>
#include <conio.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;
    int characters = 0, words = 0, lines = 1;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: File does not exist.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n')
            lines++;

        // Count words
        if (ch == ' ' || ch == '\n' || ch == '\t')
            words++;
    }

    fclose(fp);

    printf("\nCharacters: %d\n", characters);
    printf("Words     : %d\n", words);
    printf("Lines     : %d\n", lines);

    return 0;
}


