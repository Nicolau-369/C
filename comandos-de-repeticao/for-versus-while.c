// For
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, s = 0;
    for(i = 1; i <= 10; i++){
        s = s + i;
    }
    printf("Sum = %d \n",s);
    system("pause");
    return 0;
}

// While
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, s = 0;
    i = 1
    while (i <= 10){
        s = s + i;
        i++;
    }
    printf("Sum = %d \n",s);
    system("pause");
    return 0;
}
