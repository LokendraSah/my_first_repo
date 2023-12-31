//Write a program to find the sum of series of 1 + x + x^2/2! + x^3/3! + x^4/4! + x^5/5! +....+x^n/n!?
//Code written by Lokendra Sah
//Program date:6/3/2023
#include<stdio.h>
#include<math.h>
int main(){
    float f=1,sum=1,n,i,x;
    printf("Enter the value or x:");
    scanf("%f",&x);
    printf("Enter the number of terms:");
    scanf("%f",&n);
    for(i=1;i<n;i++)
    {
        f=f*i;                    //f=1*1=1, f=1*2=2, f=2*3=6, f=6*4=24,
        sum=sum+(pow(x,i)/f);    //s=1+2^1/1=3, s=3+2^2/2=5, s=5+2^3/6=6.33,s=6.33+2^4/24=6.99997
    }
    printf("sum of series is %f",sum);
    return 0;
    // float x,sum,no_row;
	// int i,n;
	// printf("Input the value of x :");
	// scanf("%f",&x);
	// printf("Input number of terms : ");
	// scanf("%d",&n);
	// sum =1; no_row = 1;
	// for (i=1;i<n;i++)
	// {
	//   no_row = no_row*x/(float)i;
	//   sum =sum+ no_row;
	// }
	// printf("\nThe sum  is : %f\n",sum);
    // return 0;

}