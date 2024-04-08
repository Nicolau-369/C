#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    int i, j, Nlinhas = 2, Ncolunas = 2;
    p = (int *) malloc(Nlinhas * Ncolunas * sizeof(int));
    for (i = 0; i < Nlinhas; i++){
        for (j = 0; j < Ncolunas; j++){
            p[i * Ncolunas + j] = i+j;//CORRETO
            p[i][j] = i+j;//ERRADO
        }
    }
    free(p);
    system(“pause”);
    return 0;
}