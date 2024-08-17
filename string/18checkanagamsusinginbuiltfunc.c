// Check whether the inputed strings are anagrams or not?
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    int x=0;
    printf("Enter the first string: ");
    scanf(" %[^\n]",str1);
    getchar();
       printf("Enter the first string: ");
    scanf(" %[^\n]",str2);
    printf("Inputed string: %s\n",str1);
     printf("Inputed string: %s\n",str2);
     // sorting the str1: 
     int len1=strlen(str1);
     int len2=strlen(str2);
     if(len1!=len2) x=-1;
     else{
     for(int i=0;i<len1;i++){
         for(int j=0;j<len1;j++){
             if(str1[j]>str1[j+1])
             {
                 char temp=str1[j];
                 str1[j]=str1[j+1];
                 str1[j+1]=temp;
             }
         }
     }
          // sorting the str2: 
     for(int i=0;i<len2;i++){
         for(int j=0;j<len2;j++){
             if(str2[j]>str2[j+1])
             {
                 char temp=str2[j];
                 str2[j]=str2[j+1];
                 str2[j+1]=temp;
             }
         }
     } 
         
         int x= strcmp(str1,str2);
     if(x==0) printf("The strings are  anagrams");
     else printf("The strings are not anagrams");
     }
    return 0;
}