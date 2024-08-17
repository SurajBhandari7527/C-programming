// Write a program in C to split strings by space into words.
#include<stdio.h>
#include<string.h>
int main(){
   int n;
   printf("Enter the size of the string: ");
   scanf("%d",&n);
   char str[n];
   printf("Enter your string: ");
   scanf(" %[^\n]",str);

    for(int i=0;i<n;i++){
        if(str[i]==' ') printf("\n");
        else printf("%c",str[i]);
    }
    return 0;
}