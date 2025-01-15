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
    int i;
    for(i = 0; i < 5; i++){
        c = fgetc(arq);
        printf("%c",c);
    }
    fclose(arq);
    system("pause");
    return 0;
}
