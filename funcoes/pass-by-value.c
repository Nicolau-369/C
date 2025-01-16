#include <stdio.h>
#include <stdlib.h>

void sum _ more _ one(int n){
    n = n + 1;
    printf("Inside the function: x = %d\n",n);
}

int main(){
    int x = 5;
    printf("Before function: x = %d\n",x);
    sum _ more _ one(x);
    printf("After the function: x = %d\n",x);
    system("pause");
    return 0;
}
