#include<stdio.h>
#include<string.h>
int main(){
   int n;
   printf("Enter the size of the string: ");
   scanf("%d",&n);
   char str[n];
   printf("Enter your string: ");
   scanf(" %[^\n]",str);

    // for(int i=0;i<5;i++){
    //     printf("%c",str[i]);
    // }
    printf("%s",str);
    return 0;
}