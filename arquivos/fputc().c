#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *arq;
    char string[100];
    int i;
    arq = fopen("archive.txt","w");
    if(arq == NULL){
        printf("Error opening file");
        system("pause");
        exit(1);
    }
    printf("Enter the string to be written to the file:");
    gets(string);
    // Write the string, character by character
    for(i = 0; i < strlen(string); i++)
        fputc(string[i], arq);
    fclose(arq);
    system("pause");
    return 0;
}
