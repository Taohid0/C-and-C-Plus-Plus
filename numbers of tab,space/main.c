#include <stdio.h>
#include <stdlib.h>

int main()
{    char ch;

    FILE *fp;
    int space=0,character=0,enter=0;

    fp = fopen("D:/data/even.txt","r");

    while(1){
            ch = fgetc(fp);

        if (ch==EOF)
            break;
          character++;

        if(ch == ' ')
            space++;

        if(ch == '\n')
             enter++;
    }
    printf("character %d\nspace %d\nenter %d",character,space,enter);
    return 0;
}
