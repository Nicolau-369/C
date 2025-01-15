#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    for (c = a; c <= b; c++){
        printf("%d \n",c);
    }
    system("pause");
    return 0;
}
