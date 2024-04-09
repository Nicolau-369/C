#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf(“Digite um numero (2 digitos): ”);
    scanf(“%2d”,&n);
    printf(“Numero lido: %d\n”,n);
    fflush(stdin);
    char texto[11];
    printf(“Digite uma palavra (max: 10 caracteres):”);
    scanf(“%10s”,texto);
    printf(“Palavra lida: %s\n”,texto);
    system(“pause”);
    return 0;
}