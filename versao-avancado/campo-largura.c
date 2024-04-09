#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 125;
    int largura = 10;
    //largura definida dentro do campo
    printf(“n = %10d\n”,n);
    //largura definida por uma variavel inteira
    printf(“n = %*d\n”,largura,n);
    system(“pause”);
    return 0;
}