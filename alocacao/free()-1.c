#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p,i;
    p = (int *) malloc(50*sizeof(int));
    if(p == NULL){
        printf("Error: Not Enough Memory!\n");
        system("pause");
        exit(1);
    }
    for (i = 0; i < 50; i++){
        p[i] = i+1;
    }
    // frees the allocated memory
    free(p);
    // try to print the array
    // whose memory has been released
    for (i = 0; i < 50; i++){
        printf("%d\n",p[i]);
    }
    system("pause");
    return 0;
}
