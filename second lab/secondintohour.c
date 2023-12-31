//Write a program to take seconds as input and convert it into hour, minutes and seconds?
//Code written by Lokendra Sah
//Program date:03/02/2023
#include<stdio.h>

int main(){
    int sec,hr,min,remsec;
    printf("Enter the time in seconds:");
    scanf("%d",&sec);
    hr=sec/3600;
    remsec=sec%3600;
    min=remsec/60;
    sec=remsec%60;
    printf("The required time is %d hour %d minutes and %d seconds",hr,min,sec);
    return 0;
}