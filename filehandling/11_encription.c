#include<stdio.h>
#include<string.h>
int main(){
      int count=0;
      int len;
    char str[100];
        FILE* ptr;
        ptr=fopen("Hello.txt","a+");
        rewind(ptr);
        while(fgets(str,100,ptr)!=NULL)
            len=strlen(str);
          rewind(ptr);

            for(int i=0;i<len;i++){
                char c= str[i];
                c=(int)c+10;
                c=(char)c;
                printf("%c",c);
                fputs(c,ptr);
                }
         
    return 0;
}