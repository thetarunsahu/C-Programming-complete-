//count<50
#include <stdio.h>
int main() {
    int marks[5], count = 0;
    for(int i = 0; i < 5; i++) {
        printf("Enter mark %d: ", i+1);
        scanf("%d", &marks[i]);
        if(marks[i] > 50)
            count++;
    }
    printf("Students scoring above 50: %d", count);
    return 0;
}
