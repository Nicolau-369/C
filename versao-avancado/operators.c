// Operators #
#include<stdio.h>
#include<stdlib.h>
#define str(x) #x
int main(){
    printf(str(Test!\n));
    system("pause");
    return 0;
}

// Operators ##
#include<stdio.h>
#include<stdlib.h>
#define concatenates(x,y) x ## y
int main(){
    concatenates(print,f)("Test!\n");
    system("pause");
    return 0;
}

// #define & #undef
#include <stdio.h>
#include <stdlib.h>
#define value 10
int main(){
    printf(“Value = %d\n”,value);
    #undef value
    #define value 20
    printf("New value = %d\n",value);
    system("pause");
    return 0;
}

// With #ifdef
#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int main(){
    #ifdef SIZE

    int vetor[SIZE];
    #endif
    system("pause");
    return 0;
}

// With #ifndef
#include<stdio.h>
#include<stdlib.h>

int main(){
    #ifndef SIZE
    #define SIZE 100
    int vetor[SIZE];
    #endif
    system("pause");
    return 0;
}
