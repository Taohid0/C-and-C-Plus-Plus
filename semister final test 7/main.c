#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp;
    char ch;
    int space= 0,tab = 0,enter = 0;

    fp = fopen("D:/data/faltu file.txt","r");
    if(fp==NULL){
        printf("source file cannot open\n");
        exit(0);
    }
    while(1){
        ch= fgetc(fp);
        if(ch==EOF){
            break;
        }
        if(ch==' '){
            space++;
        }
        if(ch=='\t'){
            tab++;
        }
        if(ch=='\n'){
            enter++;
        }
    }fclose(fp);
    printf("space = %d\ntab = %d\nenter = %d\n",space,tab,enter);
    return 0;
}
