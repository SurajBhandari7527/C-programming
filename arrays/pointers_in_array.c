#include <stdio.h>
void print(int n, int* arr);
void print(int n, int* arr){
    for(int i=0;i<n;i++)
printf("%d",*(arr+i));      // prints the same array using pointer           
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
      
      print(n,arr); // calling the function 
      
  return 0;  
  }