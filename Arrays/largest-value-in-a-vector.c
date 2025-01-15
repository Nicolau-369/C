#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, list[5] = {3,18,2,51,45};
    int Bigger = list[0];
    for(i=1; i<5; i++){
        if(Bigger < list[i])
            Bigger = list[i];
    }
    printf("Bigger = %d\n", Bigger);
    system("pause");
    return 0;
}
