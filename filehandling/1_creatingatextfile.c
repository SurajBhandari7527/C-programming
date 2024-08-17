#include<stdio.h>
int main(){
    FILE* ptr;
    ptr=fopen("Suraj.txt","w"); // this will create a new file
    char str[100]=" My name is suraj Bhandari.\n I am from Nepal.\n I am persuing COE in Thapar.";
    fputs(str,ptr); // this will put the string into file
    
    return 0;
}