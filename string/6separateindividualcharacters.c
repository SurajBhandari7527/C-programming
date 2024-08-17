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
for(int i=0;i<count;i++)
 {
printf("%c  ",str[i]);
 }
    return 0;
}