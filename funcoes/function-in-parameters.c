// With void
#include <stdio.h>
#include <stdlib.h>

void print(){
    printf("Function test\n");
}

int main(){
    print();
    print(5);
    print(5,'a');

    system("pause");
    return 0;
}

// No void

#include <stdio.h>
#include <stdlib.h>

void print(void){
    printf("Function test\n");
}
int main(){
    print();
    print(5);//ERROR
    print(5,’a’);//ERROR

    system("pause");
    return 0;
}
