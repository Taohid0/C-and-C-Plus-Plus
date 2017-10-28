#include <stdio.h>
#include <string.h>

int main()
{   FILE *strng;
    char word[80];

    strng = fopen("d:/data/words.txt","w");

    while(strlen(word)>0){
        gets(word);
        fputs(word,strng);
        fputs("\n",strng);
        }
        fclose(strng);

    return 0;
}
