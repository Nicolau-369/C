#include <stdio.h>
#include <stdlib.h>
int main(){
    int **p; //2 “*” = 2 níveis = 2 dimensões
    int i, j, N = 2;
    p = (int**) malloc(
    N*sizeof(int *));
    for (i = 0; i < N; i++){
        p[i] = (int *)
    malloc(N*sizeof(int));
        for (j = 0; j < N; j++)
            scanf(“%d”, &p[i][j]);
    }
    system(“pause”);
    return 0;
}