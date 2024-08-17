#include<stdio.h>
#include<string.h>
int main(){
      int count=0;
    char str[1000];

        FILE* ptr;
        ptr=fopen("Hello.txt","a+");
        rewind(ptr);
           printf("%d",ftell(ptr));
        while(fgets(str,100,ptr)!=NULL)
        fclose(ptr);
        FILE* ptr2;
        ptr2=fopen("copedofHello.txt","w");
        fputs(str,ptr2);
 
    return 0;
}