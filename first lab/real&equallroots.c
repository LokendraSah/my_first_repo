//Write a program to calculate real and equal roots of a quadratic equation.
//Code written by Lokendra Sah
//Program date:28/01/2023
#include<stdio.h>

int main(){
    float a,b,Root;
    printf("Enter the value of a and b:");
    scanf("%f%f",&a,&b);
    Root=(-b/(2*a));
    printf("The real and equal roots of quadratic equation is %f",Root);
    return 0;
}