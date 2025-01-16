#include <stdio.h>
#include <stdlib.h>
int main(){
	char ch;
	int a,b;
	printf("Enter a mathematical operation: ");
	ch = getchar();
	printf("Enter two integers: ");
	scanf("%d%d",&a,&b);
	switch( ch ) {
		case '+':{
			int c = a + b;
			printf("Sum: %d\n",c);}
			break;
		case '-':{
			int d = a – b;
			printf("Subtraction: %of\n",d);}
			break;
		case '*':{
			int e = a * b;
			printf("Product: %d\n",e);}
			break;
		case '/':{
			int f = a / b;
			printf("Division: %of\n",f);}
			break;
		default : printf("It’s not an operation.\n");
	}
	system("pause");
	return 0;
}
