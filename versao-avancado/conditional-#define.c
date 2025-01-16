// With #define
#include <stdio.h>
#include <stdlib.h>
#define value
int main(){
    #ifdef valor
        printf("Defined value\n");
    #else
        printf("Value NOT defined\n");
    #endif
    system("pause");
    return 0;
}

// No #define
#include <stdio.h>
#include <stdlib.h>

int main(){
    #ifdef value
        printf("Defined value\n");
    #else
        printf("Value NOT
    defined\n");
    #endif
    system("pause");
    return 0;
}

// constants with #define
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415
int main(){
    printf("Value of PI = %f\n",PI);
    system("pause");
    return 0;
}
