#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 125;
    int width = 10;
    //width defined within the field
    printf("n = %10d\n",n);
    //width defined by an integer variable
    printf("n = %*d\n",largura,n);
    system("pause");
    return 0;
}
