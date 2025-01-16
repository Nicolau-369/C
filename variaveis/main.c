#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int z = 9;
int main(){
    float x;
    //declares y and assigns a value
    float y = 3;
    //assigns a value to x
    x = 5;
    printf("x = %f\n",x);
    //assigns a constant to x
    x = z;
    printf("x = %f\n",x);
    //assigns the result of a
    //mathematical expression a x
    x = y + 5;
    printf("x = %f\n",x);
    //assigns the result of a function to x
    x = sqrt(9);
    printf("x = %f\n",x);
    system("pause");
    return 0;
}
