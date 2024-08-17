#include<stdio.h>
#include<string.h>

struct date{
    int day;
    int month;
    int year;
};

int main(){
struct date a;
struct date b;
struct date c={0,0,0};
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
if(b.year>a.year)
{ c=b;
    b=a;
    a=c;
}
if(a.day<b.day){
    a.day=a.day+30;
    a.month=a.month-1;
}
c.day=a.day-b.day;

if(a.month<b.month){
    a.month=a.month+12;
    a.year=a.year-1;
}
c.month=a.month-b.month;

c.year=a.year-b.year;

printf("%d\n",c.day);
printf("%d\n",c.month);
printf("%d\n",c.year);

return 0;
}



