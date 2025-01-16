#include <stdio.h>
#include <stdlib.h>
int main(){
    unsigned char x, y;
    x = 44;
    printf("x = %d\n",x);
    y = x << 2;
    printf("x << 2 = %d\n",y);
    y = x >> 2;
    printf("x >> 2 = %d\n",y);
    system("pause");
    return 0;
}
