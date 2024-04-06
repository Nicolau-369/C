#include <stdio.h>
#include <stdlib.h>
struct cadastro{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};
int main(){
    struct cadastro c;
    //Lê do teclado uma string e armazena no campo nome
    gets(c.nome);
    
    //Lê do teclado um valor inteiro e armazena no campo idade
    scanf(“%d”,&c.idade);
    
    //Lê do teclado uma string e armazena no campo rua
    gets(c.rua);
    
    //Lê do teclado um valor inteiro e armazena no campo numero
    scanf(“%d”,&c.numero);
    system(“pause”);
    return 0;
}