#include <stdio.h>
#include <stdlib.h>
void print(int n){
    int i;
    for (i=1; i<=n; i++)
        printf("Line %d \n",i);
}

int main(){
    print(5);
    printf("End of program!\n");

    system("pause");
    return 0;
}
