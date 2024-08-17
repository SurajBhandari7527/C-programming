//WAP to swap second and third word of a given string
#include<stdio.h>
#include<string.h>
int main(){ int x=0;
int arr[20];
char str[100];

    printf("Enter the string: ");
    scanf(" %[^\n]",str);
    int len=strlen(str);
    { for(int i=0;i<len;i++)
      if(str[i]==' ')
      {
          arr[x]=i; // storage of space location
          x++;
      }
      for(int i=0;i<(arr[2]-arr[1]);i++)
      { char temp=str[arr[2]-1];
          for(int j=0;j<arr[2]-arr[0]-1;j++)
          {     str[arr[2]-1-j]=str[arr[2]-2-j];
               
              
          } str[arr[0]]=temp;
      }

    }
    for(int i=0;i<len;i++){
        printf("%c",str[i]);
    }
    return 0;
}