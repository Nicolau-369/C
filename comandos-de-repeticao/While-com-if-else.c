#include <stdio.h>
#include <stdlib.h>
int main(){
    int i = 0;
    do{
        printf("Value %d\n",i);
        i++;
    }while(i < 10);// That semicolon is necessary!
    system("pause");
    return 0;
}
