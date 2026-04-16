/* Write a C program to display student details using pointers to structures. */

#include <stdio.h>
#include <conio.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    struct Student s1 = {"Alice", 101};
    struct Student *ptr = &s1;
    
    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d", ptr->roll);
    
    return 0;
}