#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    do {
        printf ("Choose an option:\n");
        printf ("(1) Option 1\n");
        printf ("(2) Option 2\n");
        printf ("(3) Option 3\n");
        scanf(“%d”, &i);
    } while ((i < 1) || (i > 3));
    printf ("You have chosen Option %de.\n",i);
    system("pause");
    return 0;
    }
