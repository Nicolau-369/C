#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *arq;
    arq = fopen(“ArqGrav.txt”,“rb”);
    if(arq == NULL){
        printf(“Erro\n”);
        system(“pause”);
        exit(1);
    }
    char str[20];
    int t;
    fread(&t,sizeof(int),1,arq);
    fread(str,sizeof(char),t,arq);
    str[t] = ‘\0’;
    printf(“%s\n”,str);
    fclose(arq);
    system(“pause”);
    return 0;
}