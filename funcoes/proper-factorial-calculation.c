#include <stdio.h>
#include <stdlib.h>

int fatorial (int n){
    int i,f = 1;
    for (i=1; i<=n; i++)
        f = f * i;
    return f;
}

int main(){
    printf("Enter a positive integer:");
    int x;
    scanf("%d",&x);
    int fat = fatorial(x);
    printf("The factorial of %d is: %d\n",x,fat);
    
    system("pause");
    return 0;
}
