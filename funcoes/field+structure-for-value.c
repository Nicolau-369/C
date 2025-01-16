#include <stdio.h>
#include <stdlib.h>
struct point {
    int x, y;
};
void print _ value(int n){
    printf("value = %d\n",n);
}
int main(){
    struct point p1 = {10,20};
    print _ value(p1.x);
    print _ value(p1.y);
    system("pause");
    return 0;
}
