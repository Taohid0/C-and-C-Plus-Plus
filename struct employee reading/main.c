#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp;

    struct emp {
        char name[10];
        int age;
        int payment;};

        struct emp e;

        fp = fopen("d:/data/employee.txt","r");

        if (fp == NULL){
            printf("source file cannot open.");
            exit(0);
        }
        while (fscanf(fp,"%s%d%d",e.name,&e.age,&e.payment)!=EOF){
            printf("%s %d %d\n",e.name,e.

                   age,e.payment);
        }
       fclose(fp);

    return 0;
}
