//Write a program to solve the tower of hanoi problem?
#include<stdio.h>
TOH(int n, char source, char destination, char aux){
    if(n==1){
        printf("\n Move disk 1 from %c to %c\n",source, destination);
    }
    else{
        TOH(n-1,source, aux, destination);
        printf("\n Move disk %d from %c to %c\n",n, source,destination);
        TOH(n-1,aux, destination,source);
    }
}
int main(){
    int n;
    printf("Enter the number of disk:");
    scanf("%d",&n);
    TOH(n,'A','C','B');
    return 0;
}