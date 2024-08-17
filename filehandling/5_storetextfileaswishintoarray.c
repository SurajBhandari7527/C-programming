#include<stdio.h>
int main(){
    char str[50];
    char str1[100];
    printf("Enter the file name to see the inside of it : ");
    scanf("%s",str);

    FILE* ptr;
    ptr= fopen(str, "r");
        if(ptr==NULL) printf("INVALID FILE NAME");
    else{
    while(fgets(str1,100,ptr)!=NULL)
    printf("%s",str1);
    return 0;
    }
} 