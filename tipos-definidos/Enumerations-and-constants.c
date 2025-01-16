#include <stdio.h>
#include <stdlib.h>
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
int main(){
    enum week s1, s2, s3;
    s1 = Monday;
    s2 = Tuesday;
    s3 = s1 + s2;
    printf("Sunday = %d\n",Sunday);
    printf("s1 = %d\n",s1);
    printf("s2 = %d\n",s2);
    printf("s3 = %d\n",s3);
    system("pause");
    return 0;
}
