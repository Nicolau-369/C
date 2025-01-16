// With macro
#include <stdio.h>
#include <stdlib.h>
#define bigger(x,y) x>y?x:y
int main(){
    int a = 5;
    int b = 8;
    int c = maior(a,b);
    printf("Highest value = %d\n",c);
    system("pause");
    return 0;
}

// No macro
#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 5;
    int b = 8;
    int c = a>b?a:b;
    printf("Highest value = %d\n",c);
    system("pause");
    return 0;
}

// macros with parentheses
#include <stdio.h>
#include <stdlib.h>
#define prod1(x,y) x*y;
#define prod2(x,y) (x)*(y);
int main(){
    int a = 1, b = 2;
    int c = prod1(a+2,b);
    int d = prod2(a+2,b);
    printf("Highest value c = %d\n",c);
    printf("Highest value d = %d\n",d);
    system("pause");
    return 0;
}

// creating a macro with #define and curly braces ({ })
#include<stdio.h>
#include<stdlib.h>
#define REPLACEMENT(a,b,c) {c t=a; a=b; b=t;}
int main(){
    int x=10;
    int y=20;
    printf("%d %d\n", x, y);
    REPLACEMENT(x, y, int);
    printf("%d %d\n", x, y);
    system("pause");
    return 0;
}
