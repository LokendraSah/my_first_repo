//Write a Program to read the radius of a sphere and compute its Surface Area and Volume.
//Code written by Lokendra Sah
//Program date:28/01/2023
#include<stdio.h>
#define pi 3.14
int main(){
   float r,SA,V;
    printf("Enter the radius of sphere:");
    scanf("%f",&r);
    SA=4*pi*r*r;
    V=(4*pi*r*r*r)/3;
    printf("The surface area of sphere is %f\nThe Volume of sphere is %f",SA,V);
    return 0;
}