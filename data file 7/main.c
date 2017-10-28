#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp;

    char name[15],file_name[15];
    int quantity,i;
    float price,value;

    printf("input file name : \n");
    scanf("%s",file_name);

    fp = fopen(file_name,"w");

    printf("enter items name,quantity ans price \n ");

    for(i=1;i<=3;i++){
        fscanf(stdin,"%s,%d,%f",name,&quantity,&price);

        fprintf(fp,"%s,%d,%f",name,&quantity,&price);
    }
    fclose(fp);

    return 0;

}
