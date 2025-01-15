#include <stdio.h>
#include <stdlib.h>
int main(){
    // allocation with malloc
    int *p;
    p = (int *) malloc(50*sizeof(int));
    if(p == NULL){
        printf("Error: Insufficient Memory!\n");
    }
    // allocation with calloc
    int *p1;
    p1 = (int *) calloc(50,sizeof(int));
    if(p1 == NULL){
        printf("Error: Insufficient Memory!\n");
    }
    system("pause");
    return 0;
}
