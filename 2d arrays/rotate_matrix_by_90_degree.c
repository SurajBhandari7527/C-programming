#include<stdio.h>
int main(){
int m,n;
printf("Enter the number of row and column of the  matrix: ");
scanf("%d %d",&m,&n);
int arr[m][n];
int arr1[n][m];
printf("Enter the matrix elements:");
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		scanf("%d",&arr[i][j]);
	}
}
printf("The entered matrix is: \n");
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		printf("%d  ",arr[i][j]);
	}
	printf("\n");
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		arr1[i][j]=arr[m-1-j][i];
	}
}
printf("\n");
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		printf("%d  ",arr1[i][j]);
	}
	printf("\n");
}
	
return 0;
}
