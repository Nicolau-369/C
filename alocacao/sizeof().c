#include <stdio.h>
#include <stdlib.h>
struct point{
    int x,y;
};
int main(){
    printf("Size char: %d\n",sizeof(char));
    printf("Size int: %d\n",sizeof(int));
    printf("Size float: %d\n",sizeof(float));
    printf("Size double: %d\n",sizeof(double));
    printf("Size struct point: %d\n",sizeof(struct point));
    int x;
    double y;
    printf("Variable size x: %d\n",sizeof x);
    printf("Variable size y: %d\n",sizeof y);
    system("pause");
    return 0;
}
