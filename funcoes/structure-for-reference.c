#include <stdio.h>
#include <stdlib.h>
struct point {
    int x, y;
};
void atribui(struct point *p){
    (*p).x = 10;
    (*p).y = 20;
}
int main(){
    struct point p1;
    atribui(&p1);
    printf("x = %d\n",p1.x);
    printf("y = %d\n",p1.y);
    system("pause");
    return 0;
}
