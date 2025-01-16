#include <stdio.h>
#include <stdlib.h>
int main(){
    char text[20];
    printf("Enter characters that are not capital letters: ");
    scanf("%[^A-Z]s",text);
    printf("Text: %s\n",text);
    system("pause");
    return 0;
}
