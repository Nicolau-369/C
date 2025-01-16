#include <stdio.h>
#include <stdlib.h>
int main(){
    int x = 10,y = 20;
    x = x + y - 10;
    printf("x = %d\n",x);
    x = x - 5;
    printf("x = %d\n",x);
    x = x * 10;
    printf("x = %d\n",x);
    x = x / 15;
    printf("x = %d\n",x);
    system("pause");
    return 0;
}
