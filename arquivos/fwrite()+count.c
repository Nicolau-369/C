#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *arq;
    arq = fopen(“ArqGrav.txt”,“wb”);
    if(arq == NULL){
        printf(“Problemas na CRIACAO do arquivo\n”);
        system(“pause”);
        exit(1);
    }
    int total _ gravado, v[5] = {1,2,3,4,5};
    //grava todo o array no arquivo (5 posições)
    total _ gravado = fwrite(v,sizeof(int),5,arq);
    if(total _ gravado != 5){
        printf(“Erro na escrita do arquivo!”);
        system(“pause”);
        exit(1);
    }
    fclose(arq);
    system(“pause”);
    return 0;
}