#include <stdio.h>
#include <stdlib.h>
int max(int a, int b){
    return (a > b) ? a : b;
}
int main(){
    int x,y,z;
    int (*p)(int,int);
    printf(“Digite 2 numeros: ”);
    scanf(“%d %d”,&x,&y);
    //ponteiro recebe endereco da função
    p = max;
    z = p(x,y);
    printf(“Maior = %d\n”,z);
    system(“pause”);
    return 0;
}