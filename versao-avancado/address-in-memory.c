#include <stdio.h>
#include <stdlib.h>
int max(int a, int b){
    return (a > b) ? a : b;
}
int main(){
    int x,y,z;
    int (*p)(int,int);
    printf("Enter 2 numbers: ");
    scanf(“%d %d”,&x,&y);
    //pointer receives function address
    p = max;
    z = p(x,y);
    printf("Bigger = %d\n",z);
    system("pause");
    return 0;
}
