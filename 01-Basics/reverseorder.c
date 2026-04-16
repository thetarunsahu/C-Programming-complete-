//Reverse order
#include <stdio.h>
int main() {
    int marks[5];
    for(int i = 0; i < 5; i++) {
        printf("Enter mark %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    printf("Marks in reverse order:\n");
    for(int i = 4; i >= 0; i--) {
        printf("%d ", marks[i]);
    }
    return 0;
}
