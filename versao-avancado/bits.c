// trabalhando com campos de bits
#include <stdio.h>
#include <stdlib.h>
struct status{
    unsigned int ligado:1;
    signed int valor:4;
    unsigned int :3;
};
void check _ status(struct status s){
    if(s.ligado == 1)
    printf(“LIGADO\n”);
    if(s.ligado == 0)
    printf(“DESLIGADO\n”);
}
int main(){
    struct status ESTADO;
    ESTADO.ligado = 1;
    check _ status(ESTADO);
    system(“pause”);
    return 0;
}
