#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *strng;
    char word[80];

    strng = fopen("d:/data/words.txt","r");

    while(fgets(word,79,strng)!=NULL ){

        puts(word);

       // fputs("\n",strng);
        }
        fclose(strng);

    return 0;
}
