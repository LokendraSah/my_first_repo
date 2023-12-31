//Write a program to read the Principle, Time, and Rate and calculate the interest and total amount.
//Code written by Lokendra Sah
//Program date:28/01/2023
#include<stdio.h>

int main(){
    float P,T,R,Si,TA;
    printf("Enter the value of Principle, Time and Rate:");
    scanf("%f%f%f",&P,&T,&R);
    Si=(P*T*R)/100;
    TA=P+Si;
    printf("The required Simple interest is %f\n The Total amount is %f",Si,TA);
    return 0;
}