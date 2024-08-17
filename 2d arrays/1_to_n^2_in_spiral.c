// given a positive integer n, generate a matrix n*n filled from 1 to n^2 in spiral order
 #include<stdio.h>
int main(){
int m,n;
printf("Enter the order of the square  matrix: ");
scanf("%d",&m);
n=m;
int arr[m][m];
int a=1;
while(a<=m*m)
{
for(int i=0;i<m;i++)
{ if(i%2==0)
{
    for(int j=0;j<n;j++)
    {
        arr[i][j]=a;
        a=a+1;
    }
    
}
else
for(int j=0; j<n;j++)
{
  arr[i][n-1-j]=a;
        a=a+1;
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