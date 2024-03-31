#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf(“Digite um numero: ”);
	scanf(“%d”, &num);
	if(num == 10){
		printf(“O numero e igual a 10.\n”);
	} else{
	if(num > 10)
		printf(“O numero e maior que 10.\n”);
	else
		printf(“O numero e menor que 10.\n”);
	}
	system(“pause”);
	return 0;
}