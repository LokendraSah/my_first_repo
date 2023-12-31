//Write a program to find whether the entered number is odd or even using conditional operator?
//Code written by Lokendra Sah
//Program date:03/02/2023
#include<stdio.h>

int main(){
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    (a%2==0)?printf("%d is even!",a):printf("%d is odd!",a);
    return 0;
}