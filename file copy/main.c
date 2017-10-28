#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp,*fs;
    char ch;

    fp = fopen("d:/data/foul.txt","r");

    if(fp == NULL){
        printf("cannot open source file");
        exit(0);
    }
    fs = fopen("d:/data/foult2.txt","w");

    if(fs == NULL){
        printf("target file cannot open");
        exit(0);
        }

    while(1){
        ch = fgetc(fp);

        if(ch == EOF)
            break;
        fputc(ch,fs);

    }

    return 0;
}
