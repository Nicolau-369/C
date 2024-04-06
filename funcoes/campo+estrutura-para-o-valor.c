#include <stdio.h>
#include <stdlib.h>
struct ponto {
    int x, y;
};
void imprime _ valor(int n){
    printf(“Valor = %d\n”,n);
}
int main(){
    struct ponto p1 = {10,20};
    imprime _ valor(p1.x);
    imprime _ valor(p1.y);
    system(“pause”);
    return 0;
}