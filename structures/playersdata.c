/*Record contains name of cricketer his number of test matches that he has played and the average runs that he has scored in each test match.
 create an array of structure to hold records of cricketer and then write a program to read this records*/
#include<stdio.h>
#include<string.h>
int main(){
    struct cricketer{
        char name[50];
        int NoOfMatches;
        float average;

    };
    int n;
    printf("Enter the number of crickers: ");
    scanf("%d",&n);
    struct cricketer arr[n];
    for(int i=0;i<n;i++)
    {   printf("Enter cricketer's name: ");
        scanf(" %[^\n]",arr[i].name);
        printf("Enter No. of Matches: ");
        scanf("%d",&arr[i].NoOfMatches);
        printf("Enter the average run:");
        scanf("%f",&arr[i].average);
        
    }
     for(int i=0;i<n;i++)
    {   printf("cricketer's name: %s\n ",arr[i].name);
        printf("No. of Matches: %d\n ",arr[i].NoOfMatches);
        printf("The average run: %f\n\n",arr[i].average);
     
    }
    return 0;
}