#include <stdio.h>
#include <stdlib.h>
typedef unsigned int positives[5];
int main(){
    positives v;
    int i;
    for (i = 0; i < 5; i++){
        printf("Enter the value of v[%d]:",i);
        scanf("%d",&v[i]);
    }

    for (i = 0; i < 5; i++)
        printf("Value of v[%d]: %d\n",i,v[i]);
    
    system("pause");
    return 0;
}
