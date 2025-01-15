#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    p = (int *) malloc(5*sizeof(int));
    int i;
    for (i=0; i<5; i++){
        printf("Enter the position value %d: ",i);
        scanf("%d",&p[i]);
    }

    system("pause");
    return 0;
}
