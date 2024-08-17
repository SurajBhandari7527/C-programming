#include<stdio.h>
void gm(int n);
void gm(int n){
    if(n>0)
    {printf("good morning\n");
    gm(n-1);
    }
    return ;
}
int main(){ 
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    gm(n);
    return 0;
}