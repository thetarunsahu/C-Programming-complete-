/* Write a C program to write a string into a file and display a message confirming successful writing.*/

#include <stdio.h>
#include <conio.h>

int main() {
    FILE *fpa;
    char text[] = "Hello, this is C programming.";

   
    fpa = fopen("output.txt", "w");
    
    if(fpa == NULL) {
        printf("Error opening file.");
        return 1;
    }
    
    fprintf(fpa, "%s", text); 
    printf("Data written successfully.");
    
    fclose(fpa); 
    return 0;
}
