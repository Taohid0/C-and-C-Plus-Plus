#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{   FILE *fp;
    char word[80];

    fp = fopen("d:/data/lekha.txt","w");

    if (fp == NULL){
        printf("file cannot open");
        exit(0);

    }
    while(1){
        gets(word);

        if (strlen(word)>0){
            fputs(word,fp);
        }
        else
            break;
        fputs("\n",fp);

    }

    return 0;
}
