#include <stdio.h>
#include <stdlib.h>
int main(){
    char texto[30] = “Hello World\n”;
    fputs(texto, stdout);
    system(“pause”);
    return 0;
}