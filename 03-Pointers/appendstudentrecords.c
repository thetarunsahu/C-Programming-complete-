/*Write a C program to append student records (name, marks) into a file and then display all records.*/

#include <stdio.h>
#include <conio.h>

int main() {
    FILE *fp;
    char name[50];
    int marks;

    
    fp = fopen("students.txt", "a");

    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Marks: ");
    scanf("%d", &marks);

    fprintf(fp, "%s %d\n", name, marks);
    printf("Record appended.");

    fclose(fp);
    return 0;
}
