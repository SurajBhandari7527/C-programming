#include <stdio.h>
int main() {
  printf("Enter the number of elements of the array: ");
  int n;
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array");
  for(int i=0;i<n;i++)
  { scanf("%d",&arr[i]);
      }
printf("Enter the value of k for rotation: ");
int k;
scanf("%d",&k);
if(k>n)
k=k%n;                                                          //this step is necessary
for(int i=0;i<k;i++)
{
    int temp=arr[n-1];
    for(int j=0;j<n-1;j++)
    {
        arr[n-1-j]=arr[n-2-j];
        
    }
    arr[0]=temp;
}
printf("The rotated array is: ");
for(int i=0;i<n;i++)
{
    printf("%d",arr[i]);
}
return 0;
}