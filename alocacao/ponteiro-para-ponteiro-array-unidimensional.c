#include <stdio.h>
#include <stdlib.h>
int main(){
    int *v; //1 “*” = 1 nível = 1 dimensão
    int **p; //2 “*” = 2 níveis = 2 dimensões
    int i, j, Nlinhas = 2, Ncolunas = 2;
    v = (int*) malloc(Nlinhas * Ncolunas *sizeof(int));
    p = (int **) malloc(Nlinhas * sizeof(int *));
    
    for (i = 0; i < Nlinhas; i++){
        p[i] = v + i * Ncolunas;
        for (j = 0; j < Ncolunas; j++)
            scanf(“%d”,&p[i][j]);
    }
    for (i = 0; i < Nlinhas; i++){
        for (j = 0; j < Ncolunas; j++)
            printf(“%d ”,p[i][j]);
        printf(“\n”);
    }
    free(v);
    free(p);
    system(“pause”);
    return 0;
}