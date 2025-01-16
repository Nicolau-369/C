#include <stdio.h>
#include <stdlib.h>
int main(){
    void *pp;
    int *p1, p2 = 10;
    p1 = &p2;
    //receives the address of an integer
    pp = &p2;
    printf("Address in pp: %p \n",pp);
    //receives the address of an integer pointer
    pp = &p1;
    printf("Address in pp: %p \n",pp);
    //receives the address stored in p1 (address of p2)
    pp = p1;
    printf("Address in pp: %p \n",pp);
    system("pause");
    return 0;
}
