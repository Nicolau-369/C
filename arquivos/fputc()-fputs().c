#include <stdio.h>
#include <stdlib.h>
int main(){
    char text[30] = "Hello World\n";
    fputs(text, stdout);
    system("pause");
    return 0;
}
