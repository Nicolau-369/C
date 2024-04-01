// goto
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i = 0;
    inicio:
    if(i < 5){
        printf(“Numero %d\n”,i);
        i++;
        goto inicio;
    }
    system(“pause”);
    return 0;
}

// for
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i;
    for(i = 0; i < 5; i++)
        printf(“Numero %d\n”,i);
    
    system(“pause”);
    return 0;
}