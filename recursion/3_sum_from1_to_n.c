#include<stdio.h>
int sum(int a){ int s;
    if(a==0) return 0;
s=a+sum(a-1);
return s;
}
int main(){
    int a,s;
    printf("Enter n : ");
    scanf("%d",&a);
    s=sum(a);
    printf("The sum is: %d",s);
    return 0;
}