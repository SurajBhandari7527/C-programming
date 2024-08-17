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
printf("Enter the number to be searched: ");
int a,p;
scanf("%d",&a);
for(int i=0;i<n;i++){
    if(arr[i]==a)
    p=i;
}
printf("The number is at the index: %d",p);
 return 0;
