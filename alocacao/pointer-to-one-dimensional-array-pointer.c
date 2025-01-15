#include <stdio.h>
#include <stdlib.h>
int main(){
    int *v; //1 "*" = 1 level = 1 dimension
    int **p; //2 "*" = 2 levels = 2 dimensions
    int i, j, Nlines = 2, Ncolumn = 2;
    v = (int*) malloc(Nlines * Ncolumn *sizeof(int));
    p = (int **) malloc(Nlines * sizeof(int *));
    
    for (i = 0; i < Nlines; i++){
        p[i] = v + i * Ncolumn;
        for (j = 0; j < Ncolumn; j++)
            scanf("%d",&p[i][j]);
    }
    for (i = 0; i < Nlines; i++){
        for (j = 0; j < Ncolumn; j++)
            printf("%d ",p[i][j]);
        printf("\n");
    }
    free(v);
    free(p);
    system("pause");
    return 0;
}
