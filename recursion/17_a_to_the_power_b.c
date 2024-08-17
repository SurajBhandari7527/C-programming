#include<stdio.h>
int power(int a, int b){ 
    int p;
    if(b==0) return ;
 p= a*power(a,b-1);
return p;
}
int main(){
    int a,b,p;
    printf("Enter a and b for a^b: ");
    scanf("%d %d",&a,&b);
    p=power(a,b);
    printf("a^b is %d",p);
    return 0;
}