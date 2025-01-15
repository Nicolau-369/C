#include <stdio.h>
#include <stdlib.h>
int main(){
    char*p;
    // allocates space for 1,000 chars
    p = (char *) malloc(1000);
    int *p;
    // allocates space for 250 integers
    p = (int *) malloc(1000);
    system("pause");
    return 0;
}
