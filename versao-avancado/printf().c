#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 125;
    float f = 5.25;
    double d = 10.53;
    char letra = ‘A’;
    char palavra[10] = “programa”;
    printf(“Valor inteiro: %d\n”,n);
    printf(“Valor inteiro: %i\n”,n);
    printf(“Valor real: %f\n”,f);
    printf(“Valor real: %f\n”,d);
    printf(“Caractere: %c\n”,letra);
    printf(“Valor numerico do caractere: %d\n”,letra);
    printf(“Palavra: %s\n”,palavra);
    system(“pause”);
    return 0;
}