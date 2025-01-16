#include <stdio.h>
#include <stdlib.h>
int main(){
    float n = 123.45678;
    int precision = 10;
    //precision defined by an integer variable
    printf("n = %.*f\n",precision,n);
    system("pause");
    return 0;
}
