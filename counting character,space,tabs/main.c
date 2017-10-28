#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *fp;
    char ch;
    int character = 0,tab = 0,space = 0,enter = 0;

    fp = fopen("d:/data/foul.txt","r");

    while(1){
        ch = fgetc(fp);

        if(ch== EOF)
            break;

        character++;

        if(ch == ' ')
            space++;

        if(ch == '\t')
            tab++;

        if(ch == '\n')
            enter++;
    }
    printf("character : %d\nspace : %d\ntab : %d\nenter : %d",character,space,tab,enter);

    return 0;
}
