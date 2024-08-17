#include<stdio.h>
#include<stdlib.h>
int main(){
char str[100];
FILE *ptr;
ptr = fopen("Suraj.txt", "r+");
fseek(ptr,3,SEEK_SET);                  // SETTING POINTER AT LOCATION THIRD OF THE TEXT
while(fgets(str,100,ptr)!=NULL)
{ printf("%s",str);
}
fputs("hello",ptr);      // r+ mode allow both reading and writing
fclose(ptr);
return 0;
}
