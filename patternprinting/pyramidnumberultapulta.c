/*  1               print this pattern
   121
  12321
 1234321
123454321
*/

#include<stdio.h>
int main(){
    int n,a;
   
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    { 
        for(int j=n-1;j>=i;j--)
        {printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
            
        }
        a=i;
        for(int l=1;l<=i-1;l++)
        {
            printf("%d",a-1);
            a=a-1;
        }
        printf("\n");
    }
    return 0;
}