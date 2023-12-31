//Write a program to read the radius of circle and compute its area and circumference?
//Code written by Lokendra Sah
//Program date:28/01/2023
#include<stdio.h>
#define pi 3.14
int main(){
    float r,A,C;
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    A=pi*r*r;
    C=2*pi*r;
    printf("The area of circle is %f\n The circumference of circle is %f",A,C);
    return 0;
}