    /*Write a C program using a user-defined function to find the sum of two numbers entered by the user. */
    #include <stdio.h>
    #include <conio.h>


int calculateSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calling the function
    sum = calculateSum(num1, num2);
    
    printf("The sum is: %d", sum);
    return 0;
}
