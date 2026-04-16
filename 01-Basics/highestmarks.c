//Higest marks 
#include <stdio.h>

int main() {
    int marks[5], max;

    for (int i = 0; i < 5; i++) {
        printf("Enter mark of student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    max = marks[0];
    for (int i = 1; i < 5; i++) {
        if (marks[i] > max)
            max = marks[i];
    }
    printf("Highest mark = %d", max);

    return 0;
}
