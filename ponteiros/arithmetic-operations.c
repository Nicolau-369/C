#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p, x = 10;
    p = &x;
    printf("Content pointed to by p: %d \n",*p);
    *p = (*p)++;
    printf("Content pointed to by p: %d \n",*p);
    *p = (*p) * 10;
    printf("Content pointed to by p: %d \n",*p);
    system("pause");
    return 0;
}
