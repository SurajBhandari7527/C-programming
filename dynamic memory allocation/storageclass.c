// difference between static and auto storage class
#include <stdio.h>
void class(){
     static int a=5;    // the initiation happens only once in static
    printf("%d",a);     
    a++;          // auto clears the memory once function finished while static stores 'a' is increased and memory cleared            
    return;         // this increased value of 'a' until whole program is finished 
}

int main() {
   class();
   class();

    return 0;
}