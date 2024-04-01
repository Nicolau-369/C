// For
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j;
    for (i=1;i<5;i++){
        for (j=1; j<5; j++){
            if(i==j)
                printf(“1 ”);
            else
                printf(“0 ”);
        }
        printf(“\n”);
    }
    system(“pause”);
    return 0;
}

// While
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i=1,j;
    while(i<5){
        j = 1;
        while(j<5){
            if(i==j)
                printf(“1 ”);
            else
                printf(“0 ”);
            j++;
        }
        printf(“\n”);
        i++;
    }
    system(“pause”);
    return 0;
}