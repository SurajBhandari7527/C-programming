#include <stdio.h>
int main() {
  printf("Enter the number of elements of the first array: ");
  int n;
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array");
  for(int i=0;i<n;i++)
  { scanf("%d",&arr[i]);
      }
      int sum=0;
      float avg;
      for(int i=0;i<n;i++)
      {
          sum=sum+arr[i];
      }
      (avg)=(float)sum/(n);
      
printf("The sum of array is array is:%d ",sum);
printf("The average of array is: %f",avg);
return 0;
}