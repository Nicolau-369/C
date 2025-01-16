// always printing the number sign
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 5;
    //no signal
    printf("n = %d\n",n);
    //with signal
    printf("n = %+d\n",n);
    system("pause");
    return 0;
}

// printing spaces or zeros before the number
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 5;
    //with spaces (default)
    printf("n = % 5d\n",n);
    //with zeros
    printf("n = %05d\n",n);
    system("pause");
    return 0;
}

// printing the prefix and decimal point
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 125;
    //octal and hexadecimal without prefix
    printf("x = %o\n",n);
    printf("x = %X\n",n);
    //octal and hexadecimal with prefix
    printf("x = %#o\n",n);
    printf("x = %#X\n",n);
    float x = 5.00;
    //float without dot
    printf("x = %.f\n",x);
    //float with dot
    printf("x = %#.f\n",x);
    system("pause");
    return 0;
}
