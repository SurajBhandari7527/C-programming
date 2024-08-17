#include<stdio.h>
#include<string.h>
int main(){
   char str[100];
   printf("Enter your string: ");
   scanf("%[^\n]",str);

    for(int i=0;i<5;i++){
        printf("%c",str[i]);
    }
    return 0;
}