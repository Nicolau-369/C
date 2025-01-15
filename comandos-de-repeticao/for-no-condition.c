#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    // the for command below is an infinite loop
    for (c = a; ; c++){
        printf("%d \n",c);
    }
    system("pause");
    return 0;
}
