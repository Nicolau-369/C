#include <stdio.h>
#include <stdlib.h>
int main(){
    int **p; //2 “*” = 2 níveis = 2 dimensões
    int i, j, N = 3;
    p = (int **) malloc(N*sizeof(int *));
    for (i = 0; i < N; i++){
        p[i] = (int *) malloc((i+1)*sizeof(int));
        for (j = 0; j < (i+1); j++)
            scanf(“%d”,&p[i][j]);
    }
    for (i = 0; i < N; i++){
        free(p[i]);
    }
    free(p);
    system(“pause”);
    return 0;
}