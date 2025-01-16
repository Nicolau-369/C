#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter a number (2 digits): ");
    scanf("%2d",&n);
    printf("Number read: %d\n",n);
    fflush(stdin);
    char text[11];
    printf("Enter a word (with: 10 characters):");
    scanf("%10s",text);
    printf("Word read: %s\n",text);
    system("pause");
    return 0;
}
