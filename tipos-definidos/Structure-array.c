#include <stdio.h>
#include <stdlib.h>
struct register{
    char name[50];
    int age;
    char adress[50];
    int number;
};
int main(){
    struct register c[4];
    int i;
    for(i=0; i<4; i++){
        gets(c[i].name);
        scanf("%d",&c[i].age);
        gets(c[i].rua);
        scanf("%d",&c[i].number);
    }
    system("pause");
    return 0;
    }
