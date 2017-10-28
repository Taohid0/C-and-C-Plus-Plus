#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{   char s[100];
    int i;

    printf("Wnter a sentence\n");
    gets(s);

    for(i=0;i<=strlen(s);i++){
            s[0] = toupper(s[0]);

            if(s[i]== ' ' || s[i] == '.'){
               s[i+1] = toupper(s[i+1]);}

         printf("%c",s[i]);
    }
    return 0;
}
