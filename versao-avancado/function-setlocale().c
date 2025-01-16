#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int main(){
    float f = 3.45;
    time _ t time;
    struct tm *infotime;
    char text[80];
    time(&time);
    infotime = localtime(&time);
    printf("Hello World! \n");
    printf("Value of f = %f\n",f);
    strftime(text,80,"Data: %A, %d/%b/%Y",infotime);
    puts(text);
    setlocale(LC _ ALL, "ptb");
    printf("Hello World! \n");
    printf("Value of f = %f\n",f);
    strftime(text,80,"Data: %A, %d/%b/%Y",infotime);
    puts(text);
    system("pause");
    return 0;
}
