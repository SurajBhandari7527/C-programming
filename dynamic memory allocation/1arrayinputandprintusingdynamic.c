#include <stdio.h>
#include<stdlib.h>


int main() {
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    int* ptr;
    ptr=(int*) malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",ptr[i]);}
    return 0;
}