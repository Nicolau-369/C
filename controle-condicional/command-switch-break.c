#include <stdio.h>
#include <stdlib.h>
int main(){
	char ch;
	printf("Enter a punctuation symbol: ");
	ch = getchar();
	switch( ch ) {
		case '.': printf("Period.\n" );
		case ',': printf("Comma.\n" );
		case ':': printf("Two points.\n");
		case ';': printf("Semicolon.\n");
		default : printf("It's not punctuation.\n" );
	}
	system("pause");
	return 0;
}
