#include<stdio.h>
#include<string.h>
int main(){
   char str[100];
   printf("Enter your string: ");
   scanf("%[^\n]",str);

    {
        printf("%s",str);
    }
    return 0;
}