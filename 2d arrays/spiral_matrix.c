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
printf("\n");
int temp;
for(int i=0;i<m;i++)
{
    if(i%2!=0)
    {
        for(int k=0;k<n/2;k++)
        {
            temp= arr[i][k];
            arr[i][k]=arr[i][n-1-k];
            arr[i][n-1-k]=temp;
        }
    }
}
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