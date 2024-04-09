#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 125;
    printf(“n = %.8d (decimal)\n”, n);
    printf(“n = %.8o (octal)\n”, n);
    printf(“n = %.8X (hexadecimal)\n”, n);
    system(“pause”);
    return 0;
}