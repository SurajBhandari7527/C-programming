//Write a program in C to find the length of a string without using library functions.
#include<stdio.h>
#include<string.h>
int main(){
   char str[100];
   printf("Enter your string: ");
   scanf("%[^\n]",str);
int count=0,i=0;
while(str[i]!='\0')
{
    count=count+1;
    i++;
}
printf("the string length is: %d",count);
    return 0;
}