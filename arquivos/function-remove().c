#include <stdio.h>
#include <stdlib.h>
int main(){
    int status;
    status = remove("ArqGrav.txt");
    if(status != 0){
        printf("Error removing file.\n");
        system("pause");
        exit(1);
    }else
        printf("File removed successfully.\n");
    
    system("pause");
    return 0;
}
