//  Write a C program to dynamically allocate memory for an array of integers.
// Prompt the user to enter the size of the array, allocate memory accordingly, 
 //and then prompt the user to enter the elements of the array. Finally, print the sum of all elements in the array.

#include <stdio.h>
#include<stdlib.h>
int main() {
   int n,i;
   printf("Enter the size of the array: ");
   scanf("%d",&n);
   int* ptr;
   ptr=(int*) calloc(n,sizeof(int));
   printf("Enter the elements of the array: ");
   for(int i=0;i<n;i++)
   {
       scanf("%d",&ptr[i]);
   }
   int sum=0;
   for(int i=0;i<n;i++)
   {
       sum=sum+ptr[i];
       
   }
   printf("The sum of the array elements: %d",sum);
   
    return 0;
}