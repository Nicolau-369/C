#include <stdio.h>
#include <stdlib.h>
int main(){
    char texto[20];
    printf(“Digite caracteres que nao sejam letras maiuscula: ”);
    scanf(“%[^A-Z]s”,texto);
    printf(“Texto: %s\n”,texto);
    system(“pause”);
    return 0;
}