#include<stdio.h>
int count=0;
int countnum(int n){
    if(n<10) return 1;
      countnum(n/10);
    count=count+1;
    return count+1;
    
}

int main() {
    int n;
    printf("Enter any number");
    scanf("%d",&n);
    int count=countnum(n);
    printf("The number of digits is %d",count);
  return 0;
}