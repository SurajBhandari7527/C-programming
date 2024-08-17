// Binary search using recursion
#include <stdio.h>
int bisearch(int arr[],int e, int l, int r){
    int pos;
    int  mid=(l+r)/2;
    if(arr[mid]==e) return mid;

    if(arr[mid]>e){
    pos=bisearch(arr, e,l,mid-1);
    }
    if(arr[mid]<e){
    pos=bisearch(arr, e,mid+1,r);
    }
    return pos;
}

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
    
   int n;
   printf("Enter the number to find in the array: ");
   scanf("%d",&n);
   int pos=bisearch(arr,n,0,m-1);
   printf("The element is at the index: %d", pos);
    return 0;
}