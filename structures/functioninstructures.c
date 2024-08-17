#include<stdio.h>
#include<string.h>

struct date{
    int day;
    int month;
    int year;
};
void pointerstruct(struct date* ptr);
void pointerstruct(struct date* ptr){
    (*ptr).day=06;    // this is normal *pointer to use the value inside the pointer
    ptr->month=11;   //this is arrow operator
    ptr->year=2003;
    return;
}

void printstruct(struct date x);
void printstruct(struct date x){
    printf("%d\n",x.day);
    printf("%d\n",x.month);
    printf("%d\n",x.year);
    return; }
int main(){
struct date a;
struct date b;
// Use of dot operator
a.day=20;
a.month=07;
a.year=2060;
b.day= 8;
b.month=11;
b.year=2056;
// print using dot operator
printf("%d\n",a.day);
printf("%d\n",a.month);
printf("%d\n",a.year);
printf("%d\n",b.day);
printf("%d\n",b.month);
printf("%d\n\n",b.year);

// passing to function
printstruct(a);


// use of arrow operator i.e pointer in structues
pointerstruct(&a);
// printing after pass by refrence using pointer and changing the values inside the function
printf("%d\n",a.day);
printf("%d\n",a.month);
printf("%d\n",a.year);
return 0;
}