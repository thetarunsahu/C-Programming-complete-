//add marks of two students 
#include <stdio.h>
int main() {
    int sub1[5], sub2[5], total[5];

    printf("Enter marks of Subject 1:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &sub1[i]);

    printf("Enter marks of Subject 2:\n");
    for(int i = 0; i < 5; i++)
        scanf("%d", &sub2[i]);

    for(int i = 0; i < 5; i++)
        total[i] = sub1[i] + sub2[i];

    printf("Total marks of both subjects:\n");
    for(int i = 0; i < 5; i++)
        printf("%d ", total[i]);

    return 0;
}
