#include <stdio.h>
#include <stdlib.h>
#define SIZE 55

#if SIZE > 100
#undef SIZE
#define SIZE 100
#elif SIZE < 50
#undef SIZE
#define SIZE 50
#else
#undef SIZE
#define SIZE 75
#endif
int main(){
    printf("Valor de SIZE = %d\n",SIZE);
    system("pause");
    return 0;
}
