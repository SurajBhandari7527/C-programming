#include<stdio.h>
int main(){
    char str[]=" hello 1 \n hello 2 \n hello 3 \n";
    FILE* ptr ;
    ptr= fopen("Hello.txt","w");
    fputs(str, ptr);

    return 0;
}