/*copy one structure element to another*/
#include<stdio.h>
#include<string.h>
int main(){
    struct cricketer{
        char name[50];
        int NoOfMatches;
        float average;

    };
    struct cricketer arr[2];
    {   printf("Enter cricketer's name: ");
        scanf(" %[^\n]",arr[0].name);
        printf("Enter No. of Matches: ");
        scanf("%d",&arr[0].NoOfMatches);
        printf("Enter the average run:");
        scanf("%f",&arr[0].average);
        
    }
    arr[1]=arr[0]; //deep copy of first cricketer
    arr[1].average=90;
    strcpy(arr[1].name,"Sahil");
     for(int i=0;i<2;i++)
    {   printf("cricketer's name: %s\n ",arr[i].name);
        printf("No. of Matches: %d\n ",arr[i].NoOfMatches);
        printf("The average run: %f\n",arr[i].average);
     
    }
    return 0;
}