#include <stdio.h>
#include <stdlib.h>


    int getcharacter(void){
        char letter;


        do{
        letter = getchar();}while(letter!= '\n');

        return letter ;
        }
int main()
{   char ch;

    ch = getcharacter();

    printf("%c",ch);
    return 0;
}
