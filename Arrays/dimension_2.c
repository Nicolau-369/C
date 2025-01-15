#include <stdio.h>
#include <stdlib.h>
int main(){
    int cub[5][5][5];
    int i,j,k;
    // fills the 3-dimensional array with zeros
    for (i=0; i < 5; i++){
        for (j=0; j < 5; j++){
            for (k=0; k < 5; k++){
                cub[i][j][k] = 0;
            }
        }
    }
    system("pause");
    return 0;
}