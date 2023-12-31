//Write a program to implement increment and decrement operator?
//Code written by Lokendra Sah
//Program date:03/02/2023
#include<stdio.h>

int main(){
    int a=4,b;
    // b=++a + ++a;
    // b=a++ + a++;
    // b=++a + a++;
    b=a++ + ++a;
    printf("b=%d",b);
    return 0;
}