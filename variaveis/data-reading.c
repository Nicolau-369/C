#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,z;
    float y;
    // Reading an integer value
    scanf("%d",&x);
    // Reading a real value
    scanf("%f",&y);
    // Reading an integer and a real value
    scanf("%d%f",&x,&y);
    // Reading two integer values
    scanf("%d%d",&x,&z);
    // Reading two integer values ​​with spaces
    scanf("%d %d",&x,&z);
    system("pause");
    return 0;
}
