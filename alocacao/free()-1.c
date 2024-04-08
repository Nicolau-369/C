#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p,i;
    p = (int *) malloc(50*sizeof(int));
    if(p == NULL){
        printf(“Erro: Memoria Insuficiente!\n”);
        system(“pause”);
        exit(1);
    }
    for (i = 0; i < 50; i++){
        p[i] = i+1;
    }
    //libera a memória alocada
    free(p);
    //tenta imprimir o array
    //cuja memória foi liberada
    for (i = 0; i < 50; i++){
        printf(“%d\n”,p[i]);
    }
    system(“pause”);
    return 0;
    }