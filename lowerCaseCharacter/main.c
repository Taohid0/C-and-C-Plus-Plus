#include <stdio.h>
#include <stdlib.h>

int main()
{   char ch;

    printf("insert a character\n");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z')
        printf("the character is lower case\n");
    else
        printf("the character is upper case");

    return 0;
}
