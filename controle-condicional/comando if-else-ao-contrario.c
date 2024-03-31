#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf (“Digite um numero: ”);
	scanf(“%d”, &num);
	if(num == 10){
		printf (“O numero e igual a 10.\n”);
	} else(num != 10){ //ERRO!
		printf (“O numero e diferente de 10.\n”);
	}
	system(“pause”);
	return 0;
}