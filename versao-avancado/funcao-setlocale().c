#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main(){
    float f = 3.45;
    time _ t tempo;
    struct tm *infotempo;
    char texto[80];
    time(&tempo);
    infotempo = localtime(&tempo);
    printf(“Alô mundo! \n”);
    printf(“Valor de f = %f\n”,f);
    strftime(texto,80,”Data: %A, %d/%b/%Y”,infotempo);
    puts(texto);
    setlocale(LC _ ALL, “ptb”);
    printf(“Alô mundo! \n”);
    printf(“Valor de f = %f\n”,f);
    strftime(texto,80,”Data: %A, %d/%b/%Y”,infotempo);
    puts(texto);
    system(“pause”);
    return 0;
}