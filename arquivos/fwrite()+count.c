#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *arq;
    arq = fopen("ArqGrav.txt","wb");
    if(arq == NULL){
        printf("Problems creating the file\n");
        system("pause");
        exit(1);
    }
    int total _ recorded, v[5] = {1,2,3,4,5};
    // writes the entire array to the file (5 positions)
    total _ recorded = fwrite(v,sizeof(int),5,arq);
    if(total _ recorded != 5){
        printf("Error writing file!");
        system("pause");
        exit(1);
    }
    fclose(arq);
    system("pause");
    return 0;
}
