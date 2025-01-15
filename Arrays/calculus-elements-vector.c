#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, list[5] = {3,51,18,2,45};
    int sum = 0;
    for(i=0; i < 5; i++)
        sum = sum + list[i];
    float average = sum / 5.0;
    printf("Average = %f\n", average);
    system('pause');
    return 0;
}
