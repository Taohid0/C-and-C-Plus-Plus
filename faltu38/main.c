#include <stdio.h>
#include <stdlib.h>

int main()
{

 	int numberOfCharacters;
	int i, j, k;
    char c = 'A';

	for (i = 6; i > 0; i--)
    {
        for(k = 0; k < 6 - i; k++)
            printf("  ");

        for(j=0; j<i;j++) {
            printf("%c ", c++);
        }

        printf("\n");
    }

	return 0;
}
