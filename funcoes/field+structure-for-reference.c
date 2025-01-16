#include <stdio.h>
#include <stdlib.h>
struct point {
    int x, y;
};
void sum _ print _ value(int *n){
    *n = *n + 1;
    printf("value = %d\n",*n);
}
int main(){
    struct ponto p1 = {10,20};
    sum _ print _ value(&p1.x);
    sum _ print _ value(&p1.y);
    system("pause");
    return 0;
}
