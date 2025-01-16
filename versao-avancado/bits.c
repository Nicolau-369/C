// working with bit fields
#include <stdio.h>
#include <stdlib.h>
struct status{
    unsigned int connected:1;
    signed int value:4;
    unsigned int :3;
};
void check _ status(struct status s){
    if(s.connected == 1)
    printf("CONNECTED\n");
    if(s.connected == 0)
    printf("DISCONNECTED\n");
}
int main(){
    struct status STATE;
    STATE.connected = 1;
    check _ status(STATE);
    system("pause");
    return 0;
}
