//average marks 
#include <stdio.h>
int main() {
    int marks[5], sum = 0;
    float avg;
    for(int i = 0; i < 5; i++) {
        printf("Enter mark %d: ", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    avg = sum / 5.0;
    printf("Average = %.2f", avg);
    return 0;
}
