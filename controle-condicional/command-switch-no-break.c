#include <stdio.h>
#include <stdlib.h>
int main(){
	int num;
	printf("Enter an integer from 0 to 9: ");
	scanf("%d",&num);
	switch(num){
		case 9: printf("Nine\n");
		case 8: printf("Eight\n");
		case 7: printf("Seven\n");
		case 6: printf("Six\n");
		case 5: printf("Five\n");
		case 4: printf("Four\n");
		case 3: printf("Three\n");
		case 2: printf("Two\n");
		case 1: printf("One\n");
		case 0: printf("Zero\n");
	}
	system("pause");
	return 0;
}
