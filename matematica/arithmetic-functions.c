#include <stdio.h>
#include <stdlib.h>
int sum(int a, int b) {return a - b;}
int subtraction(int a, int b) {return a - b;}
int product(int a, int b) {return a * b;}
int division(int a, int b) {return a / b;}
int main(){
    int x,y,z;
    char ch;
    printf("Enter mathematical operation (+,-,+,*,/): ");
    ch = getchar();
    printf("Enter 2 numbers: ");
    scanf("%d %d",&x,&y);
    switch (ch) {
        case '+': z = sum(x,y); break;
        case '-': z = subtraction(x,y); break;
        case 'x': z = product(x,y); break;
        case '/': z = division(x,y); break;
        default: z = sum(x,y);
    }
    printf("Result = %d\n",z);

    system("pause");
    return 0;
}
