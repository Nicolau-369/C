#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *arq;
    char nome[20] = “Ricardo”;
    int I = 30;
    float a = 1.74;
    int result;
    arq = fopen(“ArqGrav.txt”,“w”);
    if(arq == NULL) {
        printf(“Problemas na ABERTURA do arquivo\n”);
        system(“pause”);
        exit(1);
    }
    result = fprintf(arq,”Nome: %s\nIdade: %d\nAltura: %f\n”,nome,i,a);
    if(result < 0)
        printf(“Erro na escrita\n”);
    fclose(arq);
    system(“pause”);
    return 0;
}