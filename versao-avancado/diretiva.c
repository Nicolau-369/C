// diretiva #line
#include <stdio.h>
#include <stdlib.h>

int main(){
    #line 5 “Erro de atribuicao”
    float a=;
    printf(“Valor de a = %f\n”,a);
    printf(“PI = %f\n”,PI);
    system(“pause”);
    return 0;
}

// diretiva #error
#include <stdio.h>
#include <stdlib.h>

#ifndef PI
#error O valor de PI nao foi definido
#endif
int main(){
    printf(“PI = %f\n”,PI);
    system(“pause”);
    return 0;
}