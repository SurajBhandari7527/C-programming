#include<stdio.h>
int num(int a, int b,int c){int d;
    if(c==0) return b;
d=num(b,a+b,c-1);
return d;
}
int main(){
    int a,b;
    printf("Enter n to print nth fibonacci series: ");
    scanf("%d",&a);
    b=num(0,1,a);
    printf("%dth fibonacci series is %d",a,b);
    return 0;
}