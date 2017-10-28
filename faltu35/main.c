#include <stdio.h>
#include <stdlib.h>

int main()
{
   char c='A';
	int line, spaceCount, charCount;

	line = 0;
	charCount = 0;
	while( line < 5 )
	{
		charCount = 0;
		while(charCount < line ) {
			c++;
			charCount++;
		}
		line++;
	}

	line = 0;
	charCount = 0;
	while( line < 5 )
	{
		//for space
		spaceCount = 0;
		while( spaceCount < line )
		{
			printf(" ");
			spaceCount++;
		}

		//for char
		charCount = 0;
		while( charCount < 5-line )
		{
			printf("%c", c--);
			charCount++;
		}
		printf("\n");

		line++;
	}
    return 0;
}
