#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p, *p1, x, y;
    p = &x;
    p1 = &y;
    if(p > p1)
        printf(“O ponteiro p aponta para uma posicao a frente de p1\n”);
    else
        printf(“O ponteiro p NAO aponta para uma posicao a frente de p1“\n”);
    system(“pause”);
    return 0;
}