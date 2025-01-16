#include <stdio.h>
#include <stdlib.h>
struct register{
    char name[50];
    int age;
    char adress[50];
    int number;
};
int main(){
    struct register c;
    //Reads a string from the keyboard and stores it in the name field
    gets(c.name);
    
    //Reads an integer value from the keyboard and stores it in the age field
    scanf("%d",&c.age);
    
    //Read a string from the keyboard and store it in the street field
    gets(c.adress);
    
    //Reads an integer value from the keyboard and stores it in the number field
    scanf("%d",&c.number);
    system("pause");
    return 0;
}
