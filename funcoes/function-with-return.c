#include <stdio.h>
#include <stdlib.h>
int sum(int x, int y){
    return x + y;
}

int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Sum = %d\n",sum(a,b));
    system("pause");
    return 0;
}
