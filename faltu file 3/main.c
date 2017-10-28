#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   FILE *fp;
    char str[100];

    fp = fopen("D:/data/faltu file 3.txt","w");

    if (fp == NULL){
        printf("target file cannot open");
        exit(EXIT_FAILURE);
    }

    while ((strlen(gets(str)))>0){
          fputs(str,fp);
          fputs("\n",fp);
    }
    fclose(fp);

    return 0;
}
