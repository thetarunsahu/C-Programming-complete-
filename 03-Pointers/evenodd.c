/* Write a C program with a function int isEven(int n) that checks whether a given number is even or odd.*/

#include <stdio.h>
#include <conio.h>
int isEven(int n) {
    if(n % 2 == 0) {
        return 1; // It is even
    } else {
        return 0; // It is odd
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isEven(num)) {
        printf("The number is Even.");
    } else {
        printf("The number is Odd.");
    }
    return 0;
}
