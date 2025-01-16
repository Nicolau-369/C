#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
    if(argc == 1){
        printf("No parameters passed to the program %s\n",argv[0]);
    }else{
        int i;
        printf("Parameters passed to the program %s:\n",argv[0]);
        for(i=1; i<argc; i++)
            printf("Parameters %d: %s\n",i,argv[i]);
    }
    system("pause");
    return 0;
}
