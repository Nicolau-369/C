#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, lista[5] = {3,51,18,2,45};
    int soma = 0;
    for(i=0; i < 5; i++)
        soma = soma + lista[i];
    float media = soma / 5.0;
    printf(“Media = %f\n”,media);
    system(“pause”);
    return 0;
}