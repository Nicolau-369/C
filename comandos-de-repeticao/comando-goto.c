#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,k;
    for(i = 0; i < 5; i++)
        for(j = 0; j < 5; j++)
            for(k = 0; k < 5; k++)
                if(i == 2 && j == 3 && k == 1)
                    goto fim;
                else
                    printf(“Posicao [%d,%d,%d]\n”,i,j,k);

    fim:
    printf(“Fim do programa\n”);
    
    system(“pause”);
    return 0;
}