#include <stdio.h>
#include <stdlib.h>
int main(){
    void *p = 0x5DC;
    printf("p = Hexadecimal: %p Decimal: %d \n",p,p);
    //Increment p by one position
    p++;
    printf("p = Hexadecimal: %p Decimal: %d \n",p,p);
    //Increment p by 15 positions
    p = p + 15;
    printf("p = Hexadecimal: %p Decimal: %d \n",p,p);
    //Decrease p by 2 positions
    p = p - 2;
    printf("p = Hexadecimal: %p Decimal: %d \n",p,p);
    system("pause");
    return 0;
}
