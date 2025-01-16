#include <stdio.h>
#include <stdlib.h>
union type{
    short int x;
    unsigned char c;
};
int main(){
    union type t;
    t.x = 1545;
    printf("x = %d\n",t.x);
    printf("c = %d\n",t.c);
    t.c = 69;
    printf("x = %d\n",t.x);
    printf("c = %d\n",t.c);
    system("pause");
    return 0;
}
