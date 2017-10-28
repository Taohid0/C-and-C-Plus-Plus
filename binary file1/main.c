#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fs,*ft;
    int ch;

    fs = fopen("d:/data/binary.txt","rb");

    if (fs == NULL){
        printf("cannot open file");
        exit(1);
    }

    ft = fopen("d:/data/binary1.txt","wb");

    if (ft==NULL){
        printf("target file cannot open");
        exit(1);
    }
    while(1){
        ch = fgetc(fs);

        if (ch == EOF)
            break;
        else
            fputc(ch,ft);
    }

    fclose(fs);
    fclose(ft);

    return 0;
}
