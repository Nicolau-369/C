#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    p = (int *) malloc(5*sizeof(int));
    int i;
    for (i=0; i<5; i++){
        printf(“Digite o valor da posicao %d: ”,i);
        scanf(“%d”,&p[i]);
    }

    system(“pause”);
    return 0;
}