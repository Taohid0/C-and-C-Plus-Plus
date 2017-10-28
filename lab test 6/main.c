#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp;

    struct book{
        char name[15];
        char author[15];
        int page;
        float price;};
        struct book b[100];
        int num,i,j;
    fp = fopen("D:/data/lab test 6.txt","w");

    if(fp==NULL){
        printf("target file cannot open");
        exit(EXIT_FAILURE);
    }
    printf("how many data do you want to entetr?\n");
    scanf("%d",&num);

    printf("enter then book name,author name,page and price : \n");
    for(i=0;i<num;i++){
            getchar();
        gets(b[i].name);
        getchar();
        gets(b[i].author);

        scanf("%d%f",&b[i].page,&b[i].price);
    }

    for(j=0;j<num;j++){
        fprintf(fp,"%s   %s   %d   %f\n",b[j].name,b[j].author,b[j].page,b[j].price);
    }
    fclose(fp);
    return 0;
}
