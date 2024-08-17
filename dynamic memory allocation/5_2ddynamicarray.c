//Create a C program that dynamically allocates memory for a
//  2D array of integers. Prompt the user to enter the number of rows and columns,
//   allocate memory accordingly, and then prompt the user to enter the elements of the array. 
//   Finally, calculate and print the sum of each row and column.
#include <stdio.h>
#include<stdlib.h>
int main() {
   int m,n;
   printf("Enter the no. of rows of the array: ");
   scanf("%d",&m);
    printf("Enter the no. of column of the array: ");
   scanf("%d",&n);
   int** ptr;
   ptr=(int**) calloc(m,sizeof(int));
   for(int i=0;i<m;i++)
   {
      ptr[i]=(int*) calloc(n,sizeof(int));
   }
   printf("Enter the elements of the array: ");
   for(int i=0;i<m;i++)
   { for(int j=0;j<n;j++){
       scanf("%d",&ptr[i][j]);
   }
   }
   printf("The entered array is: \n");
   for(int i=0;i<m;i++)
   { for(int j=0;j<n;j++){
       printf("%d",ptr[i][j]);
   } printf("\n");
   }
   int sum=0;
   for(int i=0;i<m;i++)
   {for(int j=0;j<n;j++){
       sum=sum+ptr[i][j];
   }
    printf("The sum of %d th row of the array : %d\n",i+1,sum);
    sum=0;
   }
   sum=0;
   for(int i=0;i<m;i++)
   {for(int j=0;j<n;j++){
       sum=sum+ptr[j][i];
   }
    printf("The sum of %d th column of the array : %d\n",i+1,sum);
    sum=0;
   }
  
    return 0;
}