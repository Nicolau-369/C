#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct register{
    char name[50];
    int age;
    char adress[50];
    int number;
};
int main(){
    struct register c;
    //Assigns the string "Nicolau" to the name field
    strcpy(c.name,"Nicolau");
    
    //Assigns the value 18 to the age field
    c.age = 18;
    
    //Assigns the string "Vinci Avenue" to the street field
    strcpy(c.adress,“Vinci Avenue”);
    
    //Assigns the value 1082 to the number field
    c.number = 1082;
    
    system("pause");
    return 0;
}
