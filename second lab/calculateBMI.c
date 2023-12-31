/*Write a program that ask for your height in feet and inches and your weight in kilograms. Convert your
height in feet and inches to your height in inches. Then convert your height in inches to height in meter by 
multiplying it by 0.0254. Now divide your weight by square of your height in meter and finally assign output
to variable ratio?*/
//Code written by Lokendra Sah
//Program date:03/02/2023
#include<stdio.h>

int main(){
    float ft,in,kg,m,h,Bmi;
    printf("Enter your height in feet and inches:");
    scanf("%f%f",&ft,&in);
    printf("Enter your weight in kg:");
    scanf("%f",&kg);
    h=ft*12+in;
    m=h*0.0254;
    Bmi=kg/(m*m);
    printf("The required Bmi of your body is %f",Bmi);
    return 0;
}