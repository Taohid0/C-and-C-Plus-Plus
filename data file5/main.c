#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *character;

     char ch;

    character = fopen("d:/data/character.txt","w");

    printf("a data file is opened for you,\nwrite something\npress Ctrl+Z at the end\n");

    while ((ch=getchar()) != EOF){
        putc(ch,character);
        }

    fclose(character);

    character = fopen("d:/data/character.txt","r");

    while ((ch=getchar()) != EOF){
        printf("%c",ch);
        }
        fclose(character);

    return 0;
}
