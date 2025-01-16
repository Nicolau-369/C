#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b){return a + b;}
int subtraction(int a, int b){return a – b;}
int product(int a, int b){return a * b;}
int division(int a, int b){return a / b;}
int main(){
    int x,y,index = -1;
    int (*p[4])(int,int);
    p[0] = sum;
    p[1] = subtraction;
    p[2] = product;
    p[3] = division;
    char ch;
    printf("Enter a mathematical operation (+,-,*,/): ");
    ch = getchar();
    printf("Enter 2 numbers: ");
    scanf("%d %d",&x,&y);
    switch(ch){
        case '+': index = 0; break;
        case '-': index = 1; break;
        case '*': index = 2; break;
        case '/': index = 3; break;
        default: index = -1;
    }
    if(index >= 0)
    printf("Resultado = %d\n",p[index](x,y));
    else
        printf("Invalid operation\n");
    system("pause");
    return 0;
}
