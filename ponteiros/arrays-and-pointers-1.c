#include <stdio.h>
#include <stdlib.h>
int main(){
    int vet[5] = {1,2,3,4,5};
    int *p, indice = 2;
    p = vet;
    //vet[0] is equivalent to *p;
    printf("%d\n",*p);
    printf("%d\n",vet[0]);
    //vet[indice] is equivalent to *(p+index);
    printf("%d\n",vet[index]);
    printf("%d\n",*(p+index));
    //vet is equivalent to &vet[0];
    printf("%d\n",vet);
    printf("%d\n",&vet[0]);
    //&vet[index] is equivalent to (vet+index);
    printf("%d\n",&vet[index]);
    printf("%d\n",(vet+index));
    system("pause");
    return 0;
}
