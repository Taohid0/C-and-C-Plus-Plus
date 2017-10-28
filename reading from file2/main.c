#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp;
    char s[20];
    int age2,beton;

    fp = fopen("d:/data/employee.txt","r");

    if(fp==NULL){
        printf("cannot open file");
        exit(1);
    }
       while(fscanf(fp,"%s%d%d",s,&age2,&beton)!= EOF){
        printf("%s   %d     %d\n",s,age2,beton);
       }
       fclose(fp);

    return 0;
}
