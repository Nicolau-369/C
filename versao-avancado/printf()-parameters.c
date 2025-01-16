#include <stdio.h>
#include <stdlib.h>
int main(){
    int x = 1, y =2;
    float z = 3;
    printf("One parameters: text\n");
    printf("Two parameters: text e %d\n",x);
    printf("Three parameters: text, %d e %d\n",x,y);
    printf("Four parameters: text, %d, %d e %f\n",x,y,z);
    system("pause");
    return 0;
}
