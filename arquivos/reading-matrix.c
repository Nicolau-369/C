#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *arq;
    arq = fopen("matrix.txt","r");
    if(arq == NULL){
        printf("Error\n");
        system("pause");
        exit(1);
    }
    int v,soma=0;
    while(!feof(arq)){
        fscanf(arq,"%d",&v);
        soma += v;
    }
    printf("Sum = %d\n",sum);
    fclose(arq);
    system("pause");
    return 0;
}
