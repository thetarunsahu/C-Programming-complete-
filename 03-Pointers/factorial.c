/* Write a C program that uses a function to find the factorial of a number using recursion.*/

#include <stdio.h>
#include <conio.h>

int factorial(int n) {
    if (n == 0) {
        return 1; // Base case: factorial of 0 is 1
    } else {
        return n * factorial(n - 1); 
    }
}

int main() {
    int num, result;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    result = factorial(num);
    printf("Factorial of %d is %d", num, result);
    return 0;
}
