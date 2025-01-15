#include <stdio.h>
#include <stdlib.h>
int main(){
    char str1[100], str2[100];
    printf("Enter a string: ");
    gets(str1);
    printf("Enter another string: ");
    gets(str2);
    if(strcmp(str1,str2) == 0)
        printf("Strings equal\n");
    else
        printf("Strings different\n");
    system("pause");
    return 0;
}
