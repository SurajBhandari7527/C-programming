#include<stdio.h>
int main(){
    char str[100]=" Hello is a greeting we all should do. ";
    FILE* ptr;
    ptr=fopen("Hello.txt","w");
    fputs(str, ptr);
   
    return 0;
}