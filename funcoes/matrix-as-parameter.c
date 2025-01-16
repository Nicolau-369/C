#include <stdio.h>
#include <stdlib.h>

void print _ matrix(int m[][2], int n){
    int i,j;
    for (i=0; i<n;i++)
        for (j=0; j< 2;j++)
            printf("%d \n", m[i][j]);
}

int main(){
    int mat[3][2] = {{1,2},{3,4},{5,6}};
    print _ matrix(mat,3);
    system("pause");
    return 0;
}
