#include <stdio.h>
#include <stdlib.h>

int main()
{ char character;

    printf("Enter a character\n");
    scanf("%c",&character);

    switch (character)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
                  printf("your choice is vowel");
                  break;

        default : printf("your choice is a consonant");
                  break;

    }
    return 0;
}
