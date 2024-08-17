#include <stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter the size of string: ");
    scanf("%d", &n);
    getchar();
    char* ptr;
    ptr=(char*) malloc(n*sizeof(char));
    printf("Enter the string:");
    for(int i=0;i<n;i++)
    {
        scanf("%c", &ptr[i]);
    }
    for(int i=0;ptr[i]!='\0';i++){
        printf("%c",ptr[i]);}
        free(ptr);
    return 0;
}