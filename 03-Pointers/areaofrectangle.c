/*Write a C program using a function with arguments but no return value to calculate and display the area of a rectangle. */

#include <stdio.h>
#include <conio.h>

void rectangleArea(int length, int width) {
    int area = length * width;
    printf("The Area is: %d", area);
}

int main() {
    int l, w;
    printf("Enter length and width: ");
    scanf("%d %d", &l, &w);

    rectangleArea(l, w);
    return 0;
}
