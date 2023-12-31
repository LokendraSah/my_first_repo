//Write a program to find maximum of two numbers using conditional operator?
//Code written by Lokendra Sah
//Program date:03/02/2023
#include<stdio.h>

int main(){
    int a,b;
    printf("Enter any two numbers:");
    scanf("%d%d",&a,&b);
    // max=(a>b)?a:b;
    (a>b)?printf("The maximum number is %d",a):printf("The maximum number is %d",b);
    // printf("The maximum number is %d",max);
    return 0;
}
