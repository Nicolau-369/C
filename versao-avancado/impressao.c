// imprimindo sempre o sinal do número
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 5;
    //sem sinal
    printf(“n = %d\n”,n);
    //com sinal
    printf(“n = %+d\n”,n);
    system(“pause”);
    return 0;
}

// imprimindo espaços ou zeros antes do número
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 5;
    //com espaços (padrao)
    printf(“n = % 5d\n”,n);
    //com zeros
    printf(“n = %05d\n”,n);
    system(“pause”);
    return 0;
}

// imprimindo o prefixo e o ponto decimal
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 125;
    //octal e hexadecimal sem prefixo
    printf(“x = %o\n”,n);
    printf(“x = %X\n”,n);
    //octal e hexadecimal com prefixo
    printf(“x = %#o\n”,n);
    printf(“x = %#X\n”,n);
    float x = 5.00;
    //float sem ponto
    printf(“x = %.f\n”,x);
    //float com ponto
    printf(“x = %#.f\n”,x);
    system(“pause”);
    return 0;
}