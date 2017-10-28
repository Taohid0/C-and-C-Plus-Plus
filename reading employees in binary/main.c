#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp;

    struct emp {
        char name[10];
        int age;
        int salary;};
    struct emp e;

    fp = fopen("d:/data/emp.txt","rb");
    while(fread(&e,sizeof(e),1,fp)==1){
        printf("%s %d %d",e.name,e.age,e.salary);
        }
    fclose(fp);


    return 0;
}
