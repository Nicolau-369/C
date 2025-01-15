#include <stdio.h>
#include <stdlib.h>
int main(){
    char str1[15] = 'Good';
    char str2[15] = 'Morning';
    strcat(str1,str2);
    printf('%s',str1);
    system('pause');
    return 0;
}
