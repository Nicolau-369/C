#include <stdio.h>
#include <stdlib.h>
int main(){
    char str[20];
    char *result;
    FILE *arq;
    arq = fopen("ArqGrav.txt","r");
    if(arq == NULL) {
        printf("Problems OPENING the file\n");
        system("pause");
        exit(1);
    }
    result = fgets(str,13,arq);
    if(result == NULL)
        printf("Reading error\n");
    else
        printf("%s",str);

    fclose(arq);
    system("pause");
    return 0;
}
