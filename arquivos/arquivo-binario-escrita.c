#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    fp = fopen(“exemplo.bin”,“wb”);
    if(fp == NULL)
        printf(“Erro na abertura do arquivo.\n”);

    fclose(fp);
    system(“pause”);
    return 0;
}