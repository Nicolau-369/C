#include <stdio.h>
#include <stdlib.h>
int main(){
    int i = 0;
    do{
        printf(“Valor %d\n”,i);
        i++;
    }while(i < 10);//Esse ponto e vírgula é necessário!
    system(“pause”);
    return 0;
}
