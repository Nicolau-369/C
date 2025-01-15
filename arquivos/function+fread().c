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
    char str1[20],str2[20];
    float x;
    int i,v1[5],v2[2];
    // read the entire string from the file
    fread(str1,sizeof(char),12,arq);
    str1[12] = ‘\0’;
    printf("%s\n",str1);
    // reads only the first 5 characters of the string
    fread(str2,sizeof(char),5,arq);
    str2[5] = ‘\0’;
    printf("%s\n",str2);
    // reads the value of x from the file
    fread(&x,sizeof(float),1,arq);
    printf("%f\n",x);
    // reads the entire array from the file (5 positions)
    fread(v1,sizeof(int),5,arq);
    for(i = 0; i < 5; i++)
        printf("v1[%d] = %d\n",i,v1[i]);
    fread(v2,sizeof(int),2,arq);
    // reads only the first 2 positions of the array
    for(i = 0; i < 2; i++)
        printf("v2[%d] = %d\n",i,v2[i]);
    fclose(arq);
    system("pause");
    return 0;
}
