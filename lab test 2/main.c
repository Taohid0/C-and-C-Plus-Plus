#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{   FILE *fp;
    char words[1000];

    fp = fopen("D:/data/lab test 2.txt","w");

    if(fp==NULL){
        printf("target file cannot open");
        exit(EXIT_FAILURE);
    }
    printf("Enter words\n");

    while ( strlen ( gets ( words ) ) !='\0' ){
          fputs(words,fp);
          fputs("\n",fp);
          }
          fclose(fp);
    return 0;
}
