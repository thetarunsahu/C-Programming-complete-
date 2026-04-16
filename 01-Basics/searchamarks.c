//search a marks 
#include <stdio.h>
int main() {
    int marks[5], search, found = 0;
    for(int i = 0; i < 5; i++) {
        printf("Enter mark %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    printf("Enter mark to search: ");
    scanf("%d", &search);

    for(int i = 0; i < 5; i++) {
        if(marks[i] == search) {
            found = 1;
            break;
        }
    }

    if(found)
        printf("Mark found");
    else
        printf("Mark not found");

    return 0;
}
