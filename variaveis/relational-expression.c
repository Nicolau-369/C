#include <stdio.h>
#include <stdlib.h>
void func1(){
    int x; //local variable
}
void func2(){
    int x; //local variable
}
int main(){
    int x;
    scanf("%d",&x);
    if(x == 5){
        int y=1;
        printf("%d\n",y);
    }
    system("pause");
    return 0;
}
