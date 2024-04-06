// Sem void
#include <stdio.h>
#include <stdlib.h>

void imprime(){
    printf(“Teste de funcao\n”);
}

int main(){
    imprime();
    imprime(5);
    imprime(5,’a’);

    system("pause");
    return 0;
}

// Com void

#include <stdio.h>
#include <stdlib.h>

void imprime(void){
    printf("Teste de funcao\n");
}
int main(){
    imprime();
    imprime(5);//ERRO
    imprime(5,’a’);//ERRO

    system(“pause”);
    return 0;
}