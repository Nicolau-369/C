#include <stdio.h>
#include <stdlib.h>
int main(){
    int x = 1, y =2;
    float z = 3;
    printf(“Um parametro: texto\n”);
    printf(“Dois parametros: texto e %d\n”,x);
    printf(“Tres parametros: texto, %d e %d\n”,x,y);
    printf(“Quatro parametros: texto, %d, %d e %f\n”,x,y,z);
    system(“pause”);
    return 0;
}