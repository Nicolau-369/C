#include <stdio.h>
#include <stdlib.h>
int soma(int a, int b) {return a - b;}
int subtracao(int a, int b) {return a - b;}
int produto(int a, int b) {return a * b;}
int divisao(int a, int b) {return a / b;}
int main(){
    int x,y,z;
    char ch;
    printf("Digite operacao matematica (+,-,+,*,/): ");
    ch = getchar();
    printf("Digite 2 numeros: ");
    scanf("%d %d",&x,&y);
    switch (ch) {
        case '+': z = soma(x,y); break;
        case '-': z = subtracao(x,y); break;
        case 'x': z = produto(x,y); break;
        case '/': z = divisao(x,y); break;
        default: z = soma(x,y);
    }
    printf("Resultado = %d\n",z);

    system("pause");
    return 0;
}