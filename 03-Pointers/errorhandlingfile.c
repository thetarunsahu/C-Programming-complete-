/*Write a C program to demonstrate error handling in file operations (e.g., print an error message if the file does not exist).*/


#include <stdio.h>
#include <conio.h>

int main() {
    FILE *fp;
    char filename[50];

   
    printf("Enter the filename to open: ");
    scanf("%s", filename);

    // Tryying to open file
    fp = fopen(filename, "r");

    // Checked if file was opened
    if (fp == NULL) {
        perror("Error");         
        printf("File '%s' could not be opened.\n", filename);
        return 1;             
    }

    printf("File opened successfully!\n");

    fclose(fp);

    return 0;
}
