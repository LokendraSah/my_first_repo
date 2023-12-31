//Write a program to find the sum of series 1+3+7+15+...
//Code written by Lokendra Sah
//Program date:6/3/2023
#include<stdio.h>
#include<math.h>
int main(){
    int a,sum=0,n,i;
    printf("Enter the number of terms:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=(pow(2,i)-1);
        sum=sum+(pow(2,i)-1);
        printf("%d\t",a);
    }
    printf("\nSum of Series are %d",sum);
    return 0;
}