#include <stdio.h>
#include <stdlib.h>
int main(){
	char ch;
	printf(“Digite um simbolo de pontuacao: ”);
	ch = getchar();
	if(ch == ‘.’)
		printf(“Ponto.\n” );
	else
		if(ch == ‘,’)
			printf(“Virgula.\n” );
	else
		if(ch == ‘:’)
			printf(“Dois pontos.\n” );
	else
		if(ch == ‘;’)
			printf(“Ponto e virgula.\n”);
		else
			printf(“Nao eh pontuacao.\n” );
	system(“pause”);
	return 0;
}