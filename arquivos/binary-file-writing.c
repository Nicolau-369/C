#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    fp = fopen("exemple.bin","wb");
    if(fp == NULL)
        printf("Error opening file.\n");

    fclose(fp);
    system("pause");
    return 0;
}
