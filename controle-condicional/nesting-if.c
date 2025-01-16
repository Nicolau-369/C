#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if(num == 10){
		printf("The number is equal to 10.\n");
	} else{
	if(num > 10)
		printf("The number is greater than 10.\n");
	else
		printf("The number is less than 10.\n");
	}
	system("pause");
	return 0;
}
