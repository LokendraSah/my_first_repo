//Write a program to find minimum of three numbers using nested if else statement?
#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter any three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
        {
            printf("%d is minimum",a);
        }
        else
        {
            printf("%d is minimum",c);
        }
    }
    else
    {
        if(b<c)
        {
            printf("%d is minimun",b);
        }
        else
        {
            printf("%d is minimum",c);
        }
    }
    return 0;
}