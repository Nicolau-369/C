#include <stdio.h>
#include <stdlib.h>

void soma _ mais _ um(int n){
    n = n + 1;
    printf(“Dentro da funcao: x = %d\n”,n);
}

int main(){
    int x = 5;
    printf(“Antes da funcao: x = %d\n”,x);
    soma _ mais _ um(x);
    printf(“Depois da funcao: x = %d\n”,x);
    system(“pause”);
    return 0;
}