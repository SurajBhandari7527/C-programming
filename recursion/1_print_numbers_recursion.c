#include<stdio.h>
void num(int a, int b){
    if(a==0) return;
printf("%d \n",b);
num(a-1,b+1);
return;
}
int main(){
    int a;
    printf("Enter n upto which numbers to be printed: ");
    scanf("%d",&a);
    num(a,1);
    return 0;
}