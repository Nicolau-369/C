#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *arq;
    arq = fopen(“ArqGrav.txt”,“rb”);
    if(arq == NULL){
        printf(“Problemas na ABERTURA do arquivo\n”);
        system(“pause”);
        exit(1);
    }
    int i,total _ lido, v[5];
    //lê 5 posições inteiras do arquivos
    total _ lido = fread(v,sizeof(int),5,arq);
    if(total _ lido != 5){
        printf(“Erro na leitura do arquivo!”);
        system(“pause”);
        exit(1);
    }else{
        for(i = 0; i < 5; i++)
            printf(“v[%d] = %d\n”,i,v[i]);
    }
    fclose(arq);
    system(“pause”);
    return 0;
}