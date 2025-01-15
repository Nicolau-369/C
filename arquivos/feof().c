#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fp;
    char c;
    fp = fopen("arquivo.txt","r");
    if(fp==NULL){
        printf("Error opening file\n");
        system("pause");
        exit(1);
    }
    while(!feof(fp)){
        c = fgetc(fp);
        printf("%c",c);
    }
    fclose(fp);
    system("pause");
    return 0;
}
