#include <stdio.h>
#include <stdlib.h>
struct point {
    int x;
    int y;
};
struct new_point {
    int x;
    int y;
};
int main(){
    struct point p1, p2= {1,2};
    struct new_point p3= {3,4};
    
    p1 = p2;
    printf("p1 = %d e %d", p1.x,p1.y);
    
    //ERROR! DIFFERENT TYPES
    p1 = p3;
    printf("p1 = %d e %d", p1.x,p1.y);
        
    system("pause");
    return 0;
}
