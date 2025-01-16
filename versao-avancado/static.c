// global variables with static
#include <stdio.h>
#include <stdlib.h>
int x = 20;
static int y = 10;
int main(){
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    system("pause");
    return 0;
}

// local variables with static
#include <stdio.h>
#include <stdlib.h>
void imprime(){
    static int n = 0;
    printf("%d\n",n++);
}
int main(){
    int i;
    for(i=1; i<=10; i++)
        print();
    system("pause");
    return 0;
}

// functions with static
#include <stdio.h>
#include <stdlib.h>
static void print(){
    printf("Running print function()\n");
}
int main(){
    print();
    system("pause");
    return 0;
}
