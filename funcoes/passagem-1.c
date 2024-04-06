// Por valor
#include <stdio.h>
#include <stdlib.h>

void Troca(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf(“Dentro: %d e %d\n”,a,b);
}

int main(){
    int x = 2;
    int y = 3;
    printf(“Antes: %d e %d\n”,x,y);
    Troca(x,y);
    printf(“Depois: %d e %d\n”,x,y);
    system(“pause”);
    return 0;
}

// Por referência
#include <stdio.h>
#include <stdlib.h>

void Troca(int*a,int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf(“Dentro: %d e %d\n”,*a,*b);
}

int main(){
    int x = 2;
    int y = 3;
    printf(“Antes: %d e %d\n”,x,y);
    Troca(&x,&y);
    printf(“Depois: %d e %d\n”,x,y);
    system(“pause”);
    return 0;
}