#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p, *p1, x = 10;
    float y = 20.0;
    p = &x;
    printf("Content pointed by p: %d \n",*p);
    p1 = p;
    printf("Content pointed by p1: %d \n",*p1);
    p = &y;
    printf("Content pointed by p: %d \n",*p);
    printf("Content pointed by p: %f \n",*p);
    printf("Content pointed by p: %f \n",*((float*)p));
    system("pause");
    return 0;
}
