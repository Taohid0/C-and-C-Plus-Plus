#include <stdio.h>
#include <stdlib.h>

int main()
{   char character;

    printf("enter a character\n");
    scanf("%c",&character);

    if(character=='a' || character == 'e' || character == 'i' || character == 'o' || character == 'u'){
        printf("%c is a vowel",character);
    }
    else
        printf("%c is not a vowel",character);

    return 0;
}
