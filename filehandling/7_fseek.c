#include<stdio.h>
int main(){
        FILE* ptr;
        ptr=fopen("suraj.txt","r");
        char str[100];
        fseek(ptr,6,SEEK_SET);
        if(fgets(str,100,ptr)!=NULL)
        printf("%s",str);
        rewind(ptr);
        if(fgets(str,100,ptr)!=NULL)
        printf("%s",str);
        printf(" %d",ftell(ptr)); // it tells where the pointer is right now
    return 0;
}