//  Implement a C program to create a dynamic array of characters (string). 
// The program should prompt the user to enter a string, dynamically allocate memory for it,
//  and then reverse the string in-place (without using any additional arrays).

#include <stdio.h>
#include<stdlib.h>
int main() {
   int n,i;
   printf("Enter the size of the string: ");
   scanf("%d",&n);
   char* ptr;
   ptr=(char*) calloc(n,sizeof(char));
   getchar();
   printf("Enter the elements of the string: ");
   for(int i=0;i<n;i++)
   {
       scanf("%c",&ptr[i]);
   }
  char temp;
   for(int i=0;i<n/2;i++)
   { temp=ptr[i];
   ptr[i]=ptr[n-1-i];
   ptr[n-1-i]=temp;
       
       
   } 
   for(int i=0;i<n;i++)
   {
   
   printf(" %c",ptr[i]);
   }
   
    return 0;
}