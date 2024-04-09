#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int soma _ int(int n,...){
    va _ list lista;
    int i, s = 0;
    va _ start(lista,n);
    for(i = 1; i <= n; i++)
        s = s + va _ arg(lista,int);
    va _ end(lista);
    return s;
}
int main(){
    int soma;
    soma = soma _ int(2,4,5);
    printf(“Soma 2 parametros: %d\n”,soma);
    soma = soma _ int(3,4,5,6);
    printf(“Soma 3 parametros: %d\n”,soma);
    soma = soma _ int(4,4,5,6,10);
    printf(“Soma 4 parametros: %d\n”,soma);
    system(“pause”);
    return 0;
}