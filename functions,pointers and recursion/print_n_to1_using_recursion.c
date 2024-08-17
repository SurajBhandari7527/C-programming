#include<stdio.h>
int func(int a){
    int b=a;
    if(b>=1){
    printf("%d\n",b);
    b=func(a-1);}
}
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    func(a); 
    return 0;
}