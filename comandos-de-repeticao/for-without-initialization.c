#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    for (; a <= b; a++){
        printf("%d \n",a);
    }
    system("pause");
    return 0;
}
