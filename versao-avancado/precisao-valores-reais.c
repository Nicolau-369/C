#include <stdio.h>
#include <stdlib.h>
int main(){
    float n = 123.45678;
    printf(“n = %.3f\n”,n);
    printf(“n = %.5f\n”,n);
    printf(“n = %.5e\n”,n);
    printf(“n = %.5g\n”,n);
    system(“pause”);
    return 0;
}