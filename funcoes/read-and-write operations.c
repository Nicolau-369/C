#include <stdio.h>
#include <stdlib.h>
int menu(){
    int i;
    do {
        printf("Choose an option:\n");
        printf("(1) Option 1\n");
        printf("(2) Option 2\n");
        printf("(3) Option 3\n");
        scanf("%d", &i);
    } while ((i < 1) || (i > 3));
    
    return i;
}

int main(){
    int op = menu();
    printf("You chose the Option %d.\n",op);
    system("pause");
    return 0;
}
