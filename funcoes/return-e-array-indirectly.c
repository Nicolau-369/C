#include <stdio.h>
#include <stdlib.h>

struct vector{
    int v[5];
};

struct vector return _ array(){
    struct vector v = {1,2,3,4,5};
    return v;
}

int main(){
    int i;
    struct vector vet = return _ array();
    for (i=0; i<5; i++)
        printf("Values: %d \n",vet.v[i]);
    system("pause");
    return 0;
}
