#include <stdio.h>
#include <stdlib.h>

int main()
{   char character;

    printf("enter a letter\n");
    scanf("%c",&character);

    if(character>=97 && character<=122)
    {
        printf("%c",(character-32));
    }
    else
        printf("%c",character);
    return 0;
}
