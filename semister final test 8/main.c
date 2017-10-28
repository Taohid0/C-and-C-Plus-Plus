#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp,*fs;
    char ch;

    fp = fopen("D:/data/faltu file.txt","r");
    fs = fopen("D:/data/semister final test 8.txt","w");

    if(fp==NULL){
        printf("source file cannot open");
        exit(0);
    }
    if(fs==NULL){
        printf("target file cannot open");
        exit(0);
    }
    while(1){
            ch = fgetc(fp);

            if(ch==EOF){
                break;
            }
            fputc(ch,fs);
    }
    fclose(fp);
    fclose(fs);
    return 0;
}
