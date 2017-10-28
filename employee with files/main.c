#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{   FILE *fp;
    char name[20];
    int age,salary;
    char another = 'y';

    fp = fopen("d:/data/employee.exe","w");

    if(fp==NULL){
        printf("cannot open file");
        exit(1);
    }
        while(another=='y'){

        printf("enter name,age ans salary\n");
      //  gets(name);
        scanf("%s%d%d",name,&age,&salary);

        fprintf(fp,"%s     %d    %d\n",name,age,salary);

        printf("do you want to enter another?/n");
        fflush(stdin);
        another = getchar();

    }
    fclose(fp);

    return 0;
}
