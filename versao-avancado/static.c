// variáveis globais com static
#include <stdio.h>
#include <stdlib.h>
int x = 20;
static int y = 10;
int main(){
    printf(“x = %d\n”,x);
    printf(“y = %d\n”,y);
    system(“pause”);
    return 0;
}

// variáveis locais com static
#include <stdio.h>
#include <stdlib.h>
void imprime(){
    static int n = 0;
    printf(“%d\n”,n++);
}
int main(){
    int i;
    for(i=1; i<=10; i++)
        imprime();
    system(“pause”);
    return 0;
}

// funções com static
#include <stdio.h>
#include <stdlib.h>
static void imprime(){
    printf(“Executando funcao imprime()\n”);
}
int main(){
    imprime();
    system(“pause”);
    return 0;
}