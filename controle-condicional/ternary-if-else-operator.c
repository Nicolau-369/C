#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,y,z;
	printf("Enter x:");
	scanf("%d",&x);
	printf("Enter y:");
	scanf("%d",&y);
	if(x > y)
		z = x;
	else
		z = y;
	printf("Bigger = %d\n",z);
	system("pause");
	return 0;
}
