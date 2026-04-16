//copyarrey
#include <stdio.h>
int main() {
    int marks[5], copy[5];

    printf("Enter marks:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &marks[i]);

    for(int i = 0; i < 5; i++)
        copy[i] = marks[i];

    printf("Copied array:\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", copy[i]);

    return 0;
}
