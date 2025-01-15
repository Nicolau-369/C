#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *arq;
    arq = fopen("DoesNotExist.txt","r");
    if(arq == NULL)
        perror("The following error occurred");
    else
        fclose(arq);
    
    system("pause");
    return 0;
}
