// Com #define
#include <stdio.h>
#include <stdlib.h>
#define valor
int main(){
    #ifdef valor
        printf(“Valor definido\n”);
    #else
        printf(“Valor NAO definido\n”);
    #endif
    system(“pause”);
    return 0;
}

// Sem #define
#include <stdio.h>
#include <stdlib.h>

int main(){
    #ifdef valor
        printf(“Valor definido\n”);
    #else
        printf(“Valor NAO
    definido\n”);
    #endif
    system(“pause”);
    return 0;
}

// constantes com #define
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
int main(){
    printf(“Valor de PI = %f\n”,PI);
    system(“pause”);
    return 0;
}