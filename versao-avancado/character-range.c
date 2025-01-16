#include <stdio.h>
#include <stdlib.h>
int main(){
    char text[20];
    printf("Enter letters and numbers: ");
    scanf("%[A-Z0-9]",text);
    printf("Text: %s\n",text);
    system("pause");
    return 0;
}
