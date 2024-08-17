#include<stdio.h>
#include<string.h>
int main(){
      int count=0;
    char str[100];
        FILE* ptr;
        ptr=fopen("Hello.txt","a+");
        while(fgets(str,100,ptr)!=NULL){
            int len=strlen(str);
          
            for(int i=0; i<len;i++){
            if(str[i]=='\n')
            count=count+1;
            }
        }
        
        printf("The number of lines are: %d",count+1);
         
    return 0;
}