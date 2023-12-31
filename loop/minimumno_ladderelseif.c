//WAP to find the minimum of four numbers using ladder else if statement?
#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter the any four numbers:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a<b&&a<c&&a<d)
    {
        printf("%d is minimum",a);
    }
    else if(b<c&&b<d)
    {
        printf("%d is minimum",b);
    }
    else if(c<d)
    {
        printf("%d is minimum",c);
    }
    else
    {
        printf("%d is minimum",d);
    }
    return 0;
}