#include <stdio.h>
#include <stdlib.h>
int main(){
    int x = 65;
    char ch;
    float f = 25.1;
    //ch receives 8 least significant bits of x
    //convert to ASCII table
    ch = x;
    printf("ch = %c\n",ch);
    //x receives part only the whole part of f
    x = f;
    printf("x = %d\n",x);
    //f receives 8-bit value converted to real
    f = ch;
    printf("f = %f\n",f);
    //f receives the value of x
    f = x;
    printf("f = %f\n",f);
    system("pause");
    return 0;
}
