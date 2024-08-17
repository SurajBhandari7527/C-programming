#include<stdio.h>
#include<string.h>
int main(){
      int count=0;
    char str[1000];
 char str2[1000];
        FILE* ptr;
        ptr=fopen("Hello.txt","r");
        while(fgets(str,100,ptr)!=NULL)
        fclose(ptr);

        FILE* ptr2;
        ptr2=fopen("suraj.txt","r");
        while(fgets(str2,100,ptr2)!=NULL)
        fclose(ptr2);

        FILE* ptr3;
        ptr3=fopen("copedofHello.txt","w");
        fputs(str,ptr3);
        fseek(ptr3,0,SEEK_END);
        fputs(str2,ptr3);
 
    return 0;
}