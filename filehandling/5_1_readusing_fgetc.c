#include<stdio.h>
int main(){
    char str[50];
    char str1[100];
    printf("Enter the file name to see the inside of it : ");
    scanf("%s",str);

    FILE* ptr;
    ptr= fopen(str, "a+");
        if(ptr==NULL) printf("INVALID FILE NAME");
    else{
    for(int i=0;i<5;i++){
        char c = fgetc(ptr);
        printf("%c",c);
    }

    return 0;
    }
} 