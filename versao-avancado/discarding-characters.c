#include <stdio.h>
#include <stdlib.h>
int main(){
    int d,m,a;
    printf("Enter the date in day/month/year format: ");
    scanf("%d/%d/%d",&d,&m,&a);
    printf("%d - %d - %d\n",d,m,a);
    system("pause");
    return 0;
}
