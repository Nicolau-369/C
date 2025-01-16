#include <stdio.h>
#include <stdlib.h>

int Square (int a){
    return (a*a);
}

int main(){
    int n1,n2;
    printf("Enter a number: ");
    scanf("%d", &n1);
    n2 = Square(n1);
    printf("Its square is worth: %d\n", n2);
    system("pause");
    return 0;
}
