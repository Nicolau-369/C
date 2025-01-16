#include <stdio.h>
#include <stdlib.h>
int main(){
    int x = 10;
    int *p = &x;
    int **p2 = &p;
    //Address in p2
    printf("Address in p2: %p\n",p2);
    //Address content
    printf("Content in *p2: %p\n",*p2);
    //Address content of address
    printf("Content in **p2: %d\n",**p2);
    system("pause");
    return 0;
}
