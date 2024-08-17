/* Pattern
1
01
010
1010
10101*/
#include<stdio.h>
int main() 
{
int a=0,i,n,j;
printf("Enter the number of rows: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
		if(a==0)5
		{printf("1");
		a=1;}
		else
		{
			printf("0");
			a=0;
		}
	}
	printf("\n");
	}
	return 0;
	
}