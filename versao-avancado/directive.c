// directive #line
#include <stdio.h>
#include <stdlib.h>

int main(){
    #line 5 "Assignment error"
    float a=;
    printf("Value of a = %f\n",a);
    printf("PI = %f\n",PI);
    system("pause");
    return 0;
}

// directive #error
#include <stdio.h>
#include <stdlib.h>

#ifndef PI
#error O value of PI not defined
#endif
int main(){
    printf("PI = %f\n",PI);
    system("pause");
    return 0;
}
