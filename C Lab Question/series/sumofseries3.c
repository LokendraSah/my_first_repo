//Write a program to find the sum of series of 1 + 1/x + 1/x^2 + 1/x^3 +....1/x^n?
//Code written by Lokendra Sah
//program date:6/3/2023
#include<stdio.h>
#include<math.h>
int main(){
    float sum=0,x,a,n,i;
    printf("Enter the number of terms:\n");
    scanf("%f",&n);
    printf("Enter the value of x:\n");
    scanf("%f",&x);
    printf("The intermediate terms are:\n");
    for(i=0;i<=n;i++)
    { 
        a=(1/(pow(x,i)));
        sum=sum+(1/(pow(x,i)));
        printf("%f\t",a);
    }
    printf("\nSum of series is %f",sum);
    return 0;
}