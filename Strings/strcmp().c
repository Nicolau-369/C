#include <stdio.h>
#include <stdlib.h>
int main(){
    char str1[100], str2[100];
    printf(“Entre com uma string: ”);
    gets(str1);
    printf(“Entre com outra string: ”);
    gets(str2);
    if(strcmp(str1,str2) == 0)
        printf(“Strings iguais\n”);
    else
        printf(“Strings diferentes\n”);
    system(“pause”);
    return 0;
}