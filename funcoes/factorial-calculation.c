#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("Enter a positive integer:");
    int x;
    scanf("%d",&x);
    int i,f = 1;
    for (i=1; i<=x; i++)
        f = f * i;

    printf("The factorial of %d is: %d\n",x,f);
    system("pause");
    return 0;
}
