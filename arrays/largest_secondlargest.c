#include <stdio.h>
#include<limits.h>
int main() {
  printf("Enter the number of elements of the array");
  int n,smax,i,j;
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array");
  for(i=0;i<n;i++)
  { scanf("%d",&arr[i]);
      
  }
  int max= INT_MIN;
  smax= INT_MIN;
for(i =0;i<n;i++)
{
    if(arr[i]>max)
    { 
        max= arr[i];
    }
    
}
for(i =0;i<n;i++)
{
    if(arr[i]>smax && arr[i]!=max)
    smax=arr[i];
}
printf("The largest number is: %d \n",max);
printf("The second largest number is: %d",smax);
    return 0;
}
