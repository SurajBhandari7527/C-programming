/*  *                print this pattern
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *      */
#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    if(n%2==0)
    printf("The number should be odd.");
    else
   { n=(n+1)/2;
    for(int i=1;i<=n;i++)
    {
        for(int j=n-1;j>=i;j--)
        {printf(" ");
        }
        for(int k=1;k<=2*i-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
     for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {printf(" ");
        }
        for(int k=2*(n-i)-1;k>=1;k--)
        {
            printf("*");
        }
        printf("\n");
    }
   }
    return 0;
}