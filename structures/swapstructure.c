#include<stdio.h>
#include<string.h>
struct books{
    char bookname[50];
    char author[50];
};

int main(){
    struct books richdadpoordad;
strcpy(richdadpoordad.bookname,"rich dad poor dad");
strcpy(richdadpoordad.author,"whatever");

struct books Thinklikeamonk;
strcpy(Thinklikeamonk.bookname,"The Alchemist");
strcpy(Thinklikeamonk.author,"shetty");

printf("%s\n",richdadpoordad.bookname);
printf("%s\n",richdadpoordad.author);
printf("%s\n",Thinklikeamonk.bookname);
printf("%s\n",Thinklikeamonk.author);
// swap the structures
char swap[50];
strcpy(swap,richdadpoordad.bookname);
strcpy(richdadpoordad.bookname,Thinklikeamonk.bookname);
strcpy(Thinklikeamonk.bookname,swap);

strcpy(swap,richdadpoordad.author);
strcpy(richdadpoordad.author,Thinklikeamonk.author);
strcpy(Thinklikeamonk.author,swap);

printf("%s\n",richdadpoordad.bookname);
printf("%s\n",richdadpoordad.author);
printf("%s\n",Thinklikeamonk.bookname);
printf("%s\n",Thinklikeamonk.author);
    return 0;
}