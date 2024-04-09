// Com macro
#include <stdio.h>
#include <stdlib.h>
#define maior(x,y) x>y?x:y
int main(){
    int a = 5;
    int b = 8;
    int c = maior(a,b);
    printf(“Maior valor = %d\n”,c);
    system(“pause”);
    return 0;
}

// Sem macro
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 5;
    int b = 8;
    int c = a>b?a:b;
    printf(“Maior valor = %d\n”,c);
    system(“pause”);
    return 0;
}

// macros com parênteses
#include <stdio.h>
#include <stdlib.h>
#define prod1(x,y) x*y;
#define prod2(x,y) (x)*(y);
int main(){
    int a = 1, b = 2;
    int c = prod1(a+2,b);
    int d = prod2(a+2,b);
    printf(“Valor de c = %d\n”,c);
    printf(“Valor de d = %d\n”,d);
    system(“pause”);
    return 0;
}

// criando uma macro com #define e chaves ({ })
#include<stdio.h>
#include<stdlib.h>
#define TROCA(a,b,c) {c t=a; a=b; b=t;}
int main(){
    int x=10;
    int y=20;
    printf(“%d %d\n”, x, y);
    TROCA(x, y, int);
    printf(“%d %d\n”, x, y);
    system(“pause”);
    return 0;
}