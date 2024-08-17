 #include<stdio.h>
int main(){
int n;
printf("Enter the size of the sqaure matrix: ");
scanf("%d",&n);
int arr[n][n];
printf("Enter the matrix elements:");
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		scanf("%d",&arr[i][j]);
	}
}
for(int i=1;i<n;i++) // inserting of zeros
{
	for(int j=0;j<i;j++)
	{
		arr[i][j]=0;
	}
}
// printing of array
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		printf("%d ",arr[i][j]);
	}
	printf("\n");
}
	
return 0;
}
}

