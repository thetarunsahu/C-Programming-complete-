//sum of marks 
#include <stdio.h>
int main() {
    int marks[5], sum = 0;
    for(int i = 0; i < 5; i++) {
        printf("Enter mark %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    printf("Total = %d", sum);
    return 0;
}
