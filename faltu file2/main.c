#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp,*fs;
    char ch;
    //int space=0,enter=0,character=0,tab = 0;

    fp  = fopen("d:/data/faltu file.txt","r");
    fs = fopen("d:/data/faltu file copy.txt","w");

    if (fp == NULL){
        printf("source file cannot open");
        exit(EXIT_FAILURE);
    }
    if (fs == NULL){
        printf("target file cannot open");
        exit(EXIT_FAILURE);
    }

    while(1){
            ch = fgetc(fp);

            if (ch == EOF)
                break;
            fputc(ch,fs);

            putchar(ch);

    }
    fclose(fp);
    fclose(fs);



    return 0;
}
