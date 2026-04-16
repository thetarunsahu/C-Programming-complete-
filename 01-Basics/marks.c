//marks of 5 studnets 
#include<stdio.h>
int main (){
    int marks[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter marks of student %d:",i+1);
        scanf("%d",&marks);
    }
    printf("marks are:\n");
    for(int i=0;i<5;i++)
    {
        printf("%d\n",marks[5]);

    }
    return 0;
}