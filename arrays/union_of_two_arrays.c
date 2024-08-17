// logic= merge both arrays and delete the duplicates
#include <stdio.h>



int main() {
  printf("Enter the number of elements of the first array: ");
  int n;
  scanf("%d",&n);  // first array input
  int arr[n];
  printf("Enter the elements of the array");
  for(int i=0;i<n;i++)
  { scanf("%d",&arr[i]);
      }
       printf("Enter the number of elements of the second array: ");
  int n1;
  scanf("%d",&n1); // second array input
  int brr[n1];
  printf("Enter the elements of the array");
  for(int i=0;i<n1;i++)
  { scanf("%d",&brr[i]);
      }
      for(int i=0;i<n1;i++)
      {
          arr[n+i]=brr[0+i]; //merging of two arrays in arr[]
      }
      int count =0,dup_num;
      for(int i=0;i<n+n1-count;i++)
      {  
          for(int j=i+1;j<n+n1-count;j++)
          {
              if(arr[i]==arr[j])
              {
                  
                  dup_num=arr[j];
                   for(int k=j;k<n+n1-count;k++)
    { arr[k]=arr[k+1];
         }j--;
            count=count+1;
          }
      }}
      for(int i=0;i<n+n1-count;i++)
      {
          printf("%d",arr[i]);
      }
return 0;
}