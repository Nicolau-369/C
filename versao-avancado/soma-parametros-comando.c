#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
    if(argc == 1){
        printf(“Nenhum parametro para ser somado\n”);
    }else{
        int soma = 0, i;
        printf(“Somando os parametros passados para o programa %s:\n”,argv[0]);
    for(i=1; i<argc; i++)
        soma = soma + atoi(argv[i]);
        printf(“Soma = %d\n”,soma);
    }
    system(“pause”);
    return 0;
}