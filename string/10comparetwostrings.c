//Write a program in C to compare two strings without using string library functions
#include<stdio.h>
#include<string.h>
int main(){ 
      char str1[100];
    printf("Enter the first string: ");
    scanf(" %[^\n]", str1);
    getchar(); //IDK why but without this second input is not taken
      char str2[100];
    printf("Enter the second string: ");
    scanf(" %[^\n]", str2);
    
    int x=0,y=0,a=0;
    int i=0;
    while(str1[i]!='\0')
    {
        x++;
        i++;
    }
    i=0;
       while(str2[i]!='\0')
    {
        y++;
        i++;
    }
    if(x!=y){
        printf("The strings are not equal");
    }
    else
    {
        for(int i=0;i<x;i++)
        {
            if(str1[i]!=str2[i])
{
      a=-1;
    break;
}   


}
if(a==-1)
{ printf("The strings are not equal");}
else 
printf("The strings are equal");
    }  
    return 0;}
  