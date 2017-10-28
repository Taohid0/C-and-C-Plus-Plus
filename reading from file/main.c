#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp;
    char s[50];

    fp = fopen("d:/data/words.txt","r");

    if (fp == NULL){
        printf("cannot open file");
        exit(1);

    }

    while(fgets(s,49,fp)!=NULL){
        printf("%s",s);
    }
    fclose(fp);

    return 0;
}
