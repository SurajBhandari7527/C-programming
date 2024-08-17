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
       printf("Enter the number of elements of the second array: ");
  int n1;
  scanf("%d",&n1);
  int brr[n1];
  printf("Enter the elements of the array");
  for(int i=0;i<n1;i++)
  { scanf("%d",&brr[i]);
      }
for(int i=0;i<n1;i++)
{
    arr[n+i]=brr[i];
}
printf("The merged array is: ");
for(int i=0;i<n+n1;i++)
{
    printf("%d",arr[i]);
}
return 0;
}