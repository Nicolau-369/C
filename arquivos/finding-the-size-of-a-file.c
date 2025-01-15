#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *arq;
    arq = fopen("arquivo.bin","rb");
    if(arq == NULL){
        printf("Error opening file");
        system("pause");
        exit(1);
    }
    int size;
    fseek(arq,0,SEEK _ END);
    tamanho = ftell(arq);
    fclose(arq);
    printf("File size in bytes: %d:",size);
    system("pause");
    return 0;
}
