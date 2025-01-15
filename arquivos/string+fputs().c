#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[20] = "Hello World!";
    int result;
    FILE *arq;
    arq = fopen("ArqGrav.txt","w");
    if(arq == NULL) {
        printf("Problems CREATING the file\n");
        system("pause");
        exit(1);
    }
    result = fputs(str,arq);
    if(result == EOF)
        printf("Recording Error\n");

    fclose(arq);
    system("pause");
    return 0;
}
