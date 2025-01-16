#include <stdio.h>
#include <stdlib.h>
int main(){
    unsigned int n = 2147483647;
    printf("Value dolar: %d\n",n);
    printf("Value dolar: %u\n",n);
    n = n + 1;
    printf("Value dolar: %d\n",n);
    printf("Value dolar: %u\n",n);
    printf("Adress of n = %p\n",&n);
    system("pause");
    return 0;
}
