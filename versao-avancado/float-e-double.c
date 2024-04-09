#include <stdio.h>
#include <stdlib.h>
int main(){
    float f = 0.00000025;
    double d = 10.53;
    printf(“Valor real: %e\n”,f);
    printf(“Valor real: %E\n”,f);
    printf(“Valor real: %g\n”,d);
    printf(“Valor real: %G\n”,f);
    system(“pause”);
    return 0;
}