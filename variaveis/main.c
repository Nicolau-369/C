#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int z = 9;
int main(){
    float x;
    //declara y e atribui um valor
    float y = 3;
    //atribui um valor a x
    x = 5;
    printf("x = %f\n",x);
    //atribui uma constante a x
    x = z;
    printf("x = %f\n",x);
    //atribui o resultado de uma
    //expressao matematica a x
    x = y + 5;
    printf("x = %f\n",x);
    //atribui o resultado de uma funcao a x
    x = sqrt(9);
    printf("x = %f\n",x);
    system("pause");
    return 0;
}