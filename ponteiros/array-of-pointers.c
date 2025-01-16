#include <stdio.h>
#include <stdlib.h>
int main(){
    int *pvet[2];
    int x = 10, y[2] = {20,30};
    pvet[0] = &x;
    pvet[1] = y;
    //prints the addresses of the variables
    printf("Address pvet[0]: %p\n",pvet[0]);
    printf("Address pvet[1]: %p\n",pvet[1]);
    //prints the contents of a variable
    printf("Content in pvet[0]: %d\n",*pvet[0]);
    //prints a vector position
    printf("Content pvet[1][1]: %d\n",pvet[1][1]);
    system("pause");
    return 0;
}
