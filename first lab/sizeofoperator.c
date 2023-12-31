//Write a program to use sizeof operator to determine the size of different data types.
//Code written by Lokendra Sah
//Program date:28/01/2023
#include<stdio.h>

int main(){
    int a;
    float b;
    char c;
    double d;
    printf("The size of integer is %d\n",sizeof(a));
    printf("The size of float is %d\n",sizeof(b));
    printf("The size of character is %d\n",sizeof(c));
    printf("The size of double is %d\n",sizeof(d));

    return 0;
}