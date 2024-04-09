#include <stdio.h>
#include <stdlib.h>
int main(){
    char texto[20];
    printf(“Digite letras e numeros: ”);
    scanf(“%[A-Z0-9]”,texto);
    printf(“Texto: %s\n”,texto);
    system(“pause”);
    return 0;
}