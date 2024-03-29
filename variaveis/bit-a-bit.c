#include <stdio.h>
#include <stdlib.h>
int main(){
    unsigned char x, y;
    x = 44;
    printf("x = %d\n",x);
    y = ~x;
    printf("~x = %d\n",y);
    system("pause");
    return 0;
}