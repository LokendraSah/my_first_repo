#include<stdio.h>
#include<string.h>

int main(){
    char str1[50],str2[50];
    printf("Enter the string:");
    gets(str1);
    strcpy(str2,str1);
    strrev(str2);
    if(strcmp(str1,str2)==0)
    {
        printf("%s is palindrome",str1);
    }
    else{
        printf("%s is not palindromme",str1);
    }
    return 0;
}