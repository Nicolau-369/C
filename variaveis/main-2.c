#include <stdio.h>
#include <stdlib.h>
int main(){
    int x = 65;
    char ch;
    float f = 25.1;
    //ch recebe 8 bits menos significativos de x
    //converte para a tabela ASCII
    ch = x;
    printf("ch = %c\n",ch);
    //x recebe parte apenas a parte inteira de f
    x = f;
    printf("x = %d\n",x);
    //f recebe valor 8 bits convertido para real
    f = ch;
    printf("f = %f\n",f);
    //f recebe o valor de x
    f = x;
    printf("f = %f\n",f);
    system("pause");
    return 0;
}