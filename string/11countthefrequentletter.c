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
    int max=0,count1=1;
    char alpha;
for(int i=0;i<count;i++)
{
    for(int j=i+1;j<count;j++)
    if(str[i]==str[j] && str[i]!=-1)
    {
        count1=count1+1;
        if(count1>max)
        {max=count1;
        alpha=str[i];}
        str[j]=-1;
    } count1=1;
}
printf("The max frequency letter is %c with frequency : %d",alpha,max);
    return 0;
}