// Binary search without using recursion
#include <stdio.h>
int main() {
    int m;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&m);
    int arr[m];
    printf("Enter the array elements: ");
    for(int i=0;i<m;i++){
      scanf("%d",&arr[i]);  
    }
       printf("The inputed array is: \n");
    for(int i=0;i<m;i++){
        printf("%d",arr[i]);
    }
     printf(" \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<m-1;j++)
        {   if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
            }
        
    }
     printf("The sorted array is: \n");
    for(int i=0;i<m;i++){
        printf("%d",arr[i]);
    }
  printf(" \n");
   int n,mid;
   printf("Enter the number to find in the array: ");
   scanf("%d",&n);
   int l=0,r=m-1;
  for(int i=0;i>-1;i++){
      mid=(l+r)/2;
      if(arr[mid]==n) break;
      else if(arr[mid]<n){
          l=mid;
          mid=mid+1;
      }
      else if(arr[mid]>n){
          r=mid;
          mid=mid-1;
      }
  }
  
   printf("The element is at the index: %d", mid);
    return 0;
}