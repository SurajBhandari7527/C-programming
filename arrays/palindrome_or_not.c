#include <stdio.h>
int main() { int i;
  printf("Enter the number of elements of the array: ");
  int n;
  scanf("%d",&n);
  int arr[n];
  printf("Enter the elements of the array");
  for(i=0;i<n;i++)
  { scanf("%d",&arr[i]);
      }
  int a=n-1;
  int count=0;
  for(i=0;i<n/2;i++)
  {
      if(arr[i]==arr[a])
      count=count+1;
      a=a-1;
  }
if(count==n/2)
printf("It is palindrome");
else printf("Its not palindrome");
return 0;
}
