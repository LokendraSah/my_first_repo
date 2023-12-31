//Write a program to read the value of two variables, and compute sum, difference and product.
//Code written by Lokendra Sah 
//Program date:28/01/2023
#include<stdio.h>

int main(){
    int a,b,sum,diff,pro;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    sum=a+b;
    diff=a-b;
    pro=a*b;
    printf("The sum of two numbers is %d\n",sum);
    printf("The difference of two numbers is %d\n",diff);
    printf("The product of two numbers is %d\n",pro);
    return 0;
}