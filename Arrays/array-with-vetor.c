#include <stdio.h>
#include <stdlib.h>
int main(){
    int notes[100];
    int i;
    for (i = 0; i < 100; i++){
        printf("Enter the students grade %d",i);
        scanf("%d",&notes[i]);
    }
    system('pause');
    return 0;
}
