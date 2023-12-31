// Write a program to read the weight in gram and convert it to kilogram and gram.
// Code written by Lokendra Sah
// Program date:28/01/2023
#include <stdio.h>

int main()
{
    int g, k, remg;
    printf("Enter the weight in gram:");
    scanf("%d", &g);
    k = g / 1000;
    remg = g % 1000;
    printf("The weight is %d kilogram and %d gram", k, remg);
    return 0;
}