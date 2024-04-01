#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    printf(“Digite o valor de a: ”);
    scanf(“%d”,&a);
    printf(“Digite o valor de b: ”);
    scanf(“%d”,&b);
    for (; a <= b; a++){
        printf(“%d \n”,a);
    }
    system(“pause”);
    return 0;
}