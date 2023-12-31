// Write ADT implementation of rational number?
//Code written by Lokendra Sah
#include <stdio.h>
struct rational
{
    int num;
    int deno;
};
void add(struct rational r1, struct rational r2);
void multiply(struct rational r1, struct rational r2);
int hcf(int a, int b);
int main()
{
    struct rational a, b;
    printf("Enter the first rational number:");
    scanf("%d%d", &a.num, &a.deno);
    printf("Enter the second rational number:");
    scanf("%d%d", &b.num, &b.deno);
    add(a, b);
    multiply(a, b);
    return 0;
}
int hcf(int a, int b)
{
    int h;
    for (int i = 1; i < a; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            h = i;
        }
    }
    return h;
}
void add(struct rational r1, struct rational r2)
{
    struct rational r3;
    if (r1.deno == 0 || r2.deno == 0)
    {
        printf("Denominator never be zero");
    }
    else
    {
        r3.num = ((r1.num * r2.deno) + (r1.deno * r2.num)) ;
        r3.deno = (r1.deno * r2.deno);
        r3.num= (r3.num/hcf(r3.num,r3.deno));
        r3.deno=(r3.deno/hcf(r3.num,r3.deno));
        printf("The sum of two rational numbers is %d/%d\n", r3.num, r3.deno);
    }
}
void multiply(struct rational r1, struct rational r2)
{
    struct rational r3;
    if (r1.deno == 0 || r2.deno==0)
    {
        printf("Denominator never be zero ");
    }
    else
    {
        r3.num=((r1.num*r2.num)/hcf(r3.num,r3.deno));
        r3.deno=((r1.deno*r2.deno)/hcf(r3.num,r3.deno));
        printf("The multiply of two rational numbers is %d/%d",r3.num,r3.deno);
    }
}