#include <stdio.h>
#include <stdlib.h>
int soma(int a, int b){return a + b;}
int subtracao(int a, int b){return a – b;}
int produto(int a, int b){return a * b;}
int divisao(int a, int b){return a / b;}
int main(){
    int x,y,indice = -1;
    int (*p[4])(int,int);
    p[0] = soma;
    p[1] = subtracao;
    p[2] = produto;
    p[3] = divisao;
    char ch;
    printf(“Digite uma operação matematica (+,-,*,/): ”);
    ch = getchar();
    printf(“Digite 2 numeros: ”);
    scanf(“%d %d”,&x,&y);
    switch(ch){
        case ‘+’: indice = 0; break;
        case ‘-’: indice = 1; break;
        case ‘*’: indice = 2; break;
        case ‘/’: indice = 3; break;
        default: indice = -1;
    }
    if(indice >= 0)
    printf(“Resultado = %d\n”,p[indice](x,y));
    else
        printf(“Operacao invalida\n”);
    system(“pause”);
    return 0;
}