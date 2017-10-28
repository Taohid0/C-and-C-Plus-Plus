#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp,*fs;
    char ch;
    int space=0,enter=0,character=0,tab = 0;

    fp  = fopen("d:/data/faltu file.txt","r");
    fs = fopen("d/data/faltu file copy.txt","w");

    while(1){
            ch = fgetc(fp);

            if (ch == EOF)
                break;
            character++;

           if(ch == ' ')
            space++;

           if (ch == '\t')
            tab++;

           if (ch == '\n')
            enter++;
    }

         fclose(fp);
         printf("characters = %d\nspace = %d\ntab = %d\nenter = %d",character,space,tab,space);


    return 0;
}
