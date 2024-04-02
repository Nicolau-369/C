#include <stdio.h>
#include <stdlib.h>
#define N 100
int main(){
    int n = 5;
    float F[N+1];//Correto: expressão inteira e constante
    char texto[30];//Correto: valor inteiro
    int Vetor[n];//Errado: n é variável
    int V[4.5];//Errado: 4.5 não é inteiro
    system(“pause”);
    return 0;
}