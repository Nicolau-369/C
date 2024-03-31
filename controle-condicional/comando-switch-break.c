#include <stdio.h>
#include <stdlib.h>
int main(){
	char ch;
	printf(“Digite um simbolo de pontuacao: ”);
	ch = getchar();
	switch( ch ) {
		case ‘.’: printf(“Ponto.\n” );
		case ‘,’: printf(“Virgula.\n” );
		case ‘:’: printf(“Dois pontos.\n”);
		case ‘;’: printf(“Ponto e virgula.\n”);
		default : printf(“Nao eh pontuacao.\n” );
	}
	system(“pause”);
	return 0;
}