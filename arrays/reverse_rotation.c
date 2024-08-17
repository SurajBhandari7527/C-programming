//I got this code by mistake. I wanted to do normal rotation but did rverse by mistake. lol. but its tough
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
int a=n-1;
for(int i=0;i<k;i++)
{
    int temp=arr[n-k+i];
    for(int j=0;j<=a-k+i;j++)
    {
        arr[n-k-j+i]=arr[n-k-j+i-1];
        
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