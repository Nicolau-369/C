#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p, *p1, x, y;
    p = &x;
    p1 = &y;
    if(p == p1)
        printf("Equal pointers\n");
    else
        printf("Different pointers\n");
    system("pause");
    return 0;
}
