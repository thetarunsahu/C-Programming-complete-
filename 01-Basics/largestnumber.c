#include<stdio.h>
int main (){
    int a, b ;
    printf("Enter two number:");
    scanf("%d %d",&a,&b);
    if(a > b)
    printf("%d is the largest number",a);
    else
    printf("%d is the largest number",b);

    return 0; 
}