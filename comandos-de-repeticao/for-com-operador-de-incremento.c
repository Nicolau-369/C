#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    printf(“Digite o valor de a: ”);
    scanf(“%d”,&a);
    printf(“Digite o valor de b: ”);
    scanf(“%d”,&b);

    //incremento de duas unidades
    for (c = a; c <= b; c=c+2){
        printf(“%d \n”,c);
    }

    //novo valor é lido do teclado
    for (c = a; c <= b; scanf(“%d”,&c)){
        printf(“%d \n”,c);
    }
    system(“pause”);
    return 0;
}