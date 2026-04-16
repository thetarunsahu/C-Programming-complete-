//. Armstrong Number Check
#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, rem, digits = 0;
    float sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    int t = n;
    while (t != 0) {
        digits++;
        t /= 10;
    }
    while (n != 0) {
        rem = n % 10;
        sum += pow(rem, digits);
        n /= 10;
    }
    if ((int)sum == temp)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}
