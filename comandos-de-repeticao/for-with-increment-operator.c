#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);

    // increment of two units
    for (c = a; c <= b; c=c+2){
        printf("%d \n",c);
    }

    // new value is read from the keyboard
    for (c = a; c <= b; scanf("%d",&c)){
        printf("%d \n",c);
    }
    system("pause");
    return 0;
}
