#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,z;
    float y;
    //Leitura de um valor inteiro
    scanf("%d",&x);
    //Leitura de um valor real
    scanf("%f",&y);
    //Leitura de um valor inteiro e outro real
    scanf("%d%f",&x,&y);
    //Leitura de dois valores inteiros
    scanf("%d%d",&x,&z);
    //Leitura de dois valores inteiros com espaco
    scanf("%d %d",&x,&z);
    system("pause");
    return 0;
}