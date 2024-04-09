#include <stdio.h>
#include <stdlib.h>
int main(){
    int d,m,a;
    printf(“Digite a data no formato dia/mes/ano: ”);
    scanf(“%d/%d/%d”,&d,&m,&a);
    printf(“%d - %d - %d\n”,d,m,a);
    system(“pause”);
    return 0;
}