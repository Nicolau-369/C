#include <stdio.h>
#include <stdlib.h>
int main(){
    char text[20];
    printf("Type some vowels: ");
    scanf("%[aeiou]s",text);
    printf("Text: %s\n",text);
    system("pause");
    return 0;
}
