cmake_minimum_required(VERSION 3.28)
project(Test_C C)

set(CMAKE_C_STANDARD 17)

add_executable(Test_C main.c
        comentario.c
        matematica/funcoe-aritmeticas.c
        variaveis/bit-a-bit.c
        variaveis/com-operador.c
        variaveis/escopo-global.c
        variaveis/escopo-local.c
        variaveis/expressao-relacional.c
        variaveis/float.c
        variaveis/getchar.c
        variaveis/leitura-de-dados.c
        variaveis/logico-bit-a-bit.c
        variaveis/main.c
        variaveis/main-1.c
        variaveis/main-2.c
        variaveis/modeladores-do-tipo.c
        variaveis/operador-de-deslocamento.c
        operador-de-pre-incremento.c
        operadores.c
        variaveis/operadores-1.c
        variaveis/operador-logico.c
        variaveis/printf.c
        variaveis/printf-1.c
        variaveis/putchar.c
        variaveis/scanf.c
        variaveis/sem-operador.c
        variaveis/variaveis.c
        variaveis/variaveis-1.c
        controle-condicional/condicao.c
        controle-condicional/comando-if-2.c
        controle-condicional/comando-if.c)
