#include <stdio.h>
#include <stdlib.h>
#define N 100
int main(){
    int n = 5;
    float F[N+1];   // Correct: integer and constant expression
    char text[30]; // Correct: integer value
    int Vector[n];   // Wrong: n is variable
    int V[4.5];     // Wrong: 4.5 is not integer
    system("pause");
    return 0;
}
