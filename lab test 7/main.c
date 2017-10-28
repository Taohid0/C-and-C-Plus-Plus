#include <stdio.h>
#include <stdlib.h>

int main()
{  FILE *fp;
   int i;

    struct book{
        char name[15];
        char author[15];
        int page;
        float price;};
        struct book b[100];

    fp = fopen("D:/data/lab test 6.txt","r");

    if(fp==NULL){
        printf("source file cannot open");
        exit(EXIT_FAILURE);
    }
    while(1){for(i=0;i<3;i++){
            if(b[i].name==NULL){
                break;
            }
        fgets(b[i].name,99,fp);
        fgets(b[i].author,99,fp);
        fscanf(fp,"%d%f",&b[i].page,&b[i].price);
        printf("%s   %s   %d   %f",b[i].name,b[i].author,b[i].page,b[i].price);
    }}
    fclose(fp);
    return 0;
}
