#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};
int main(){
    struct cadastro c;
    //Atribui a string “Nicolau” para o campo nome
    strcpy(c.nome,“Nicolau”);
    
    //Atribui o valor 18 para o campo idade
    c.idade = 18;
    
    //Atribui a string “Avenida Brasil” para o campo rua
    strcpy(c.rua,“Avenida Vinci”);
    
    //Atribui o valor 1082 para o campo numero
    c.numero = 1082;
    
    system(“pause”);
    return 0;
}