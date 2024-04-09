#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 55

#if TAMANHO > 100
#undef TAMANHO
#define TAMANHO 100
#elif TAMANHO < 50
#undef TAMANHO
#define TAMANHO 50
#else
#undef TAMANHO
#define TAMANHO 75
#endif
int main(){
    printf(“Valor de TAMANHO = %d\n”,TAMANHO);
    system(“pause”);
    return 0;
}