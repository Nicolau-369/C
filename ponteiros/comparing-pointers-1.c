#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p, *p1, x = 10, y = 20;
    p = &x;
    p1 = &y;
    if(*p > *p1)
        printf("The content of p is greater than the content of p1\n");
    else
        printf("The content of p is NOT greater than the content of p1\n");
    system("pause");
    return 0;
}
