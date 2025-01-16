#include <stdio.h>
#include <stdlib.h>
int x = 5; // global variable
void incr(){
    x++; // access to global variable
}
int main(){
    printf("x = %d\n",x); // access to global variable
    incr();
    printf("x = %d\n",x); // access to global variable
    system("pause");
    return 0;
}
