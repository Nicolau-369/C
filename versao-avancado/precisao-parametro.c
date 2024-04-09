#include <stdio.h>
#include <stdlib.h>
int main(){
    float n = 123.45678;
    int precisao = 10;
    //precisão definida por uma variavel inteira
    printf(“n = %.*f\n”,precisao,n);
    system(“pause”);
    return 0;
}