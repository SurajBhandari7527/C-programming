#include<stdio.h>
#include<string.h>

int main() {
    struct cricketer {
        char name[100]; // Changed from char to char array to store string
        int NoOfMatches;
        float average;
    };

    int n;
    printf("Enter the number of cricketers: ");
    scanf("%d", &n);
    struct cricketer arr[n];

    for(int i = 0; i < n; i++) {
        printf("Enter cricketer's name: ");
        scanf(" %[^\n]", arr[i].name); // Added space before %[^\n] to skip leading whitespace
        printf("Enter No. of Matches: ");
        scanf("%d", &arr[i].NoOfMatches);
        printf("Enter the average run: ");
        scanf("%f", &arr[i].average); // Changed %d to %f to read float
    }

    for(int i = 0; i < n; i++) {
        printf("Cricketer's name: %s\n", arr[i].name);
        printf("No. of Matches: %d\n", arr[i].NoOfMatches);
        printf("Average run: %f\n", arr[i].average);
        printf("\n");
        
    }

    return 0;
}
