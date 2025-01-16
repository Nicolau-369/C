// goto
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i = 0;
    start:
    if(i < 5){
        printf("Number %d\n",i);
        i++;
        goto start;
    }
    system("pause");
    return 0;
}

// for
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    for(i = 0; i < 5; i++)
        printf("Number %d\n",i);
    
    system("pause");
    return 0;
}
