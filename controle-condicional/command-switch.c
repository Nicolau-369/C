#include <stdio.h>
#include <stdlib.h>
int main(){
	char ch;
	printf("Enter a punctuation symbol: ");
	ch = getchar();
	switch( ch ) {
		case '.': printf("Point.\n" ); break;
		case ',': printf("Comma.\n" ); break;
		case ':': printf("Two points.\n" ); break;
		case ';': printf("Semicolon.\n"); break;
		default : printf("It's not punctuation.\n" );
	}
	system("pause");
	return 0;
}
