// you need to get to the stair n from the ground, you are permitted to climb single or double stair at a time
#include<stdio.h>
int stair(int n);
int stair(int n){
  int result;
  if(n==1) return 1;
  if(n==2) return 2;
  result=stair(n-1)+stair(n-2);
  return result;
}
int main(){
    int n;
    printf("Enter value of nth value of stair to reach:");
    scanf("%d",&n);
    int ways;
    ways=stair(n);
    printf("The no. of ways= %d",ways);
}