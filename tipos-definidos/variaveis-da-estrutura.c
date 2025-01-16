#include <stdio.h>
#include <stdlib.h>
struct address{
char street[50];
int number;
};
struct register{
    char name[50];
    int age;
    struct address ender;
};
int main(){
    struct register c;
    //Reads a string from the keyboard and stores it in the name field
    gets(c.name);

    //Reads an integer value from the keyboard and stores it in the age field
    scanf("%d",&c.age);

    //Read a string from the keyboard 
    //and store it in the street field of the ender variable
    gets(c.ender.address);

    //Reads an integer value from the keyboard
    //and stores it in the number field of the ender variable
    scanf("%d",&c.ender.number);

    system("pause");
    return 0;
}
