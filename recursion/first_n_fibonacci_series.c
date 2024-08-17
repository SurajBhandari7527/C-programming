#include<stdio.h>
int fibo(int a);
int fibo(int a){
    int result;
    if(a==1 || a==2) return 1;
    result=fibo(a-1)+fibo(a-2);
    return result;
}
int main(){
    int a,b;
    printf("Enter value of n upto which fibonacci series is to be printed:");
    scanf("%d",&a);
    int fi;
    for(int i=1;i<=a;i++)
   {fi= fibo(i);
   printf("%d ",fi);
   }
    
}