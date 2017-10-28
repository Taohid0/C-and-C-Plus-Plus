#include <stdio.h>
#include <stdlib.h>

int main()
{    FILE *fp;
     char another = 'y';

     struct emp {
                char name[10];
                int age;
                int payment;
                };
                struct emp e;

       fp = fopen("d:/data/employee.txt","w");

       if (fp == NULL){
        printf("target file cannot open");
        exit(0);
       }

       while(another =='y'){
       printf("enter employees name,age and payment : \n");
       scanf("%s%d%d",e.name,&e.age,&e.payment);

      fprintf(fp,"%s%d%d\n",e.name,e.age,e.payment);
      fflush(stdin);
      printf("do you want to enter another?");
      another = getchar();
      }
    return 0;
}
