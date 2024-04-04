#include <stdio.h>
#include <stdlib.h>
int main(){
    char str1[100], str2[100];
    printf(“Entre com uma string: ”);
    gets(str1);
    strcpy(str2, str1);
    printf(“String 1: %s\n”,str1);
    printf(“String 2: %s\n”,str2);
    system(“pause”);
    return 0;
}