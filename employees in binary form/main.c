#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp;
    char another  = 'y';

    struct emp{
        char name[10];
        int age;
        int salary;
        };
    struct emp e;

    fp = fopen("d:/data/emp.txt","wb");

    if (fp == NULL){
        printf("target file cannot open.");
        exit(0);
    }

    while(another == 'y'){
        printf("enter employees name,age and salary : ");
        scanf("%s%d%d",e.name,&e.age,&e.salary);
        fwrite(&e,sizeof(e),1,fp);

        printf("do you want another?");

        fflush(stdin);
        another  = getchar();
    }
    fclose(fp);

    return 0;
}
