struct endereco{
    char rua[50];
    int numero;
};
struct cadastro{
    char nome[50];
    int idade;
    struct endereco ender;
};