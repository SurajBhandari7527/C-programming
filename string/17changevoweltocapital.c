//Write a C program to convert vowels into uppercase characters in a string.
#include<stdio.h>
#include<string.h>
int main(){ int a=0;
char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    { for(int i=0;i<strlen(str);i++)
      if(str[i]=='a' || str[i]=='e'||str[i]=='i'|| str[i]=='o'|| str[i]=='u')
      { 
          str[i]= (int)str[i]-32;
      }

    }
    for(int i=0;i<strlen(str);i++){
        printf("%c",str[i]);
    }
    return 0;
}