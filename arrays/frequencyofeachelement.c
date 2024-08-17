// logic= assign the j to be -1 and check that arr[i]!= -1 to restrict repetition
// same logic can be applied to find the mode too this one is more easy
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
      
    for(int i=0;i<n;i++)
    { int count=1;
        if(arr[i]!=-1)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    count=count+1;
                    arr[j]=-1;
                }
            }
            printf("The frequency of %d is %d \n",arr[i],count);
        }
    }
return 0;
}
