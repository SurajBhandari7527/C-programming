#include <stdio.h>
int main() {
  printf("Enter the number of elements of the first array: ");
  int n,add;
  scanf("%d",&n);  // first array input
  int arr[n];
  printf("Enter the elements of the array");
  for(int i=0;i<n;i++)
  { scanf("%d",&arr[i]);
      }
      int maxcount=1,mode;
      for(int i=0;i<n;i++)
      { int count=0;
          for(int j=i+1;j<n;j++)
          {
              if(arr[i]==arr[j])
              {
                  count=count+1;
                  if(count>maxcount)
                  {
                      maxcount=count;
                      mode=arr[i];
                  }
              }
          }
      }
      printf("The mode is: %d",mode);
          return 0;  
  }