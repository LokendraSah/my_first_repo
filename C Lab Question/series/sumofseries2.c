//Write a program to find the sum of series of (2*3)/5 + (4*5)/7 + (6*7)/9+.....?
//Code written by Lokendra Sah
//program date : 6/3/2023
#include<stdio.h>

int main(){
    float sum=0,a,n,i;
    printf("Enter the number of terms:\n");
    scanf("%f",&n);
    printf("The series are\n");
    for(i=2;i<=2*n;i+=2)
    {
        a=((i*(i+1))/(i+3));
        sum=sum+((i*(i+1))/(i+3));
        printf("%f\t",a);
    }
    printf("\nsum of series is %f",sum);
    return 0;
}