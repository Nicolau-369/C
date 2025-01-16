#include <stdio.h>
#include <stdlib.h>
int main(){
	char ch;
	printf("Enter a punctuation symbol: ");
	ch = getchar();
	if(ch == '.')
		printf("Point.\n" );
	else
		if(ch == ',')
			printf("Comma.\n" );
	else
		if(ch == ':')
			printf("Two points.\n" );
	else
		if(ch == ';')
			printf("Semicolon.\n");
		else
			printf("It's not punctuation.\n" );
	system("pause");
	return 0;
}
