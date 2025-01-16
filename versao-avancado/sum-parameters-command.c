#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
    if(argc == 1){
        printf("No parameters to be added\n");
    }else{
        int sum = 0, i;
        printf("Adding the parameters passed to the program %s:\n",argv[0]);
    for(i=1; i<argc; i++)
        soma = sum + atoi(argv[i]);
        printf("Sum = %d\n",sum);
    }
    system("pause");
    return 0;
}
