#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    p = (int *) malloc(5*sizeof(int));
    for (i = 0; i < 5; i++){
        p[i] = i+1;
    }
    for (i = 0; i < 5; i++){
        printf(“%d\n”,p[i]);
    }
    //libera a memória alocada
    p = (int *) realloc(p,0);
    system(“pause”);
    return 0;
}