#include <stdio.h>
#include <stdlib.h>

int factorial(int n){
    int i,f = 1;
    for(i = 1; i <= n; i++)
        f = f * i;
    return f;    
}

int main(){
    int x,y;
    printf("Enter an integer value: ");
    scanf("%d", &x);
    if(x > 0){
        printf("X is positive\n");
        y = factorial(x);
        printf("Factorial of X is %d\n",y);
    }else{
        if(x < 0)
            printf("X is negative\n");
        else
            printf("X is Zero\n");    
    }
    printf("End of program!\n");
    system('pause');
    return 0;
}
