#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,y;
    printf(“Digite tres inteiros: ”);
    scanf(“%d %*d %d”,&x,&y);
    printf(“Numeros lidos: %d e %d\n”,x,y);
    char nome[20], curso[20];
    printf(“Digite nome, idade e curso: ”);
    scanf(“%s %*d %s”,nome,curso);
    printf(“Nome: %s\nCurso: %s\n”,nome,curso);
    system(“pause”);
    return 0;
}