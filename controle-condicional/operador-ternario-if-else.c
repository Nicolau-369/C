#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,y,z;
	printf(“Digite x:”);
	scanf(“%d”,&x);
	printf(“Digite y:”);
	scanf(“%d”,&y);
	if(x > y)
		z = x;
	else
		z = y;
	printf(“Maior = %d\n”,z);
	system(“pause”);
	return 0;
}
