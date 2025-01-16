#include <stdio.h>
#include <stdlib.h>
int main(){
    void *pp;
    int p2 = 10;
    // generic pointer receives the address of an integer
    pp = &p2;
    // tries to access the contents of the generic pointer
    printf("Content: %of\n",*pp); //ERROR
    // converts the generic pointer pp to (int *) before accessing its contents.
    printf("Content: %of\n",*(int*)pp); //CORRECT
    system("pause");
    return 0;
}
