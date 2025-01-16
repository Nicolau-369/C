#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,y;
    printf("Enter three integers: ");
    scanf("%d %*d %d",&x,&y);
    printf("Numbers read: %d e %d\n",x,y);
    char name[20], course[20];
    printf("Enter name, age and course: ");
    scanf("%s %*d %s",name,course);
    printf("Name: %s\nCourse: %s\n",name,course);
    system("pause");
    return 0;
}
