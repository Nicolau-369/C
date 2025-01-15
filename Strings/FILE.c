#include <stdio.h>
#include <stdlib.h>
int main(){
    char name[30];
    printf("Enter a name: ");
    fgets (name, 30, stdin);
    printf("The name entered was: %s",name);
    system("pause");
    return 0;
}
