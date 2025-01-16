#include <stdio.h>
#include <stdlib.h>
struct point {
    int x, y;
};
void print(struct point p){
    printf("x = %d\n",p.x);
    printf("y = %d\n",p.y);
}
int main(){
    struct point p1 = {10,20};
    print(p1);

    system("pause");
    return 0;
}
