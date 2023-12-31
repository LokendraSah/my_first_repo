//Write a program to find the sum of series of 1 + 2/2! + 3/3! + 4/4! +.......+ n/n!?
//Code written by Lokendra Sah
//Program date:6/3/2023
#include<stdio.h>

int main(){

float i,f=1,num,sum=0,a;
printf("Enter the number of terms:\n ");
scanf("%f",&num);
printf("The series are \n");
for(i=1;i<=num;i++)
{
    
    f=(f*i);           //f=1*1=1, f=1*2=2, f=2*3=6, f=6*4=24
    sum=(sum+(i/f));     //sum=0+1/1=1, s=1+(2/2)=2, s=2+(3/6)=2.5, s=2.5+(4/24)=2.6667
    a=(i/f);
    printf("%f\t",a);
}
printf("\nsum of series is  %f",sum);
    return 0;
}