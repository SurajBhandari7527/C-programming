// this code clearifies the after recursion concept
/* int func(){
    base condition
    code 
    recursive call
    code                            this code applies while coming back to function call in each calls
    return;
}*/
#include<stdio.h>
void num(int a){
    if(a==0) return;
num(a-1);
printf("%d \n",a);      // this code runs after the forward recursion(function call is finished) firsly n..>0 then 0..>n
return;
}
int main(){
    int a;
    printf("Enter n upto which numbers to be printed: ");
    scanf("%d",&a);
    num(a);
    return 0;
}