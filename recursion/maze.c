#include<stdio.h>
int maze(int cr, int cc, int m, int n);
int maze(int cr, int cc, int m, int n){
  int result;
  if(cr>m || cc>n) return 0;
  if((cr==m && cc==n-1) || (cr==m-1 && cc==n)) return 1;
  result=maze(cr+1,cc,m,n)+maze(cr,cc+1,m,n);
  return result;
}
int main(){
    int m,n;
    printf("Enter rows and columns of the maze to reach:");
    scanf("%d %d",&m,&n);
    int ways;
    ways=maze(1,1,m,n);
    printf("The no. of ways= %d",ways);
}