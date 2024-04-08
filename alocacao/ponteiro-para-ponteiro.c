#include <stdio.h>
#include <stdlib.h>
int main(){
    char letra=‘a’;
    char *ptrChar;
    char **ptrPtrChar;
    char ***ptrPtr;
    ptrChar = &letra;
    ptrPtrChar = &ptrChar;
    ptrPtr = &ptrPtrChar;
    system(“pause”);
    return 0;
}