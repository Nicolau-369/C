#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf(“%d”,&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    while (a < b){
        a = a + 1;
        printf("%d \n",a);
    }
    system("pause");
    return 0;
}
