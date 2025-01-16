#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int sum _ int(int n,...){
    va _ list list;
    int i, s = 0;
    va _ start(list,n);
    for(i = 1; i <= n; i++)
        s = s + va _ arg(list,int);
    va _ end(list);
    return s;
}
int main(){
    int sum;
    soma = sum _ int(2,4,5);
    printf("Sum 2 parameters: %d\n",sum);
    soma = sum _ int(3,4,5,6);
    printf("Sum 3 parameters: %d\n",sum);
    soma = sum _ int(4,4,5,6,10);
    printf("Sum 4 parameters: %d\n",sum);
    system("pause");
    return 0;
}
