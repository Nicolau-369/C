#include <stdio.h>
#include <stdlib.h>
int main(){
    char texto[20];
    printf(“Digite algumas vogais: ”);
    scanf(“%[aeiou]s”,texto);
    printf(“Texto: %s\n”,texto);
    system(“pause”);
    return 0;
}