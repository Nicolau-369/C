#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *arq;
    char c;
    arq = fopen("arquivo.txt","r");
    if(arq == NULL){
        printf("Error opening file");
        system("pause");
        exit(1);
    }
    while((c = fgetc(arq)) != EOF)
        printf("%c",c);
    fclose(arq);
    system("pause");
    return 0;
}
