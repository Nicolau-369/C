#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *arq;
    arq = fopen("ArqGrav.txt","rb");
    if(arq == NULL){
        printf("Problems OPENING the file\n");
        system("pause");
        exit(1);
    }
    int i,total _ read, v[5];
    // reads 5 integer positions from the files
    total _ read = fread(v,sizeof(int),5,arq);
    if(total _ read != 5){
        printf("Error reading file!");
        system("pause");
        exit(1);
    }else{
        for(i = 0; i < 5; i++)
            printf("v[%d] = %d\n",i,v[i]);
    }
    fclose(arq);
    system("pause");
    return 0;
}
