#include <stdio.h>
#include <stdlib.h>
int main(){
    int x = 5;
    printf("Before scanf: x = %d\n",x);
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("After scanf: x = %d\n",x);
    system("pause");
    return 0;
}
