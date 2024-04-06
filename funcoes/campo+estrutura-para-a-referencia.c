#include <stdio.h>
#include <stdlib.h>
struct ponto {
    int x, y;
};
void soma _ imprime _ valor(int *n){
    *n = *n + 1;
    printf(“Valor = %d\n”,*n);
}
int main(){
    struct ponto p1 = {10,20};
    soma _ imprime _ valor(&p1.x);
    soma _ imprime _ valor(&p1.y);
    system(“pause”);
    return 0;
}