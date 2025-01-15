#include <stdio.h>
#include <stdlib.h>
int main(){
    float n1,n2,n3,n4,n5;
    printf("Enter the grade of 5 students: ");
    scanf("%f",&n1);
    scanf("%f",&n2);
    scanf("%f",&n3);
    scanf("%f",&n4);
    scanf("%f",&n5);
    float average = (n1+n2+n3+n4+n5)/5.0;
    if(n1 > average) printf("note: %f\n ", n1);
    if(n2 > average) printf("note: %f\n ", n2);
    if(n3 > average) printf("note: %f\n ", n3);
    if(n4 > average) printf("note: %f\n ", n4);
    if(n5 > average) printf("note: %f\n ", n5);
    system("pause");
    return 0;
}
