#include <stdio.h>
#include <stdlib.h>
enum week {Sunday = 1, Monday, Tuesday, Wednesday=7, Thursday, Friday, Saturday};
int main(){
    printf("Sunday = %d\n",Sunday);
    printf("Monday = %d\n",Monday);
    printf("Tuesday = %d\n",Tuesday);
    printf("Wednesday = %d\n",Wednesday);
    printf("Thursday = %d\n",Thursday);
    printf("Friday = %d\n",Friday);
    printf("Saturday = %d\n",Saturday);
    system("pause");
    return 0;
}
