#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    int array[100];
    for (int i = 0; i < 100; i++) {

        srand(Time(NULL));       /* this two lines generates the random number between 1 to 100 under the library time and stdlib*/
        n=rand()%100+1;

        if(i==n)
        continue;
        array[i] = i + 1;
    }
    int i;
    for(i=1;i<=100;i++)
    {
        if(i!=array[i-1])
        break;
        
    }
    printf("The missing number is:%d",i-1);
return 0;
}