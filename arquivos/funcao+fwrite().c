#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *arq;
    arq = fopen("ArqGrav.txt","wb");
    if(arq == NULL){
        printf("Problems OPENING the file\n);
        system(“pause”);
        exit(1);
    }
    char str[20] = "Hello World!";
    float x = 5;
    int v[5] = {1,2,3,4,5};
    // write the entire string to the file
    fwrite(str,sizeof(char),strlen(str),arq);
    // writes only the first 5 characters of the string
    fwrite(str,sizeof(char),5,arq);
    // write the value of x to the file
    fwrite(&x,sizeof(float),1,arq);
    // writes the entire array to the file (5 positions)
    fwrite(v,sizeof(int),5,arq);
    // writes only the first 2 positions of the array
    fwrite(v,sizeof(int),2,arq);
    fclose(arq);
    system("pause");
    return 0;
}
