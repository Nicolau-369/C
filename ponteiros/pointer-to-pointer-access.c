#include <stdio.h>
#include <stdlib.h>
int main(){
    char letter=‘a’;
    char *ptrChar = &letter;
    char **ptrPtrChar = &ptrChar;
    char ***ptrPtr = &ptrPtrChar;
    printf(“Content in *ptrChar: %c\n”,*ptrChar);
    printf(“Content in **ptrPtrChar:
    %c\n”,**ptrPtrChar);
    printf(“Content in ***ptrPtr: %c\n”,***ptrPtr);
    system(“pause”);
    return 0;
}
