//Write ADT implementation on Complex number?
#include<stdio.h>
struct complex 
{
    int real;
    int img;
};
void add(struct complex c1, struct complex c2);
void multiply(struct complex c1, struct complex c2);
int main()
{
     struct complex a,b;
     printf("Enter the first complex number:");
     scanf("%d%d",&a.real,&a.img);
     printf("Enter the second complex number:");
     scanf("%d%d",&b.real,&b.img);
     add(a,b);
     multiply(a,b);
     return 0;
}
void add(struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real=c1.real+c2.real;
    c3.img=c1.img+c2.img;
    printf("The sum of complex number is %d+i%d\n",c3.real,c3.img);
}
void multiply(struct complex c1, struct complex c2)
{
    struct complex c3;
    c3.real=((c1.real*c2.real)-(c1.img*c2.img));
    c3.img=((c1.real*c2.img)+(c1.img*c2.real));
    printf("The multiplication of two complex number is %d+i%d\n",c3.real,c3.img);
}