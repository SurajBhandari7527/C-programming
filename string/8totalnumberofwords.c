//Write a program in C to count the total number of words in a string
//Write a program in C to count the total number of words in a string
#include<stdio.h>
#include<string.h>
int main(){ char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    int i,count=1;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            count=count+1;
        }
i++;
    }
    printf("The number of words in the string is: %d",count);
    return 0;
}