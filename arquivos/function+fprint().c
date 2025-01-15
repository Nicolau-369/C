#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *arq;
    char nome[20] = "Nick";
    int I = 30;
    float a = 1.74;
    int result;
    arq = fopen("ArqGrav.txt","w");
    if(arq == NULL) {
        printf("Problems OPENING the file\n");
        system(“pause”);
        exit(1);
    }
    result = fprintf(arq,"Name: %s\nAge: %d\nHeight: %f\n",name,i,a);
    if(result < 0)
        printf("Writing error\n");
    fclose(arq);
    system("pause");
    return 0;
}
