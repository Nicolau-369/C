// Operador #
#include<stdio.h>
#include<stdlib.h>
#define str(x) #x
int main(){
    printf(str(Teste!\n));
    system(“pause”);
    return 0;
}

// Operador ##
#include<stdio.h>
#include<stdlib.h>
#define concatena(x,y) x ## y
int main(){
    concatena(print,f)(“Teste!\n”);
    system(“pause”);
    return 0;
}

// #define & #undef
#include <stdio.h>
#include <stdlib.h>
#define valor 10
int main(){
    printf(“Valor = %d\n”,valor);
    #undef valor
    #define valor 20
    printf(“Novo valor = %d\n”,valor);
    system(“pause”);
    return 0;
}

// Com #ifdef
#include<stdio.h>
#include<stdlib.h>
#define TAMANHO 100
int main(){
    #ifdef TAMANHO

    int vetor[TAMANHO];
    #endif
    system(“pause”);
    return 0;
}

// Com #ifndef
#include<stdio.h>
#include<stdlib.h>

int main(){
    #ifndef TAMANHO
    #define TAMANHO 100
    int vetor[TAMANHO];
    #endif
    system(“pause”);
    return 0;
}