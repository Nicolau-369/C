#include <stdio.h>
#include <stdlib.h>
int soma(int a, int b){return a + b;}
int subtracao(int a, int b){return a – b;}
int produto(int a, int b){return a * b;}
int divisao(int a, int b){return a / b;}
int executa(int (*p)(int,int), int x, int y) { return p(x,y);}
int main(){
    int x,y;
    int (*p)(int,int);
    char ch;
    printf(“Digite uma operação matematica (+,-,*,/): ”);
    ch = getchar();
    printf(“Digite 2 numeros: ”);
    scanf(“%d %d”,&x,&y);
    switch(ch){
        case ‘+’: p = soma; break;
        case ‘-’: p = subtracao; break;
        case ‘*’: p = produto; break;
        case ‘/’: p = divisao; break;
        default: p = NULL;
    }
    if(p!=NULL)
        printf(“Resultado = %d\n”,executa(p,x,y));
    else
        printf(“Operacao invalida\n”);
        system(“pause”);
        return 0;
}