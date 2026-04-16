//lowest marks.
#include <stdio.h>
int main() {
    int marks[5], min;
    for(int i = 0; i < 5; i++) {
        printf("Enter mark %d: ", i+1);
        scanf("%d", &marks[i]);
    }
    min = marks[0];
    for(int i = 1; i < 5; i++) {
        if(marks[i] < min)
            min = marks[i];
    }
    printf("Lowest mark = %d", min);
    return 0;
}
