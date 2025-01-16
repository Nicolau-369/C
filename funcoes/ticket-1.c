// By value
#include <stdio.h>
#include <stdlib.h>

void Replacement(int a,int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Within: %d e %d\n",a,b);
}

int main(){
    int x = 2;
    int y = 3;
    printf("Before: %d e %d\n",x,y);
    Troca(x,y);
    printf("After: %d e %d\n",x,y);
    system("pause");
    return 0;
}

// By reference
#include <stdio.h>
#include <stdlib.h>

void Replacement(int*a,int*b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("Within: %d e %d\n",*a,*b);
}

int main(){
    int x = 2;
    int y = 3;
    printf("Before: %d e %d\n",x,y);
    Troca(&x,&y);
    printf("After: %d e %d\n",x,y);
    system("pause");
    return 0;
}
