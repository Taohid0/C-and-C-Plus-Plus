#include <stdio.h>
#include <stdlib.h>

int main()
{FILE *fp,*fs;
char ch;
    fp = fopen("D:/data/faltu file.txt","r");
    fs = fopen("D:/data/lab test 1.txt","w");
    if(fp==NULL){
        printf("source file cannot open");
        exit(EXIT_FAILURE);
    }
    if(fs==NULL){
        printf("target file cannot open");
        exit(EXIT_FAILURE);
    }
     while(1){
           ch = fgetc(fp);
            if(ch==EOF){
                break;}
            fputc(ch,fs);

            printf("%c",ch);

     }
     fclose(fp);
     fclose(fs);
    return 0;
}
