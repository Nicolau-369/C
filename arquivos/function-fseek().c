#include <stdio.h>
#include <stdlib.h>
struct register{ char name[20], street[20]; int age;};
int main(){
    FILE *f = fopen("archive.txt","wb");
    if(f == NULL){
    printf("Error opening\n");
    system("pause");
    exit(1);
    }
    struct street s,str[4] = {"Nick","Street 1",18,
                                "Spritz","Street 2",28,
                                "Gnoomer","Street 3",17,
                                "Despertar","Street 4",23};
    fwrite(cad,sizeof(struct register),4,f);
    fclose(f);
    f = fopen("archive.txt","rb");
    if(f == NULL){
        printf("Error opening\n");
        system("pause");
        exit(1);
    }
    fseek(f,2*sizeof(struct register),SEEK _ SET);
    fread(&c,sizeof(struct register),1,f);
    printf("%s\n%s\n%d\n",c.name,c.street,c.age);
    fclose(f);
    system("pause");
    return 0;
    }
