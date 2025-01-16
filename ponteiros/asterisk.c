#include <stdio.h>
#include <stdlib.h>
int main(){
    //Declares an int variable containing the value 10
    int count = 10;
    //Declares a pointer to int
    int *p;
    //Assigns the address of the int variable to the pointer
    p = &count;
    printf("Content pointed by p: %d \n",*p);
    //Assigns a new value to the memory location pointed to by p
    *p = 12;
    printf("Content pointed by p: %d \n",*p);
    printf("Count content: %d \n",count);

    system("pause");
    return 0;
}
