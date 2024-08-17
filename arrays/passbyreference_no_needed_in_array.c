// it is to clear that when an array is passed from main function to the other then the array is the same and the changes made inside 
// the function can make changes to the main function of the array(its already like pass by reference)
#include <stdio.h>
void sum(int n, int arr[]);
void sum(int n, int arr[]){
arr[0]=3;                   // first element of array is changed to 3 inside this function sum()
    return ;
}

int main() {
  printf("Enter the number of elements of the first array: ");
  int n,add;
  scanf("%d",&n);  // first array input
  int arr[n];
  printf("Enter the elements of the array");
  for(int i=0;i<n;i++)
  { scanf("%d",&arr[i]);
      }
      
      sum(n,arr);
      printf("first element is : %d",arr[0]);     // the changes in other function affects the main function's array
  return 0;  
  }