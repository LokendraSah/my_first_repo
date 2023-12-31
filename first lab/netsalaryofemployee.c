/*Write a program to read salary of an employee and calculate Travelling Allowance(TA), Daily Allowance(DA)
and Tax as TA is 10% of salary, DA is 12% of salary and Tax is 15% of salary. Finally calculate net salary.*/
//Code written by Lokendra Sah
//Program date:28/01/2023
#include<stdio.h>

int main(){
    float salary,TA,DA,Tax,netsalary;
    printf("Enter the salary of and employee:");
    scanf("%f",&salary);
    TA=0.1*salary;
    DA=0.12*salary;
    Tax=0.15*salary;
    netsalary=salary-(TA+DA+Tax);
    printf("The net salary of an employee is %f",netsalary);
    return 0;
}