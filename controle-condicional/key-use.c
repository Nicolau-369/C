#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf ("Enter a number: ");
	scanf("%d",&num);
	if(num > 10)
		printf("The number is greater than 10\n");

/*OR
if(num > 10){
	printf ("The number is greater than 10\n");
}
*/
system("pause");
return 0;
}
