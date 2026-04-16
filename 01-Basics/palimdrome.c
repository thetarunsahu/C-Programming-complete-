//Palindrome Number Check
#include <stdio.h>

int main() {
    int n, rev = 0, rem, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;  // original number store karte hain

    while (n != 0) {
        rem = n % 10;          // last digit nikalo
        rev = rev * 10 + rem;  // reverse number banao
        n /= 10;               // ek digit hatao
    }

    if (temp == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome");

    return 0;
}
