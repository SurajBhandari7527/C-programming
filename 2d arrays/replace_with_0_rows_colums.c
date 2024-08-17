// take an input of a matrix m*n. check whether any element of the matrix is 0, if 0 replace the corresponding rows and colums with 0
#include<stdio.h>
int main(){
int m,n;
printf("Enter the number of row and column of the  matrix: ");
scanf("%d %d",&m,&n);
int arr[m][n];
printf("Enter the matrix elements:");
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		scanf("%d",&arr[i][j]);
	}
}
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{ if(arr[i][j]==0)
		{
		    for(int k=0;k<n;k++)
		    {
		        arr[i][k]=0;
		    }
		    for(int l=0;l<m;l++)
		    {
		        arr[l][j]=0;
		    }
		}
	}
}

printf("The matrix is: \n");
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		printf("%d  ",arr[i][j]);
	}
	printf("\n");
}

return 0;
}
