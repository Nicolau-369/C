#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b){return a + b;}
int subtraction(int a, int b){return a - b;}
int product(int a, int b){return a * b;}
int division(int a, int b){return a / b;}
int main(){
    int x,y;
    int (*p)(int,int);
    char ch;
    printf("Enter a mathematical operation (+,-,*,/): ");
    ch = getchar();
    printf("Enter 2 numbers: ");
    scanf("%d %d",&x,&y);
    switch(ch){
        case '+': p = sum; break;
        case '-': p = subtraction; break;
        case '*': p = product; break;
        case '/': p = division; break;
        default: p = NULL;
    }
    if(p!=NULL)
        printf("Result = %d\n",p(x,y));
    else
        printf("Invalid operation\n");
    system("pause");
    return 0;
}
