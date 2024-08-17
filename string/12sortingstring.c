#include<stdio.h>
#include<string.h>
int main(){ char str[100];
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    int i=0,count=1;
    while(str[i]!='\0')
    {
            count=count+1;
            i++;
    } 
    char temp;
    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-1-i;j++)
        {
            if(str[j]>str[j+1])
            {
                temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    for(int i=0;i<count;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}