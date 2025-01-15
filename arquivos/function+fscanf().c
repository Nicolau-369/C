#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *arq;
    char text[20], name[20];
    int i;
    float a;
    int result;
    arq = fopen("ArqGrav.txt","r");
    if(arq == NULL) {
        printf("Problems OPENING the file\n");
        system("pause");
        exit(1);
    }
    fscanf(arq,"%s%s",text,name);
    printf("%s %s\n",text,name);
    fscanf(arq,"%s %d",text,&i);
    printf("%s %d\n",text,i);
    fscanf(arq,"%s%f",text,&a);
    printf("%s %f\n",text,a);
    fclose(arq);
    system("pause");
    return 0;
}
