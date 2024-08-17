#include <stdio.h>
#include<limits.h>
int main() {
  printf("Enter the number of elements of the array: ");
  int n;
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array");
  for(int i=0;i<n;i++)
  { scanf("%d",&arr[i]);
      
  }
printf("Enter the number to be deleted: ");
int a,p;
scanf("%d",&a);
for(int i=0;i<n;i++){
    if(arr[i]==a)
    p=i;
}
for(int i=p;i<n-1;i++)
{
    arr[i]=arr[i+1];
}
printf("The final array is: ");
 for(int i=0;i<n-1;i++)
 {
     printf("%d",arr[i]);
 } 
 return 0;
}