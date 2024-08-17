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
char temp;
for(int i=0;i<=(count-1)/2;i++)
{
    temp=str[i];
    str[i]=str[count-1-i];
    str[count-1-i]=temp;
    }
   
    {
        printf("reverse string is %s",str);
    }
    return 0;
}